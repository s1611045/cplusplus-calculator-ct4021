#include "stdafx.h"
#include <string>
#include <cctype>
#include <stack>
#include <cstdlib>
#include <vector>
#include <iostream>
#include "calculator.h"


calculator::calculator()
{
}


calculator::~calculator()
{
}

std::stack<char> calculator::convertToPostfix()
{
	std::stack<char> postfixStack;
	std::stack<char> opStack;
	std::stack<char> calculationStack;
	
	//Checking input string character by character
	for (int i = 0; i<calculator::inputCalculation.length(); i++)
	{	
		if (isdigit(calculator::inputCalculation.at(i)))
		{
			//If character is a digit, convert to char, add to postfix stack
			std::cout << "added digit to postfix stack" << std::endl;
			char buffer[12];
			char digit = sprintf(buffer, "%d", calculator::inputCalculation.at(i));
			postfixStack.push(calculator::inputCalculation.at(i));
		}
		else
		{
			//If character is not a digit and operator stack is empty, add to operator stack
			if (opStack.empty())
			{
				opStack.push(calculator::inputCalculation.at(i));
			}
			//If character is not a digit and operator stack is not empty...
			else
			{
				//...and the operator has a HIGHER BODMAS precedence than operator at top of the operator stack, push the character to the operator stack
				if ((opStack.top() == '-' || opStack.top() == '+') && (calculator::inputCalculation.at(i) == '*' || calculator::inputCalculation.at(i) == '/'))
				{
					opStack.push(calculator::inputCalculation.at(i));
				}
				//...and the operator has a LOWER BODMAS precedence than operator at top of the operator stack, push the character at the top of the operator
				//stack to the postfix stack and pop the character at the top of the operator stack until the string character has a higher precedence than
				//the character at the top of the operator stack
				else
				{
					while (opStack.top() == '*' || opStack.top() == '/')
					{
						postfixStack.push(opStack.top());
						opStack.pop();
					}
					opStack.push(calculator::inputCalculation.at(i));
				}
			}
		}
	}

	//////////////////////////////////////////////////////////////////////
	////////////////////////PRINTING STACKS///////////////////////////////
	//////////////////////////////////////////////////////////////////////
	std::stack<char> tStack1 = postfixStack;
	std::stack<char> tStack2 = opStack;

	std::cout << std::endl << "Postfix stack:" << std::endl;
	while (tStack1.empty() == false)
	{
		std::cout << tStack1.top();
		tStack1.pop();
	}
	std::cout << std::endl << "Op stack" << std::endl;
	while (tStack2.empty() == false)
	{
		std::cout << tStack2.top();
		tStack2.pop();
	}
	//////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////

	//Converting postfix stacks and operator stacks to calculation stack
			
	//Adding postfix stack to calculation stack (reversing its order)
	while (postfixStack.empty() == false)
	{
		calculationStack.push(postfixStack.top());
		postfixStack.pop();
	}
	//Adding opstack to calculation stack (mantaining its order)
	std::stack<char> tempStack;

	while (opStack.empty() == false)
	{
		tempStack.push(opStack.top());
		opStack.pop();
	}
	while (tempStack.empty() == false)
	{
		calculationStack.push(tempStack.top());
		tempStack.pop();
	}

	//Returning calculation stack
	return calculationStack;
}
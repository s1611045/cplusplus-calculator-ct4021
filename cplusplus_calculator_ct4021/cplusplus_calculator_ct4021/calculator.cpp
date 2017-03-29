#include "stdafx.h"
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <ctype.h>
#include "calculator.h"
#include <stdio.h>

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
					while (opStack.empty() == false)
					{
						postfixStack.push(opStack.top());
						opStack.pop();
					}
					opStack.push(calculator::inputCalculation.at(i));
				}
			}
		}
	}

	//Converting postfix stacks and operator stacks to calculation stack
			
	//Adding postfix stack to calculation stack (reversing its order)
	std::stack<char> tempStack;
	while (postfixStack.empty() == false)
	{
		tempStack.push(postfixStack.top());
		postfixStack.pop();
	}

	while (tempStack.empty() == false)
	{
		calculationStack.push(tempStack.top());
		tempStack.pop();
	}

	//Adding opstack to calculation stack (mantaining its order)
	while (opStack.empty() == false)
	{
		calculationStack.push(opStack.top());
		opStack.pop();
	}

	//Returning calculation stack
	return calculationStack;
}

int calculator::add(int a, int b)
{
	std::cout << std::endl << std::endl << "added numbers to equal: " << a + b;
	return a + b;
}

int calculator::subtract(int a, int b)
{
	std::cout << std::endl << std::endl << "subtracted numbers to equal: " << a - b;
	return a - b;
}

int calculator::divide(int a, int b)
{
	std::cout << std::endl << std::endl << "divided numbers to equal: " << a / b;
	return a / b;
}

int calculator::multiply(int a, int b)
{
	std::cout << std::endl << std::endl << "multiplied numbers to equal: " << a * b;
	return a * b;
}

char calculator::calculate()
{
	//Declaring temporary stack used in operations
	std::stack<char> tempStack;

	//Reversing order of calculation stack
	std::stack<char> flipStack = calculationStack;

	while (calculationStack.empty() == false)
	{
		calculationStack.pop();
	}

	while (flipStack.empty() == false)
	{
		calculationStack.push(flipStack.top());
		flipStack.pop();
	}
	
	int stackSize = calculationStack.size();

	for (int i = 0; i < stackSize; i++)
	{
		std::cout << std::endl << std::endl << std::endl << "reached new iteration of for loop";
		//Push to temporary stack while the top character of the calculation stack is a digit
		while (isdigit(calculationStack.top()))
		{
			tempStack.push(calculationStack.top());
			std::cout << std::endl << std::endl << "calc stack top character: " << calculationStack.top();
			calculationStack.pop();
			std::cout << std::endl << std::endl << "popped top char of calc stack";
		}

		//When top character of calculation stack is not a digit, parse the operator, extrapolate
		//operands from temp stack and perform calculation appropriately
		int result = 0;
		int a = 0;
		int b = 0;
		switch (calculationStack.top())
		{
		case '+':
			 a = tempStack.top();
			tempStack.pop();
			 b = tempStack.top();
			result = add(b, a);
			break;
		case '-':
			 a = tempStack.top();
			tempStack.pop();
			 b = tempStack.top();
			result = subtract(b, a);
			break;
		case '*':
			 a = tempStack.top();
			tempStack.pop();
			 b = tempStack.top();
			result = multiply(b, a);
			break;
		case '/':
			 a = tempStack.top();
			tempStack.pop();
			 b = tempStack.top();
			result = divide(b, a);
			break;
		}
		
		//Push result to temp stack
		std::cout << std::endl << std::endl << "pushing " << result << " to temp stack";
		tempStack.push(result);

		//Pop operator from calculation stack
		calculationStack.pop();

		//Push to calculation stack & pop from temp stack until temp stack is empty
		while (tempStack.empty() == false)
		{
			calculationStack.push(tempStack.top());
			tempStack.pop();
		}
	}

	return calculationStack.top();
}
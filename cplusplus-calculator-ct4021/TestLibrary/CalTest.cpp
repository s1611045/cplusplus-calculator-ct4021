#include "stdafx.h"
#include "CalTest.h"
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <ctype.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

CalTest::CalTest()
{
}


CalTest::~CalTest()
{
}

calculator::calculator()
{
}


calculator::~calculator()
{
}

std::stack<std::string> calculator::convertToPostfix()
{
	std::stack<std::string> postfixStack;
	std::stack<std::string> opStack;
	std::stack<std::string> calculationStack;

	//Checking input string character by character
	for (int i = 0; i<calculator::inputCalculation.length(); i++)
	{
		std::stringstream ss;
		std::string s;
		ss << inputCalculation.at(i);
		ss >> s;

		if (isdigit(s[0]))
		{
			//If character is a digit, convert to string, add to postfix stack
			postfixStack.push(s);
		}
		else
		{
			//If character is not a digit and operator stack is empty, add to operator stack
			if (opStack.empty())
			{
				opStack.push(s);
			}
			//If character is not a digit and operator stack is not empty...
			else
			{
				//...and the operator has a HIGHER BODMAS precedence than operator at top of the operator stack, push the character to the operator stack
				if ((opStack.top() == "-" || opStack.top() == "+") && (calculator::inputCalculation.at(i) == '*' || calculator::inputCalculation.at(i) == '/'))
				{
					opStack.push(s);
				}

				//... if the operator is a power/exponent (and square root), push the character immediately to the operator stack (as it always has highest precedence)
				else if (calculator::inputCalculation.at(i) == '^')
				{
					opStack.push(s);
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
					opStack.push(s);
				}
			}
		}
	}

	//Converting postfix stacks and operator stacks to calculation stack

	//Adding postfix stack to calculation stack (reversing its order)
	std::stack<std::string> tempStack;
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
	int result = a + b;
	return result;
}

int calculator::subtract(int a, int b)
{
	int result = a - b;
	return result;
}

int calculator::divide(int a, int b)
{
	int result = a / b;
	return result;
}

int calculator::multiply(int a, int b)
{
	int result = a * b;
	return result;
}

int calculator::exponent(int a, int b)
{
	int result = pow(a, b);
	return result;
}

int calculator::squareRoot(int a)
{
	int result = sqrt(a);
	return result;
}

int calculator::convertToInteger(std::string a)
{
	int i;
	char buffer[256];
	a.copy(buffer, a.size(), 0);
	i = atoi(buffer);
	//Flushing buffer after use
	std::fill(std::begin(buffer), std::end(buffer), NULL);
	return i;
}

std::string calculator::convertToString(int a)
{
	std::string s = std::to_string(a);
	return s;
}

std::string calculator::calculate()
{
	//Declaring temporary stack used in operations
	std::stack<std::string> tempStack;

	//Reversing order of calculation stack
	std::stack<std::string> flipStack = calculationStack;

	while (calculationStack.empty() == false)
	{
		calculationStack.pop();
	}

	while (flipStack.empty() == false)
	{
		calculationStack.push(flipStack.top());
		flipStack.pop();
	}

	//Calculating how many times calculation process needs to repeat
	//(dependent on number of operators in user input)
	int operatorCount = 0;
	for (int i = 0; i < inputCalculation.length(); i++)
	{
		if (!isdigit(inputCalculation.at(i)))
		{
			operatorCount = operatorCount + 1;
		}
		else
		{
		}
	}

	//Calculation process
	for (int i = 0; i < operatorCount; i++)
	{
		//Push to temporary stack while the top character of the calculation stack is a digit
		while (isdigit(calculationStack.top()[0]))
		{
			tempStack.push(calculationStack.top());
			calculationStack.pop();
		}

		//When top character of calculation stack is not a digit, parse the operator, extrapolate
		//operands from temp stack, convert them to integers and perform calculation appropriately
		int result = 0;
		int a = 0;
		int b = 0;
		switch (calculationStack.top()[0])
		{
		case '+':
			a = convertToInteger(tempStack.top());
			tempStack.pop();
			b = convertToInteger(tempStack.top());
			tempStack.pop();
			result = add(b, a);
			break;
		case '-':
			a = convertToInteger(tempStack.top());
			tempStack.pop();
			b = convertToInteger(tempStack.top());
			tempStack.pop();
			result = subtract(b, a);
			break;
		case '*':
			a = convertToInteger(tempStack.top());
			tempStack.pop();
			b = convertToInteger(tempStack.top());
			tempStack.pop();
			result = multiply(b, a);
			break;
		case '/':
			a = convertToInteger(tempStack.top());
			tempStack.pop();
			b = convertToInteger(tempStack.top());
			tempStack.pop();
			result = divide(b, a);
			break;
		case '^':
			a = convertToInteger(tempStack.top());
			tempStack.pop();
			b = convertToInteger(tempStack.top());
			tempStack.pop();
			result = exponent(b, a);
		}

		//Convert result to string to be accepted into stack
		std::string resultString = convertToString(result);

		//Pop operator from calculation stack
		calculationStack.pop();

		//Pushing calculation result into calculation stack
		calculationStack.push(resultString);

		//Push to calculation stack & pop from temp stack until temp stack is empty
		while (tempStack.empty() == false)
		{
			calculationStack.push(tempStack.top());
			tempStack.pop();
		}
	}

	std::stringstream ss;
	std::string calculationResult;

	ss << calculationStack.top();
	ss >> calculationResult;

	return calculationResult;
}
#pragma once
#include <string>
#include <stack>
class CalTest
{
public:
	CalTest();
	~CalTest();
};

class calculator
{
public:
	calculator();
	~calculator();
	std::string inputCalculation;
	std::stack<std::string> calculationStack;
	std::stack<std::string> convertToPostfix();
	std::string convertToString(int a);
	int convertToInteger(std::string a);
	int add(int a, int b);
	int subtract(int a, int b);
	int divide(int a, int b);
	int multiply(int a, int b);
	int exponent(int a, int b);
	int squareRoot(int a);
	std::string calculate();
};

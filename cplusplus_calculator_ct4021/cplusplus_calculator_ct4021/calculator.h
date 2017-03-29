#pragma once
class calculator
{
public:
	calculator();
	~calculator();
	std::string inputCalculation;
	std::stack<char> calculationStack;
	std::stack<char> convertToPostfix();
	int add(int a, int b);
	int subtract(int a, int b);
	int divide(int a, int b);
	int multiply(int a, int b);
	char calculate();
};
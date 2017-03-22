#pragma once
class calculator
{
public:
	calculator();
	~calculator();
	std::string inputCalculation;
	std::stack<char> calculationStack;
	std::stack<char> convertToPostfix();
	std::string calculate();
};


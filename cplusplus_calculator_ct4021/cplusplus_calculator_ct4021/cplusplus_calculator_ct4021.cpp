// cplusplus_calculator_ct4021.cpp : Defines the entry point for the console application.

//Including appropriate libraries and headers
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include "calculator.h"


int main()
{
	std::cout << "C++ CALCULATOR, DEVELOPED BY COSKUN DEMIR FOR CT4021" << std::endl;
	std::cout << "Please enter your calculation below: " << std::endl;

	//Instantiating calculator class
	calculator calc;

	std::getline(std::cin, calc.inputCalculation);
	std::cout << std::endl << std::endl << "You have entered: " << std::endl;
	std::cout << calc.inputCalculation << std::endl;

	//Parsing user input
	calc.calculationStack = calc.convertToPostfix();
	
	//Printing converted user input
	std::cout << std::endl << "This is converted to (in reverse order): " << std::endl;
	
	std::stack<char> tempStack = calc.calculationStack;
	while (tempStack.empty() == false)
	{
		std::cout << tempStack.top();
		tempStack.pop();
	}

	//Calculating user input
	std::cout << std::endl << std::endl << "The result is:" << std::endl;
	std::cout << calc.calculate();

	std::cin.get();
    return 0;
}
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../TestLibrary/CalTest.h"
#include <string>
#include <stack>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		//TEST_METHOD(TestMethod1)
		//{
		//	std::stack<std::string> stack;
		//	stack.push("+");
		//	stack.push("*");
		//	stack.push("3");
		//	stack.push("6");
		//	stack.push("-");
		//	stack.push("6");
		//	stack.push("+");
		//	stack.push("/");
		//	stack.push("3");
		//	stack.push("9");

		//	calculator calc;
		//	calc.inputCalculation = "6+9/3-6+6*3";

		//	Assert::AreEqual(stack, calc.convertToPostfix());
		//}

		TEST_METHOD(AdditionLogicTest)
		{
			calculator calc;
			Assert::AreEqual(14, calc.add(5, 9));
		}

		TEST_METHOD(SubtractionLogicTest)
		{
			calculator calc;
			Assert::AreEqual(24, calc.subtract(46, 22));
		}

		TEST_METHOD(MultiplicationLogicTest)
		{
			calculator calc;
			Assert::AreEqual(45, calc.multiply(5, 9));
		}

		TEST_METHOD(DivisionLogicTest)
		{
			calculator calc;
			Assert::AreEqual(3, calc.divide(9, 3));
		}

		TEST_METHOD(ExponentLogicTest)
		{
			calculator calc;
			Assert::AreEqual(729, calc.exponent(9, 3));
		}

		TEST_METHOD(SquareRootLogicTest)
		{
			calculator calc;
			Assert::AreEqual(8, calc.squareRoot(64));
		}

		TEST_METHOD(StringCoversionTest)
		{
			std::string string = "5";
			calculator calc;
			Assert::AreEqual(string, calc.convertToString(5));
		}

		TEST_METHOD(IntegerCoversionTest)
		{
			std::string string = "8";

			calculator calc;
			Assert::AreEqual(8, calc.convertToInteger(string));
		}

		/*TEST_METHOD(CalculationTest)
		{
			std::string result = "21";

			calculator calc;
			calc.calculationStack.push("6");
			calc.calculationStack.push("9");
			calc.calculationStack.push("3");
			calc.calculationStack.push("/");
			calc.calculationStack.push("+");
			calc.calculationStack.push("6");
			calc.calculationStack.push("-");
			calc.calculationStack.push("6");
			calc.calculationStack.push("3");
			calc.calculationStack.push("*");
			calc.calculationStack.push("+");
			Assert::AreEqual(result, calc.calculate());
		}*/
	};
}
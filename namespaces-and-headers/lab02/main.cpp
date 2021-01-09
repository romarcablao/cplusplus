#include <iostream>
#include "calculator.h"

int main()
{

	int numbers[5] = {10, 20, 30, 40, 50};

	std::cout << Calculator::addition(numbers) << std::endl;
	std::cout << Calculator::subtraction(10, 5) << std::endl;
	std::cout << Calculator::multiplication(10, 5) << std::endl;
	std::cout << Calculator::division(10, 5) << std::endl;

	return 0;
}

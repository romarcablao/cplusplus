namespace Calculator
{
	int addition(int numbers[5])
	{
		int total = 0;
		for (int a = 0; a < 5; a++)
		{
			total += numbers[a];
		}
		return total;
	}
	int subtraction(int num1, int num2)
	{
		return num1 - num2;
	}
	double multiplication(double num1, double num2)
	{
		return num1 * num2;
	}
	double division(double num1, double num2)
	{
		return num1 / num2;
	}
} // namespace Calculator

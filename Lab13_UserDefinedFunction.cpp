#include <iostream>
using namespace std;

void add();
int subtract();
double product(double, double);
double quotient(double, double = 2);

int main()
{

	add();
	cout << subtract() + 100 << endl;
	cout << product(5, 2.5) << endl;
	cout << quotient(10) << endl;

	return 0;
}

void add()
{
	cout << 5 + 2 << endl;
}

int subtract()
{
	return 5 - 2;
}

double product(double num1, double num2)
{
	return num1 * num2;
}

double quotient(double num1, double num2)
{
	return num1 / num2;
}

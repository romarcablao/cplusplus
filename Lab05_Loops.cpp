#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int decrement = 0;

	cout << "Enter loop count:";
	cin >> count;
	decrement = count;

	for (int a = 1; a <= count; a++)
	{
		cout << a << "*" << decrement << " = " << a * decrement << endl;
		decrement--;
	}

	return 0;
}

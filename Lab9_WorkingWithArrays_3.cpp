#include <iostream>
using namespace std;

int main()
{

	string ordinal[] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
	int evenCtr = 0, oddCtr = 0, even;
	int num[10];

	cout << "Enter ten(10) numbers\n";
	for (int a = 0; a < 10; a++)
	{
		cout << "Enter " << ordinal[a] << " Number \t: ";
		cin >> num[a];

		if (num[a] % 2 == 0)
		{
			even += num[a];
			evenCtr++;
		}
		else
		{
			oddCtr++;
		}
	}

	cout << "\n-----------------\n";
	cout << "Sum of Even Numbers: " << even << endl;
	cout << "Average of Even Numbers: " << even / evenCtr << endl;
	cout << "There are " << evenCtr << " even numbers and " << oddCtr << " odd numbers." << endl;

	return 0;
}

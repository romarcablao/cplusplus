#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	char repeat;

	while (repeat != 'N')
	{
		cout << "Enter loop count:";
		cin >> count;

		for (int a = 1; a <= count; a++)
		{
			for (int b = 1; b <= a; b++)
			{
				cout << b;
			}
			cout << endl;
		}

		cout << "Would you like to repeat the logic? [Y/N]:";
		cin >> repeat;
	}

	return 0;
}

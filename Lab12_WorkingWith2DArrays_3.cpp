#include <iostream>
using namespace std;

int main()
{

	int arr[3][7] = {
		{1, 6, 7, 99, 98, 93, 92},
		{2, 5, 8, 100, 97, 94, 91},
		{3, 4, 9, 10, 96, 95, 90}};

	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 7; column++)
		{
			// logic
			if (arr[row][column] % 3 == 0)
			{
				cout << arr[row][column] << endl;
			}
		}
	}

	return 0;
}

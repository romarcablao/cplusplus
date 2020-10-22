#include <iostream>
using namespace std;

int main()
{

	/* merge arr1 and arr2
	 * arr1 => 1,2,3,4,5 	
	 * arr2 => 6,7,8,9,10	
	 * arr3 => {{1,2,3,4,5},{6,7,8,9,10}}
	 */

	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	int arr3[2][5];

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			if (a == 0)
			{
				arr3[a][b] = arr1[b];
			}
			else
			{
				arr3[a][b] = arr2[b];
			}
		}
	}

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			cout << "[" << a << "]"
				 << "[" << b << "]: " << arr3[a][b] << endl;
		}
	}

	return 0;
}

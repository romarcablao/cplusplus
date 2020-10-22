#include <iostream>
using namespace std;

int main()
{

	/* sum of arr1 and arr2 elements
	 * arr3[0][0] = arr1[0][0] + arr2[0][0]
	 * arr3[0][1] = arr1[0][1] + arr2[0][1]
	 * arr3[0][2] = arr1[0][2] + arr2[0][2]
	 * ...
	 */

	int arr1[3][5] = {
		{100, 12, 13, 14, 15},
		{6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5}};

	int arr2[3][5] = {
		{5, 4, 3, 2, 1},
		{10, 9, 8, 7, 6},
		{15, 14, 13, 12, 11}};

	int arr3[3][5];

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			arr3[a][b] = arr1[a][b] + arr2[a][b];
			cout << "[" << a << "]"
				 << "[" << b << "]: " << arr3[a][b] << endl;
		}
	}

	return 0;
}

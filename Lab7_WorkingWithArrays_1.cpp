#include <iostream>
using namespace std;

int main()
{

	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {6, 7, 8, 9, 10};
	int productMatrix[5];

	int ctr = 4;

	for (int a = 0; a < 5; a++)
	{
		productMatrix[a] = arr1[a] * arr2[ctr];
		ctr--;
	}

	for (int a = 0; a < 5; a++)
	{
		cout << productMatrix[a] << endl;
	}

	return 0;
}

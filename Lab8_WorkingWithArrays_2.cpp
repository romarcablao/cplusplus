#include <iostream>
using namespace std;

int main()
{

	int arr[5];
	int max, min;
	bool init = true;

	cout << "Enter five(5) numbers: \n";
	for (int a = 0; a < 5; a++)
	{
		cin >> arr[a];
		if (init)
		{
			max = arr[a];
			min = arr[a];
			init = false;
		}
		if (max < arr[a])
		{
			max = arr[a];
		}
		if (min > arr[a])
		{
			min = arr[a];
		}
	}
	cout << "Max: " << max << "\tMin: " << min << endl;

	return 0;
}

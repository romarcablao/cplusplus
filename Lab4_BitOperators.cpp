#include <iostream>
using namespace std;

int main()
{

	cout << "1. 100 | 100 = " << (100 | 100) << endl;
	cout << "2. 100 & 100 = " << (100 & 100) << endl;
	cout << "3. 100 ^ 100 = " << (100 ^ 100) << endl;
	cout << "4. 100 << 0 = " << (100 << 0) << endl;
	cout << "5. 100 >> 0 = " << (100 >> 0) << endl;
	cout << "6. 100 << 1 = " << (100 << 1) << endl;
	cout << "7. 100 >> 1 = " << (100 >> 1) << endl;
	cout << "8. 12 | 45 = " << (12 | 45) << endl;
	cout << "9. 1 | 100 = " << (1 | 100) << endl;
	cout << "10. 1 & 100 = " << (1 & 100) << endl;

	int num = 100, i;
	for (i = 0; i < 10; i++)
	{
		cout << "100 >> " << i << " = " << (num >> i) << endl;
	}

	return 0;
}

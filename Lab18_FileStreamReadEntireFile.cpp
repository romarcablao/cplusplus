#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	string data;

	ifstream file("read.txt");
	if (file.is_open())
	{
		while (getline(file, data))
		{
			cout << data;
		}
	}
	file.close();

	return 0;
}
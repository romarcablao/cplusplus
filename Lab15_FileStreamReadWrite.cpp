#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream write("file.txt", ios::app);
	if (write.is_open())
	{
		write << "BSCS 2nd_Year" << endl;
	}
	write.close();

	ifstream read("file.txt");
	string course, year, data;

	if (read.is_open())
	{
		while (read >> course >> year)
		{
			cout << course << "-" << year << endl;
		}
	}
	read.close();

	return 0;
}


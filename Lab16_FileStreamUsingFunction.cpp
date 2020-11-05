#include <iostream>
#include <fstream>
using namespace std;

void write(string, string);
string read(string);

int main()
{
	write("activity.txt", "Data to save!");
	cout << read("activity.txt") << endl;

	return 0;
}

void write(string filename, string data)
{
	ofstream txt(filename.c_str());

	if (txt.is_open())
	{
		txt << data << endl;
	}
	txt.close();
}

string read(string filename)
{
	ifstream txt(filename.c_str());
	string data;

	if (txt.is_open())
	{
		txt >> data;
	}
	txt.close();

	return data;
}

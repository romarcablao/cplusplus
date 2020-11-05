#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void write(string, string, int);
int read(string);

int main()
{

	string name, course;
	int id = read("user.db");
	cout << "Id: " << id << endl;

	cout << "Enter student name:";
	getline(cin, name);
	cout << "Enter student course";
	getline(cin, course);

	replace(name.begin(), name.end(), ' ', '_');
	write("user.db", name + " " + course, id);

	return 0;
}

void write(string filename, string data, int id)
{
	ofstream txt(filename.c_str(), ios::app);

	if (txt.is_open())
	{
		txt << id << " " << data << endl;
	}
	txt.close();
}

int read(string filename)
{
	ifstream txt(filename.c_str());
	string name, course;
	int id;

	if (txt.is_open())
	{
		while (txt >> id >> name >> course)
		{
			id = id;
		}
	}
	txt.close();

	return ++id;
}

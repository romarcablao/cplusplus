#include <iostream>
using namespace std;

/** 
 * By default class members are in private
 * private [yearEstablished, courses]
 * public [name, address]
 **/

class School
{
	int yearEstablished;
	string courses[5];

public:
	string name;
	string address;
};

int main()
{
	School upd;
	upd.name = "University of the Philippines";
	upd.address = "Diliman, QC";

	School dlsu;
	dlsu.name = "De La Salle University";
	dlsu.address = "Malate, Manila";

	cout << upd.name + " (" + upd.address + ")\n";
	cout << dlsu.name + " (" + dlsu.address + ")\n";

	return 0;
}
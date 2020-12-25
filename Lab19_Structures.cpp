#include <iostream>
using namespace std;

/** 
 * By default struc members are in public
 * public [name, address]
 * private [yearEstablished, courses]
 **/

struct School
{
	string name;
	string address;

private:
	int yearEstablished;
	string courses[5];
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
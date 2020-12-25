/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Main Module
 */

#include "src/_global.h"
#include "src/_getdate.h"
#include "src/_timerendered.h"
#include "src/_timein.h"
#include "src/_timeout.h"
#include "src/_query.h"

int main()
{
	
	init();	string Fname, Lname, FullName, yesORno;
	
again:
	int choice;
	cout << "\n             DON BOSCO INSTITUTE OF ARTS AND SCIENCES           " << endl;
	cout << "\n-----------------------DAILY TIME RECORD------------------------" << endl;
	cout << "\n     1.TIME IN      2.TIME OUT       3.NUMBER OF HOURS QUERY    " << endl;
	cout << "----------------------------------------------------------------" << endl;

	cout << "CHOOSE (1-3): ";
	cin >> choice;
	cin.ignore();

	cout << "----------------------------------------------------------------" << endl;

	if (choice > 0 && choice < 4)
	{
		cout << "FIRSTNAME: ";
		getline(cin, Fname);
		cout << "LASTNAME : ";
		getline(cin, Lname);

		FullName = Fname + " " + Lname;
		transform(FullName.begin(), FullName.end(), FullName.begin(), ::toupper);
	}

	switch (choice)
	{
	case 1:
		timeIN(FullName);

		break;
	case 2:
		timeOUT(FullName);

		break;
	case 3:
		NumHoursQuery(FullName);

		break;
	default:
		cout << "----------------------------------------------------------------" << endl;
		cout << "----------------------NOT IN THE CHOICES!-----------------------" << endl;
		cout << "----------------------------------------------------------------" << endl;
		break;
	}

	cout << "\n----------------------------------------------------------------" << endl;
	cout << "PUNCH AGAIN [y/n]: ";
	cin >> yesORno;
	cout << "----------------------------------------------------------------\n"
		 << endl;

	if (yesORno == "y" || yesORno == "Y")
	{
		system("clear");
		goto again;
	}
	else if (yesORno == "n" || yesORno == "N")
	{
		return 0;
	}

	return 0;
}



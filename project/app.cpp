/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Main Module (Entrypoint)
 */

// import global headers and variables
#include "src/_global.h"
#include "src/_helper.h"

// import local functions
#include "src/_date.h"
#include "src/_timerendered.h"
#include "src/_timein.h"
#include "src/_timeout.h"
#include "src/_query.h"

// entrypoint
int main()
{
	init();
	Employee employee; helper.again = 'Y';
	
	while (helper.again == 'Y' || helper.again == 'y')
	{

		helper.spielHeader();
		std::cout << "CHOOSE (1-3): ";
		std::cin >> helper.choice;
		std::cin.ignore();
		helper.spielLineSeparator();

		if (helper.choice > 0 && helper.choice < 4)
		{
			std::cout << "FIRSTNAME: ";
			getline(std::cin, employee.firstname);
			std::cout << "LASTNAME : ";
			getline(std::cin, employee.lastname);
		}

		// switch case base on user choice
		switch (helper.choice)
		{
		case 1:
			// call time in module
			timeIN(employee.fullname());
			break;
		case 2:
			// call time out module
			timeOUT(employee.fullname());
			break;
		case 3:
			// call query module
			NumHoursQuery(employee.fullname());
			break;
		default:
			// print invalid choice
			helper.spielInvalidChoice();
			break;
		}

		helper.spielLineSeparator();
		std::cout << "PUNCH AGAIN [y/n]: ";
		std::cin >> helper.again;
		helper.spielLineSeparator();
		system("cls");
	}

	return 0;
}

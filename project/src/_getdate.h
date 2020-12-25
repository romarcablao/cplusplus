/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Date Module
 */

#ifndef _getdate
#define _getdate

string dateToday()
{
	string readDate, dayText, dayNum, month, year, time24H;
	time_t t = time(0);
	char *dt = ctime(&t);
	int countFlow = 0;

	if (countFlow == 0)
	{
		ofstream log("Logs Date.txt", ios::app);
		log << dt;
		log.close();
		countFlow = 1;
	}

	if (countFlow == 1)
	{
		ifstream logRead("Logs Date.txt");
		string dateSave;

		while (logRead >> dayText >> month >> dayNum >> time24H >> year)
		{
			replace(time24H.begin(), time24H.end(), ':', ' ');
			transform(month.begin(), month.end(), month.begin(), ::toupper);
			readDate = dayText + " " + month + " " + dayNum + " " + year + " " + time24H + " -";
		}

		logRead.close();

		return readDate;
	}

	return "";
}

#endif

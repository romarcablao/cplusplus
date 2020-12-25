/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Date Module
 */

#ifndef _date
#define _date

string dateToday()
{
	string readDate, dayText, dayNum, month, year, time24H;
	time_t t = time(0);
	char *dt = ctime(&t);

	ofstream logWrite(LogsFile.c_str(), ios::app);
	logWrite << dt;
	logWrite.close();

	ifstream logRead(LogsFile.c_str());
	while (logRead >> dayText >> month >> dayNum >> time24H >> year)
		;
	readDate = dayText + " " + helper.toUpper(month) + " " + dayNum + " " + year + " " + helper.replace(time24H, ':', ' ') + " -";
	logRead.close();

	return readDate;
}

#endif

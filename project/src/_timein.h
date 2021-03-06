/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * TimeIn Module
 */

#ifndef _timein
#define _timein

void timeIN(string FullName)
{
	string dayIN, monthIN, dashIN, H_timeIN, M_timeIN, S_timeIN, dayNumIN, yearIN, if_time_in_is_ok;
	string filename = Destination + TimeRecordDir + FullName + " - DTR.txt";

	ifstream readRecord(filename.c_str());
	while (readRecord >> dayIN >> monthIN >> dayNumIN >> yearIN >> H_timeIN >> M_timeIN >> S_timeIN >> dashIN)
	{
		if_time_in_is_ok = dashIN;
	}

	if (if_time_in_is_ok == "-IN-")
	{
		helper.spielForgotToTimeOut();
	}
	else
	{
		ofstream writeRecord(filename.c_str(), ios::app);
		writeRecord << dateToday();
		writeRecord << "IN- ";
		writeRecord.close();
		helper.spielRecorded();
	}
}

#endif

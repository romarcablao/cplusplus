/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * TimeRendered Module
 */

#ifndef _timerendered
#define _timerendered

void timeRendered_perDay(string FullName, string monthIN, int dayNumIN, int yearIN, int H_timeIN, int M_timeIN, int S_timeIN, int H_timeOUT, int M_timeOUT, int S_timeOUT)
{

	int hh_Total, mm_Total, ss_Total;
	string filenameWrite = Destination + EmployeeLogsDir + FullName + " - LOG.txt";
	string colon, dash;

	hh_Total = H_timeOUT - H_timeIN;
	mm_Total = M_timeOUT - M_timeIN;
	ss_Total = S_timeOUT - S_timeIN;

	//For Seconds
	if (ss_Total > 60)
	{
		ss_Total -= 60;
		mm_Total += 1;
	}
	else if (ss_Total < 0)
	{
		ss_Total += 59;
		mm_Total -= 1;
	}
	//For Minutes
	if (mm_Total > 60)
	{
		mm_Total -= 60;
		hh_Total += 1;
	}
	else if (mm_Total < 0)
	{
		mm_Total += 60;
		hh_Total -= 1;
	}

	ofstream writeTime(filenameWrite.c_str(), ios::app);
	writeTime << monthIN << " " << dayNumIN << " " << yearIN << " - " << H_timeIN << " : " << M_timeIN << " : " << S_timeIN << " - " << H_timeOUT << " : " << M_timeOUT << " : " << S_timeOUT << " - "
			  << hh_Total << " : " << mm_Total << " : " << ss_Total << endl;
	writeTime.close();
}

void NumHours(string FullName)
{

	int H_timeIN, H_timeOUT, M_timeIN, M_timeOUT, S_timeIN, S_timeOUT, dayNumIN, dayNumOUT, yearIN, yearOUT;
	string dayIN, dayOUT, monthIN, monthOUT, dashIN, dashOUT;
	string time_out, time_in, date_in_out;
	string filenameRead = Destination + TimeRecordDir + FullName + " - DTR.txt";

	ifstream readTime(filenameRead.c_str());
	while (readTime >> dayIN >> monthIN >> dayNumIN >> yearIN >> H_timeIN >> M_timeIN >> S_timeIN >> dashIN >> dayOUT >> monthOUT >> dayNumOUT >> yearOUT >> H_timeOUT >> M_timeOUT >> S_timeOUT >> dashOUT)
	{ /**get data**/
	}
	readTime.close();

	timeRendered_perDay(FullName, monthIN, dayNumIN, yearIN, H_timeIN, M_timeIN, S_timeIN, H_timeOUT, M_timeOUT, S_timeOUT);
}

#endif

/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Query Module
 */

#ifndef _query
#define _query

void NumHoursQuery(string Fullname)
{
	int hh_Total, mm_Total, ss_Total, dayNum, year, no_record_message = 0;
	int H_timeIN, M_timeIN, S_timeIN, H_timeOUT, M_timeOUT, S_timeOUT, fromDay, toDay, counter = 0;
	int Total_Hours_Query = 0, Total_Minutes_Query = 0, Total_Seconds_Query = 0;
	string fromMonth, month, colon, dash;

	helper.spielLineSeparator();
	cout << "   JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEPT  OCT  NOV  DEC  " << endl;
	helper.spielLineSeparator();
	cout << "MONTH   : ";
	getline(cin, fromMonth);
	cout << "FROM DAY: ";
	cin >> fromDay;
	cout << "TO DAY  : ";
	cin >> toDay;

	string filename = Destination + EmployeeLogsDir + Fullname + " - LOG.txt";
	ifstream timeCountQuery(filename.c_str());

	helper.spielLineSeparator();
	fromMonth = helper.toUpper(fromMonth);

	if (timeCountQuery.is_open())
	{
		while (timeCountQuery >> month >> dayNum >> year >> dash >> H_timeIN >> colon >> M_timeIN >> colon >> S_timeIN >> dash >> H_timeOUT >> colon >> M_timeOUT >> colon >> S_timeOUT >> dash >> hh_Total >> colon >> mm_Total >> colon >> ss_Total)
		{
			if (!timeCountQuery.eof() && month == fromMonth)
			{
				if (!timeCountQuery.eof() && dayNum >= fromDay && dayNum <= toDay)
				{
					cout << month << " - ";
					if (dayNum < 10)
					{
						cout << 0 << dayNum;
					}
					else
					{
						cout << dayNum;
					}
					cout << "  -->   Hours: " << hh_Total << "\tMinute/s: " << mm_Total << "\tSecond/s: " << ss_Total << endl;
					Total_Hours_Query += hh_Total;
					Total_Minutes_Query += mm_Total;
					Total_Seconds_Query += ss_Total;
					counter += 1;
				}
				else if (counter == 0 && no_record_message == 0)
				{
					helper.spielNoRecords();
					no_record_message = 1;
				}
			}
			else if (counter == 0 && no_record_message == 0)
			{
				helper.spielNoRecords();
				no_record_message = 1;
			}
		}
	}
	else
	{
		helper.spielNoRecords();
	}

	if (counter > 0)
	{
		helper.spielLineSeparator();
		totalRendered_Time(Fullname, Total_Hours_Query, Total_Minutes_Query, Total_Seconds_Query);
	}

	timeCountQuery.close();
}

#endif

/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Global Module
 */

#ifndef _global
#define _global

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

// directory and file configuration
string Destination = "data/";
string EmployeeLogsDir = "EmployeeLogs/";
string TimeRecordDir = "DailyTimeRecord/";
string LogsFile = "Logs Date.txt";

// initialize directories
void init()
{
	system("IF NOT exist data (mkdir data)");
	system("IF NOT exist data/EmployeeLogs (cd data && mkdir EmployeeLogs)");
	system("IF NOT exist data/DailyTimeRecord (cd data && mkdir DailyTimeRecord)");
}

#endif

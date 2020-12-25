/* Romar Cablao
 * BS Computer Science
 * Project: Don Bosco - Daily Time Record
 * Helper Module
 */

#ifndef _helper
#define _helper

// define class helper
class Helper
{
public:
    char again;
    int choice;
    string toUpper(string data)
    {
        transform(data.begin(), data.end(), data.begin(), ::toupper);
        return data;
    }
    string replace(string data, char from, char to)
    {
        std::replace(data.begin(), data.end(), from, to);
        return data;
    }
    void spielHeader()
    {
        cout << "\n             DON BOSCO INSTITUTE OF ARTS AND SCIENCES           \n";
        cout << "\n-----------------------DAILY TIME RECORD------------------------\n";
        cout << "\n     1.TIME IN      2.TIME OUT       3.NUMBER OF HOURS QUERY    \n";
        cout << "----------------------------------------------------------------\n";
    }
    void spielInvalidChoice()
    {
        cout << "----------------------------------------------------------------\n";
        cout << "----------------------NOT IN THE CHOICES!-----------------------\n";
        cout << "----------------------------------------------------------------\n";
    }
    void spielRecorded()
    {
        cout << "----------------------------------------------------------------" << endl;
        cout << "----------------------------RECORDED----------------------------" << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    void spielNoRecords()
    {
        cout << "----------------------------------------------------------------\n";
        cout << "--------------------------NO RECORDS!---------------------------\n";
        cout << "----------------------------------------------------------------\n";
    }
    void spielForgotToTimeIn()
    {
        cout << "--------------------YOU'VE FORGOT TO TIME-IN--------------------" << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    void spielForgotToTimeOut()
    {
        cout << "-------------------YOU'VE FORGOT TO TIME-OUT--------------------" << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    void spielLineSeparator()
    {
        cout << "----------------------------------------------------------------\n";
    }
};

// define struc employee
struct Employee
{
public:
    string firstname;
    string lastname;
    string fullname()
    {
        return helper.toUpper(firstname + " " + lastname);
    }

private:
    Helper helper;
};

// instantiate helper
Helper helper;

#endif

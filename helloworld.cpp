#include <iostream>
using namespace std;

main()
{
	string name;
	int year;
	
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your current year:";
	cin>>year;
	
	if(year==1){
		cout<<"1st Year : ComFunds, ComProg1";
	} else 	if(year==2){
		cout<<"2nd Year: ComProg2, OOP1";
	} else 	if(year==3){
		cout<<"3rd Year: OOP2, DBMS";
	}else 	if(year==4){
		cout<<"4th Year: GameDev, Thesis";
	}else{
		cout<<"Your choice is invalid!!!";
	}
	
	return 0;
}

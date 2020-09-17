#include <iostream>
using namespace std;

int main(){
	
	string item;
	double total, *ptrTotal = &total;
	char addMoreToCart;
	double keyboard = 950.00, mouse = 890.00, monitor = 10599.00, webcam = 1500.50;
	
	while(addMoreToCart != 'N'){
		cout<<"What item would you like to buy? ";
		cin>>item;
	
		if(item=="keyboard"){
			*ptrTotal += keyboard;
		}else if(item=="mouse"){
			*ptrTotal += mouse;
		}else{
			*ptrTotal += 0;
		}	
		
		cout<<"Would you like to addmore item/s to your cart? [Y/N]:";
		cin>>addMoreToCart;
	}

	cout<<"Total price is " <<*ptrTotal <<"Php\n";
	
	cout<<"Pointer address: " <<ptrTotal <<endl;
	cout<<"Pointer value: " <<*ptrTotal <<endl;
	cout<<"Total address: " <<&total <<endl;
	cout<<"Total value: " <<total <<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	//Declaring variables
	string name, month;
	int byear, day, age;
	
	//Asking user to input name
	cout<<" Whats your name? ";
	cin>>name;
	
	//Asking user birthdate
	cout<<" When is your birthdate? ";
	cin>> month >> day >> byear;
	
	//Subtracting the 2025 in byear
	age = 2025 - byear;
	
	//Ouput
	cout<< "Your name is " << name<<" and you are "<< age << " years old";
	
	return 0;
	}
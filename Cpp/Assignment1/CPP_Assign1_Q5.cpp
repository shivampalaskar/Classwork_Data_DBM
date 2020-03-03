//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign1_Q5
//============================================================================

#include <iostream>
using namespace std;

class tollBooth{
private :
	unsigned int no_OfCars;
	double amt;
public :
	tollBooth();
	void payingCar();
	void nopayCars();
	void printOnConsole();
};

tollBooth::tollBooth(){
	no_OfCars=0;
	amt=0;
}

void tollBooth::nopayCars(){
	no_OfCars++;
}

void tollBooth::payingCar(){
	amt+=0.50;
	no_OfCars++;
}

void tollBooth::printOnConsole(){
	cout<<" Total Number of Cars : "<<no_OfCars<<endl;
	cout<<" Number of Paying Cars : "<<(amt/0.50)<<endl;
	cout<<" Number of Non Paying Cars : "<<no_OfCars - (amt/0.50)<<endl;
	cout<<" Total Amount : "<<amt<<endl;
}

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Pass a Paying Car"<<endl;
	cout<<"2. Pass a Non Paying Car"<<endl;
	cout<<"3. Show Details of Toll Booth"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	cout<<endl;
	return choice;
}
void print(){
	cout<<"Car Pass Successfully"<<endl;
}
int main() {
	tollBooth tb;
	int choice;
	while((choice = menuList())){
		switch(choice){
		case 1:
			tb.payingCar();
			print();
			break;
		case 2:
			tb.nopayCars();
			print();
			break;
		case 3 :
			tb.printOnConsole();
			break;
		}
	}
	return 0;
}

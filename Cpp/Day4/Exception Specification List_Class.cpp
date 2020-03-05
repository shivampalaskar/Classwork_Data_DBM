  //============================================================================
// Name        : CPP_Assignment.cpp
// Author      : SHIVAM PALASKAR
// Version     :
// Copyright   : Your copyright notice
// Description : EXCEPTION SPECIFICATION LIST_CLASS
//============================================================================

#include <iostream>
using namespace std;


class Test{
public :
	double division(double,double) throw (int);
};

double Test::division(double num1, double num2) throw (int) {
	double div;
	if (num2 == 0) {
		throw 1;
	} else
		div = (num1 / num2);
	return div;
}

int main() {
	Test t;
	double num1,num2;
	cout<<"Enter Num1 : ";
	cin>>num1;
	cout << "Enter Num2 : ";
	cin >> num2;
	try{
		double div = t.division(num1,num2);
		cout<<"Division : "<<div;
	}catch(int i){
		cout<<"Catch : Its DIVIDE BY ZERO ERROR !";
	}

	return 0;
}

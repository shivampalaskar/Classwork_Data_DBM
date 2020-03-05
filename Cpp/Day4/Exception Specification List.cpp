//============================================================================
// Name        : CPP_Assignment.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : EXCEPTION SPECIFICATION LIST
//============================================================================

#include <iostream>
using namespace std;

double division(double,double) throw (int);


int main() {
	double num1,num2;
	cout<<"Enter Num1 : ";
	cin>>num1;
	cout << "Enter Num2 : ";
	cin >> num2;
	try{
		double div = division(num1,num2);
		cout<<"Division : "<<div;
	}catch(int i){
		cout<<"Catch : Its DIVIDE BY ZERO ERROR !";
	}

	return 0;
}


double division(double num1,double num2) throw (int){
	double div;
	if(num2==0){
		throw 1;
	}
	else
		div = (num1/num2);
	return div;
}

//terminate called after throwing an instance of 'int'

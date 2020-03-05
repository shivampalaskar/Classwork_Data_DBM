//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : SHIVAM PALASKAR
// Version     :
// Copyright   : Your copyright notice
// Description : EXCEPTION SPECIFICATION LIST_CLASS
//============================================================================

#include <iostream>
using namespace std;

class ExceptionDivideByZero {
public:
	void printErrorMsg() {
		cout << "Divide By Zero Error !"<<endl;
	}
};

class ExceptionNegativeNumber {
public:
	void printErrorMsg() {
		cout << "Negative Number Error !" << endl;
	}
};

class Test{
public :
	double division(double,double) throw (ExceptionDivideByZero,ExceptionNegativeNumber);
};

double Test::division(double num1, double num2) throw (ExceptionDivideByZero,ExceptionNegativeNumber) {
	ExceptionDivideByZero Obj1;
	ExceptionNegativeNumber Obj2;
	double div;
	if (num2 == 0) {
		throw Obj1;
	} else if(num1 < 0 || num2 < 0)
		throw Obj2;
	else
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
	}catch(ExceptionDivideByZero &obj){	// Waring : Catch it with Reference
		obj.printErrorMsg();
	}catch(ExceptionNegativeNumber &obj){
		obj.printErrorMsg();
	}

	return 0;
}

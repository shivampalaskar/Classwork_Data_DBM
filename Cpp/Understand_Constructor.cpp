//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Understand Constructor
//============================================================================

/*
Member function class used to initialized Object.
Constructor is automatically called when an object is created i.e implicit calling of a function.
Explicit Calling of a Function : when a function is called through an object.
Implicit calling of a function : when a function is called without using an object.(May be OS calls that function internally)

Remember this  :
	1) Name of constructor is same as classname
	2) It does'nt have any return type
	3) It is designed to call implicitly
	4) It gets called only once throughout life time of object
*/

#include <iostream>
using namespace std;

class Test{
private :
	int num1;
	int num2;
public :
	Test();
	Test(int,int);
	void display();
};

Test::Test(){
	this->num1=5;
	this->num2=55;
}

Test::Test(int num1,int num2){
	this->num1=num1;
	this->num2=num2;
}

void Test::display(){
	cout<<this->num1<<endl;
	cout<<this->num2<<endl;
}

int main() {
	Test t1;
	Test t2(1,100);
	t1.display();
	t2.display();
	return 0;
}

//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Understand Reference Variable
//============================================================================

/*

 Reference variables are the "alias" of another variable
 while pointer variable are the special type of "variable"
 while that contains the address of another variable.

 Variable name is a label attached to the variable's location in memory and
 A reference is a second label attached to that memory location.

 Pointer is a actual "Variable" - Hence have its own physical space but
 Reference variable is not a actual variable - Hence don't have its own space

 We cannot have NULL references. Reference is connected to a legitimate piece of storage

 Once a reference is initialized to an object, it cannot be changed to refer to another object.
 Pointers can be pointed to another object at any time.

 A reference must be initialized when it is created. Pointers can be initialized at any time
*/



#include <iostream>
using namespace std;

class Test
{
private :
	int publicVar1 = 1;
	int publicVar2 = 2;
public :
	void function(int,int);
	void function1(int,int);
};

void Test :: function(int i,int j){
	publicVar1 = i;
	publicVar2 = j;
}

void Test :: function1(int publicVar1,int publicVar2){
	this->publicVar1 = publicVar1;
	this->publicVar2 = publicVar2;
}

int main() {
	Test t;
	int num;
	double d;
	int &ref1 = num; // Read as : "ref1 is an integer reference initialized to num"
	double &ref2 = d;  //Read as : "ref2 is a double reference initialized to d"

	return 0;
}

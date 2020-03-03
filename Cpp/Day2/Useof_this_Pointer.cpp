//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Use of this variable
//============================================================================

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
	// publicVar1 = publicVar1; // Error : Assignment to itself 'publicVar1 = publicVar1'
	// publicVar2 = publicVar2; // Error : Assignment to itself 'publicVar1 = publicVar2'

	this->publicVar1 = publicVar1; // one variable is Data member of object and other is local variable
	this->publicVar2 = publicVar2;
}

int main() {
	Test t;
	int i;
	// i=i; // Error : Assignment to itself 'i=i'
	t.function(5,55);
	t.function1(6,66);
	return 0;
}

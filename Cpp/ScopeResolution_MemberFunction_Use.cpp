//============================================================================
// Name        : test.cpp
// Author      : abc
// Version     :
// Copyright   : Your copyright notice
// Description : Scope resolution Operator used for Member Function of class defied outside of class
//============================================================================

#include <iostream>
using namespace std;


class Test
{
private :
	int publicVar1 = 1;
	int publicVar2 = 2;
public :
	void function();
};

void Test :: function(){
	this->publicVar1 = 5;
	this->publicVar2 = 55;
}

int main() {
	Test t;
	t.function();
	return 0;
}

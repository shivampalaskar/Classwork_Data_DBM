//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Scope resolution Operator used for Global Variable/Function
//============================================================================

#include <iostream>
using namespace std;

void globalFunction(){
	cout<<"In Global Function"<<endl;
}
int var = 5;

int main() {
	int var = 10;
	cout<<"Global defined Variable : "<<::var<<endl;
	cout<<"Locally defined Variable : "<<var<<endl;

	globalFunction(); // Right
	::globalFunction(); // Right -- USE when defined in another cpp file
	return 0;
}

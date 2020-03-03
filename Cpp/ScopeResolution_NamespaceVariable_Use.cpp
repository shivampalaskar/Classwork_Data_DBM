//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Scope Resolution use for Namespace Variable
//============================================================================


#include <iostream>
using namespace std;

int num1 = 100;

namespace ns1{
int num1 = 1;
}
namespace ns2{
int num1 = 2;
}

int main() {
	int num1 = 30;
	cout<<"Local Variable num1 : "<<num1<<endl;
	cout<<"Global Variable num1 : "<<::num1<<endl;
	cout<<"ns1 Variable num1 : "<<ns1::num1<<endl;
	cout<<"ns2 Variable num1 : "<<ns2::num1<<endl;

	//Or
	using namespace ns1;
	cout<<"ns1 Variable num1 : "<<num1<<endl;
	using namespace ns2;
	cout<<"ns2 Variable num1 : "<<num1<<endl;

	return 0;
}

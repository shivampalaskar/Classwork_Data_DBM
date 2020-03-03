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

void swap_by_address(int*,int*);
void swap_by_reference(int&,int&);

int main() {
	int num1 = 5;
	int num2 = 10;
	cout<<"Before swap_by_address : "<<endl;
	cout<<"num1 : "<<num1<<endl<<"num2 : "<<num2<<endl;
	swap_by_address(&num1, &num2);
	cout << "After swap_by_address : " << endl;
	cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl;
	cout<<endl;
	cout << "Before swap_by_reference : " << endl;
	cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl;
	swap_by_reference(num1,num2);
	cout << "After swap_by_reference : " << endl;
	cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl;

	return 0;
}

void swap_by_address(int *ptrNum1,int *ptrNum2){
	int temp;
	temp = *ptrNum1;
	*ptrNum1 = *ptrNum2;
	*ptrNum2 = temp;
}

void swap_by_reference(int &refNum1,int &refNum2){
	int temp;
	temp = refNum1;
	refNum1 = refNum2;
	refNum2 = temp;
}

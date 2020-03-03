//============================================================================
// Name        : test.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Scope Resolution use for Namespace Class
//============================================================================


#include <iostream>
using namespace std;

namespace ns1{
class Test
{
public :
	void print(){
		cout<<"Inside ns1 test function"<<endl;
	}
};

}

int main() {
	//Test t; // Error : Type 'Test' could not be resolved
	using namespace ns1;
	Test t;
	t.print();

	return 0;
}

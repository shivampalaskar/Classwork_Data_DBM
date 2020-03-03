#include <iostream>
using namespace std;


class Test
{
public:
	int publicVar1 = 1;
	int publicVar2 = 2;

	Test function(){
		cout<<"t2 : this : "<<this<<endl;
		this->publicVar1= 5;
		this->publicVar2 = 55;
		return *this;
		//cout<<"this : "<<*this<<endl; // Error
		//cout<<"this : "<<&this<<endl; // Error
	}
};

int main() {
	Test t1,t2,t;
	//cout<<"t1 : "<<t1; // Error
	cout<<"&t1 : "<<&t1<<endl;
	cout<<"&(t1.publicVar1) : "<<&(t1.publicVar1)<<endl;
	cout<<"&(t1.publicVar2) : "<<&(t1.publicVar2)<<endl;
	cout<<"t1.publicVar1 : "<<t1.publicVar1<<endl;
	cout<<"t1.publicVar2 : "<<t1.publicVar2<<endl;
	cout<<endl;

	cout << "&t2 : " << &t2 << endl;
	cout << "t2.publicVar1 : " << t2.publicVar1 << endl;
	cout << "t2.publicVar2 : " << t2.publicVar2 << endl;
	cout<<endl;

	t = t2.function(); // All the data member form t2 gets copied into data member of t
	cout<<"&t : "<<&t<<endl;
	cout<<"t.publicVar1 : "<<t.publicVar1<<endl;
	cout<<"t.publicVar2 : "<<t.publicVar2<<endl;
	cout<<"&(t.publicVar1) : "<<&(t.publicVar1)<<endl;
	cout<<endl;

	cout << "&t2 : " << &t2 << endl;
	cout << "t2.publicVar1 : " << t2.publicVar1 << endl;
	cout << "t2.publicVar2 : " << t2.publicVar2 << endl;
	cout<<"&(t2.publicVar1) : "<<&(t2.publicVar1)<<endl;
	cout<<endl;

	cout<<"t1.publicVar1 : "<<t1.publicVar1<<endl;
	cout<<"t1.publicVar2 : "<<t1.publicVar2<<endl;
	return 0;
}

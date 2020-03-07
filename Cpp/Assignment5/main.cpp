#include<iostream>
#include "Address.h"
using namespace std;

int main(){
	Address adrs1;
	Address adrs2("Tinsel","Pune","MaanStreet",654321);
	Address adrs3;
	adrs3.accept();

	adrs1.display();
	adrs2.display();
	adrs3.display();
	return 0;
}

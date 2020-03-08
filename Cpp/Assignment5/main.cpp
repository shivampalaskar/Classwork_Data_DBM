#include<iostream>
#include "Person.h"
#include "Date.h"
#include "Employee.h"
using namespace std;

int main(){
	Date date1;
	Date date2(8,3,2020);
	date1.display();
	date2.display();

	Employee emp1;
	Date date3(15,10,2016);
	Employee emp2(36106,10000,"Testing",date3);
	emp1.display();
	emp2.display();

	Person person1;
	Person person2("Shivam","Aurangabad",26,9,1994);
	person1.display();
	person2.display();
}

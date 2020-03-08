#include<iostream>
#include "Person.h"
#include "Date.h"
#include "Employee.h"
using namespace std;

int main(){
	Date joining_date3(15,10,2016);
	Date birth_date(26,9,1994);
	Employee emp1(36106,25000,"Testing",joining_date3,"SHIVAM","AURANGABAD",birth_date);
	emp1.display();
	/*Date date1;
	Date birth_date2(26,9,1994);
	date1.display();
	birth_date2.display();

	Person person1;
	Person person2("Shivam", "Aurangabad", birth_date2.getDay(),birth_date2.getMonth(),birth_date2.getYear());
	person1.display();
	person2.display();

	Employee emp1;
	Date joining_date3(15,10,2016);
	Employee emp2(36106,25000,"Testing",joining_date3);
	emp1.display();
	emp2.display();*/
}

#include<iostream>
#include "Employee.h"
#include "Manager.h"
#include "Salesman.h"
#include "SalesManager.h"
using namespace std;

int main(){
	/*Employee emp1;
	Employee emp2(36106,25000);
	emp1.display();
	emp2.display();*/

	/*Manager mgr1;
	Manager mgr2(36106,25000,3000);
	mgr1.display();
	mgr2.display();
	mgr1.accept();
	mgr1.display();*/

	/*Salesman slsman1;
	Salesman slsman2(36106, 25000, 3000);
	slsman1.display();
	slsman2.display();
	slsman1.accept();
	slsman2.display();*/

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

	SalesManager slsmgr1;
	slsmgr1.accept();
	slsmgr1.display();
}

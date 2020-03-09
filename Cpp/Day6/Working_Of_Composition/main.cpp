#include <iostream>
#include "Date.h"
#include "Person.h"
using namespace std;

int main() {
	//Person person1("Shivam"); // By default this calls Date Parameterless constructor
	Date date;
	date.setYear(2020);
	//Person person1("Shivam",date); // This also By default this calls Date Parameterless constructor
									 // Also this will create local date object in constructor function

	//Person person1("Shivam",date); // This calls Date Parameterized constructor (See Definition of Constructor)
								   // Also this will create local date object in constructor function

	Person person1("Shivam",date.getYear()); // This calls Date Parameterized constructor (See Definition of Constructor)
								   // This won't create Local Date object
	return 0;
}

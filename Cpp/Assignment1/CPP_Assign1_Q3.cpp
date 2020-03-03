//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign1_Q3
//============================================================================

#include <iostream>
using namespace std;

class Date {
private:
	int day, month, year;
public:
	Date();
	Date(int,int,int);
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	bool IsLeapYear();
};

Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int day,int month,int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::PrintDateOnConsole() {
	cout << day << "-" << month << "-" << year<<endl;
}

void Date::AcceptDateFromConsole() {
	cout << "Enter Date :" << endl;
	cout << "Day : ";
	cin >> day;
	cout << "Month : ";
	cin >> month;
	cout << "Year : ";
	cin >> year;
}

bool Date::IsLeapYear() {
	if (!(year % 100)) {
		if (!(year % 4)) {
			return true;
		} else
			return false;
	} else if (!(year % 4)) {
		return true;
	} else
		return false;
}
int menuList() {
	int choice;
	cout << "Select Your Choice : " << endl;
	cout << "0. Exit" << endl;
	cout << "1. Print Date" << endl;
	cout << "2. Accept Date" << endl;
	cout << "3. Check for Leap Year" << endl;
	cout << "Enter choice : ";
	cin >> choice;
	return choice;
}

int main() {
	Date date;

	int choice;
	while ((choice = menuList())) {
		switch (choice) {
		case 0:
			return 0;
		case 1:
			date.PrintDateOnConsole();
			break;
		case 2:
			date.AcceptDateFromConsole();
			break;
		case 3:
			bool isLeapYr = date.IsLeapYear();
			date.PrintDateOnConsole();
			if (isLeapYr)
				cout << "Is Leap Year";
			else
				cout << "Is Not Leap Year";
			cout << endl;
			break;
		}
	}
	return 0;
}

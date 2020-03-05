//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : SHIVAM PALASKAR
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign3_Q1
//============================================================================

#include <iostream>
#include <time.h>
using namespace std;


class Time{
private :
	int Hour,Minute,Seconds;
public :
	Time();
	Time(int,int,int);
	int getHour() const {
		return Hour;
	}

	void setHour(int hour) {
		Hour = hour;
	}

	int getMinute() const {
		return Minute;
	}

	void setMinute(int minute) {
		Minute = minute;
	}

	int getSeconds() const {
		return Seconds;
	}

	void setSeconds(int seconds) {
		Seconds = seconds;
	}

	void print_date();
};

Time::Time(){
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);

	setHour(local->tm_hour);
	setMinute(local->tm_min);
	setSeconds(local->tm_sec);
}

Time::Time(int h,int m,int s){
	this->Hour=h;
	this->Minute=m;
	this->Seconds=s;
}

void Time::print_date(){
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);

	cout<<"Current Date : ";
	cout<<local->tm_mday<<"-"<<local->tm_mon + 1<<"-"<<local->tm_year + 1900<<endl;
}

int main() {
	int len;
	cout<<"Enter Number of Object : ";
	cin>>len;
	Time *arrObj = new Time[len];
	cout << "Current Time : " << arrObj[0].getHour() << "-"<< arrObj[0].getMinute() << "-" << arrObj[0].getSeconds() << endl;

	Time *arrObj1 = new Time(7,25,14);
	cout << "Entered Time : " << arrObj1->getHour() << "-"<< arrObj1->getMinute() << "-" << arrObj1->getSeconds() << endl;
	arrObj[0].print_date();
	return 0;
}

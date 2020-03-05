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
	Time currTime;
	cout<<"Current Time : "<<currTime.getHour()<<"-"<<currTime.getMinute()<<"-"<<currTime.getSeconds()<<endl;
	Time userTime(7,15,34);
	cout<<"Entered Time : "<<userTime.getHour()<<"-"<<userTime.getMinute()<<"-"<<userTime.getSeconds()<<endl;
	currTime.print_date();
	return 0;
}

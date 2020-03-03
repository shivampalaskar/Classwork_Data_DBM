#include<stdio.h>

typedef struct Date{
	int day,month,year;
}DATE;

void InitDate(struct Date *ptDate);
void PrintDateOnConsole(struct Date *ptDate);
void AcceptDateFromConsole(struct Date *ptDate);

int main(){
	DATE date;
	InitDate(&date);
	PrintDateOnConsole(&date);
	AcceptDateFromConsole(&date);
	PrintDateOnConsole(&date);
}

void InitDate(struct Date *ptDate){
	ptDate->day=0;
	ptDate->month=0;
	ptDate->year=0;
}

void PrintDateOnConsole(struct Date *ptDate){
	printf("Date : %d",ptDate->day);
	printf("-%d",ptDate->month);
	printf("-%d",ptDate->year);
	printf("\n");
}

void AcceptDateFromConsole(struct Date *ptDate){
	printf("Enter Date: \n");
	printf("Day : ");
	scanf("%d",&ptDate->day);
	printf("Month : ");
	scanf("%d",&ptDate->month);
	printf("Year : ");
	scanf("%d",&ptDate->year);
}

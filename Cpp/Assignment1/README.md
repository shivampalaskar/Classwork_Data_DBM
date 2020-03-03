# Read CPP-Assignment1.pdf for Questions

CPP Assignment 1
1) Write a menu driven program for Date in a C language.
Declare a structure Date having data members day, month, year. Implement the
following functions.
void InitDate(struct Date* ptDate);
void PrintDateOnConsole(struct Date* ptDate);
void AcceptDateFromConsole(struct Date* ptDate);
2) Write a menu driven program for Date in a C++ language.
Declare a structure Date having data members day, month, year. Implement the
following member functions.
void InitDate();
void PrintDateOnConsole();
void AcceptDateFromConsole();
bool IsLeapYear();

3) Write a menu driven program for Date in a C++ language.
Declare a class Date having data members day, month, year. Implement the following
member functions.
Date();
Date(int day, int month, int year);
void PrintDateOnConsole();
void AcceptDateFromConsole();
bool IsLeapYear();
4) Write a menu driven program to calculate volume of the box.Provide neceesary
constructors.
5) Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a
fifty-cent toll. Mostly they do, but sometimes a car goes by without paying. The
tollbooth keeps track of the number of cars that have gone by and of the total
amount of money collected.Model this tollbooth with a class called tollBooth.
The two data items are a type unsigned int to hold the total number of cars, and a
type double to hold the total amount of money collected.
A constructor initializes all data members to 0.
A member function called payingCar( ) increments the car total and adds 0.50 to the
cash total.
Another function, called nopayCar( ) increments the car total but adds nothing to the
cash total.
Finally, a member function called PrintOnConsole( ) displays the two totals and
number of paying as well as non paying cars total.

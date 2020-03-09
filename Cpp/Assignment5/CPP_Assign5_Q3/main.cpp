#include<iostream>
#include "Employee.h"
#include "Manager.h"
#include "Salesman.h"
#include "SalesManager.h"
using namespace std;

int main(){
	SalesManager slsmgr(36106,25000,500,700);
	slsmgr.display();
	slsmgr.accept();
	slsmgr.display();
}

/*
 * SalesManager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include "Manager.h"
#include "Salesman.h"
#ifndef SRC_SALESMANAGER_H_
#define SRC_SALESMANAGER_H_

class SalesManager : public Salesman,Manager{
public:
	SalesManager();
	SalesManager(int,float,float,float);
	void display();
	void accept();
	~SalesManager();
};

#endif /* SRC_SALESMANAGER_H_ */

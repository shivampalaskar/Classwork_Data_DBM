/*
 * InsuffucientFunds.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_INSUFFUCIENTFUNDS_H_
#define SRC_INSUFFUCIENTFUNDS_H_

class Insuffucient_Funds {
	int accid;
	double cur_balance;
	double 	withdraw_amount;
public:
	Insuffucient_Funds(int,double,double);
	void display();
	~Insuffucient_Funds();
};

#endif /* SRC_INSUFFUCIENTFUNDS_H_ */

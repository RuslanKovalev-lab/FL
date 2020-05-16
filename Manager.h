#ifndef _Manager_h_
#define _Manager_h_

#include "Chief.h"

class Manager : Chief {
protected:
	double moneyForAdv = 1000;
public:
	double getMoneyFA();
	void setMoneyFA(double m);
	double SalaryFA();
};

#endif 
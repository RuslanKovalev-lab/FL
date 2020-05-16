#ifndef _Waiter_h_
#define _Waiter_h_

#include "Employee.h"
#include "Waiter.h"

class Waiter:Employee {
protected:
	double money2=1000;
public:
	void setMoney2(double m2);
	double getMoney2();
};

#endif 
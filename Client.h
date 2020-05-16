#ifndef _Client_h_
#define _Client_h_

#include "Person.h"

class Client :Person {
protected:
	double money=1000;
	double money1=50;
	std::string name = "spencer";
public:
	void setMoney(double m);
	void setMoney1(double m1);
	double getMoney();
	double getMoney1();
};

#endif
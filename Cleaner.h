#ifndef _Cleaner_h_
#define _Cleaner_h_

#include "Employee.h"
#include <string>


class Cleaner : Employee {
protected:
	double area=45;
	double CoinForM = 100;
public:
	void setArea(double a);
	double getArea();
	void setCoinForM(double cfm);
	double getCoinForM();
	double Salary();
};

#endif 
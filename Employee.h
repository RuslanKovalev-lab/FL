
#ifndef _Employee_h_
#define _Employee_h_

#include "Person.h"
#include <string>


class Employee: Person {
protected:
	double salary=1000;
	int number=12;
public:
	void setSalary(double s);
	double getSalary();
	void setNumber(int n);
	int getNumber();
};

#endif 
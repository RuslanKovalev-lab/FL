
#pragma once
#ifndef _Chief_h_
#define _Chief_h_

#include "Person.h"

class Chief :Person {
protected:
	std::string name;
	double moneyOfCh=10000;
public:
	void prikaz();
	std::string Name();
	double getSalaryOCh();
	void setSalaryOCh(double moch);
};

#endif 
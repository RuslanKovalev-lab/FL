
#pragma once
#ifndef _Taxi_h_
#define _Taxi_h_

#include "Deliveryman.h"
#include "Employee.h"

class Taxi :Deliveryman {
private:
	std::string name="Martin";
protected:
	std::string agency="agency";
	std::string numberT="753485";
public:
	void setAgency(std::string a);
	std::string getAgency();
	void setNumber(std::string n);
	std::string getNumber();
	void Name();
	double SalaryT();
};

#endif 
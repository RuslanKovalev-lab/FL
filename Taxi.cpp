#include "Deliveryman.h"
#include "Taxi.h"
#include "Employee.h"

#include <iostream>

void Taxi::setAgency(std::string a)
{
	a = agency;
}


std::string Taxi::getAgency()
{
	return agency;
}

void Taxi::setNumber(std::string n)
{
	numberT=n;
}

std::string Taxi::getNumber()
{
	return numberT;
}

void Taxi::Name()
{
	std::cout << name;
}

double Taxi::SalaryT()
{
	return 5* money();
}
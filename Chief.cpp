#include "Chief.h"
#include <iostream>
void Chief::prikaz()
{
	std::cout << "idite rabotat"<<"\n";
}
std::string Chief::Name()
{
	return getName();
}

double Chief::getSalaryOCh()
{
	return moneyOfCh;
}

void Chief::setSalaryOCh(double moch)
{
	moch = moneyOfCh;
}
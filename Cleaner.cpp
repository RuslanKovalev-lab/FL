#include "Cleaner.h"

void Cleaner::setArea(double a)
{
	a = area;
}
double Cleaner::getArea()
{
	return area;
}

void Cleaner::setCoinForM(double cfm)
{
	cfm = CoinForM;
}

double Cleaner::getCoinForM()
{
	return CoinForM;
}

double Cleaner::Salary()
{
	return area * CoinForM;
}
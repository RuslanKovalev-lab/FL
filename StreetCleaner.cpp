#include "StreetCleaner.h"
#include "Cleaner.h"

void StreetCleaner::setPercent(double p)
{
	p = percent;
}

double StreetCleaner::getPercent()
{
	return percent;
}

double StreetCleaner::Salary1()
{
	return percent*Salary();
}

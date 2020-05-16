#include "Restaurant.h"

void  Restaurant::setPercent(double p)
{
	p = percent;
}

double Restaurant::getPercent()
{
	return percent;
}

double Restaurant::stoimost()
{
	return percent * getMoney();
}
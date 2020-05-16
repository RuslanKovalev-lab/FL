#include "Deliveryman.h"
double  Deliveryman::money()
{
	return 3*getSalary();
}

void Deliveryman::setAdresF(std::string af)
{
	AdresF = af;
}

std::string Deliveryman::getAdresF()
{
	return AdresF;
}

void Deliveryman::setAdresS(std::string as)
{
	AdresS = as;
}

std::string Deliveryman::getAdresS()
{
	return AdresS;
}
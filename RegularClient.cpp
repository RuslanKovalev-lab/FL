#include "RegularClient.h"

void RegularClient::setNumberV(int sv)
{
	ConstS = sv;
}

void RegularClient::setConstS(int cs)
{
	cs = ConstS;
}

int RegularClient::getConstS()
{
	return ConstS;
}

int RegularClient::getNumberV()
{
	return numberV;
}

std::string RegularClient::AdresOf()
{
	return Adres;
}
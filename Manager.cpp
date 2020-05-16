#include "Manager.h"

double Manager::getMoneyFA()
{
	return moneyForAdv;
}

void Manager::setMoneyFA(double m)
{
	m = moneyForAdv;
}

double Manager::SalaryFA()
{
	return 0.75 * getSalaryOCh();
}
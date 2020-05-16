
#ifndef _Deliveryman_h_
#define _Deliveryman_h_

#include "Employee.h"

class Deliveryman:Employee {
protected:
	std::string AdresF="NY,h100";
	std::string AdresS="LA,503";
public:
	double money();
	void setAdresF(std::string af);
	std::string getAdresF();
	void setAdresS(std::string as);
	std::string getAdresS();
};

#endif 
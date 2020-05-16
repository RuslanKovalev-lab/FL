
#ifndef _Home_h_
#define _Home_h_

#include "Client.h"

class Home :Client {
protected:
	double money = 1000;
	double money1 = 50;
	std::string name = "spencer";
	std::string adres = "NY";
public:
	
	void setAdres(std::string a);
	std::string getAdres();
};

#endif
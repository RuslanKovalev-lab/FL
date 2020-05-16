#ifndef _RegularCleaner_h_
#define _RegularCleaner_h_

#include "Home.h"
#include "Restaurant.h"


class RegularClient : Home,Restaurant {
protected:
	int numberV=15;
	int ConstS = 5;
	std::string Adres = "NY,h32";
public:
	void setNumberV(int sv);
	int getNumberV();
	void setConstS(int cs);
	int getConstS();
	std::string AdresOf();
};

#endif 
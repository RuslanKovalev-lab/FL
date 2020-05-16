
#ifndef _StreetCleaner_h_
#define _StreetCleaner_h_

#include "Cleaner.h"


class StreetCleaner : Cleaner {
protected:
	double percent=1.5;
public:
	void setPercent(double p);
	double getPercent();
	double Salary1();
};

#endif 
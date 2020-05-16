#ifndef _Restaurant_h_
#define _Restaurant_h_

#include "Client.h"

#include <string>
class Restaurant:Client {
protected:
	double percent=0.2;
	std::string name = "Benjamin";
public:
	void setPercent(double p);
	double getPercent();
	double stoimost();
};

#endif 
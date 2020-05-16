#ifndef _Person_h_
#define _Person_h_
#include <string>
class Person {
protected:
	std::string name="Benjamin";
public:
	void setName(std::string s);
	std::string getName();
	
};

#endif 
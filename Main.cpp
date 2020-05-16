#include <iostream>
#include <string>

#include "Person.h"
#include "Restaurant.h"
#include "Client.h"
#include "Home.h"
#include "Cleaner.h"
#include "StreetCleaner.h"
#include "RegularClient.h"
#include "Deliveryman.h"
#include "Waiter.h"
#include "Chief.h"
#include "Taxi.h"
#include "Manager.h"

using namespace std;

int main()
{
	Person p;
	Client c;
	Home h;

	RegularClient rc;
	Restaurant r;
	Cleaner cl;

	StreetCleaner sc;
	Deliveryman d;
	Waiter w;

	Employee e;
	Chief ch;
	Taxi t;
	Manager m;


	cout << "name of Person is " << p.getName()<<"\n";

	cout <<"money for buy: " <<c.getMoney() << "\n";
	cout << "money for tip: "<<c.getMoney1() << "\n";

	cout << "\n";

	cout <<"adres of client: "<<h.getAdres() << "\n";

	cout << "\n";

	cout <<"percent for restaurant client: "<<r.getPercent()<<"\n";
	cout << "cost for restaurant client: "<< r.stoimost();

	cout << "\n";

	cout << cl.getArea()<<"\n";
	cout << cl.getCoinForM()<<"\n";
	cout << cl.Salary()<<"\n";

	cout << "\n";

	cout << sc.Salary1() << "\n";
	cout << sc.getPercent() << "\n";

	cout << "\n";

	cout << rc.getNumberV() << "\n";
	cout << rc.getConstS() << "\n";
	cout << rc.AdresOf() << "\n";

	cout << "\n";

	cout << "from: "<<d.getAdresF() << "\n";
	cout << "to: "<<d.getAdresS() << "\n";
	cout << "salary of deliveryman: "<<d.money();

	cout <<"employee of waiter: "<< w.getMoney2() << "\n";
	
	cout <<"employee salary: "<< e.getSalary() << "\n";
	cout << "number of employee: "<<e.getNumber() << "\n";

	cout << "order of chief:";
	ch.prikaz();
	cout << "name of chief "<<ch.Name() << "\n";
	cout << ch.getSalaryOCh()<<"\n\n";


	cout <<"agency of taxi: " <<t.getAgency()<<"\n";
	cout << "number of taxi: "<<t.getNumber()<<"\n";
	t.Name();

	cout <<"money for adv: "<<m.getMoneyFA()<<"\n";
	cout << "salary: " << m.SalaryFA() << "\n";

	return 0;
}

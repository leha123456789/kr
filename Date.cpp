#include <iostream>
#include "kr.h"
using namespace std;
Date::Date()
{
	cout << "Year, Month, Day"<< endl;
	cin >> year >> month >> day;
	mass = new int[year+month+day];
	cin >> mass [year+month+day];
}
Date::Date(unsigned int Year,unsigned int Month,unsigned int Day, int *Mass)
{
year=Year;
month=Month;
day=Day;
mass=Mass;
}
Date::~Date(){
	delete [] mass;
	}
	

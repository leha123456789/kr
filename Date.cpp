#include <iostream>
#include "kr.h"
using namespace std;
Date::Date()
{
	cout << "Year, Month, Day"<< endl;
	cin >> y >> m >> d;
	if (m>12||d>31){
	throw "Error";
	}
	mass = new int[y+m+d];
	cin >> mass [y+m+d];
}
Date::Date(unsigned int Y,unsigned int M,unsigned int D, int *Mass)
{
y=Y;
m=M;
d=D;
mass=Mass;
}
Date::~Date(){
	delete [] mass;
	}
	

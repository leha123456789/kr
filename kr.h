#include <iostream>
using namespace std;
class Date
{
	private:
		unsigned int year;
		unsigned int month;
		unsigned int day;
		int *mass;
		Date(unsigned int year,unsigned int month,unsigned int day, int *mass);
	public:
		Date();
		~Date();
		friend ostream& operator<<(ostream &out, Date &ms){
		for (int i=0; i< ms.y; i++){
		for (int j=0; j <ms.m; i++){
		for (int k=0; k < ms.d; i++){
		out << m.mass[ms.y+ms.m+ms.d] << "";
				}
				out << endl;
			}
			return out;
		}
		}
		friend Date operator+ (Date const& m1, Date const& m2){
		int *mass = new int[m1.y+m1.m+m1.d];
		for (int i = 0; i < m1.y+m1.m+m1.d; i++){
		 mass[i]=m1.mass[i]+m2.mass[i];
		}
		Data result(m1.y, m1.m, m1.d, mass);
		return result;
		}
		friend Date operator- (Date const& m1, Date const& m2){
		int *mass = new int[m1.y+m1.m+m1.d];
		for (int i = 0; i < m1.y+m1.m+m1.d; i++){
		 mass[i]=m1.mass[i]-m2.mass[i];
		}
		Data result(m1.y, m1.m, m1.d, mass);
		return result;
		}
};	

#include <iostream>
using namespace std;
template<typename T>
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
	
		friend Date operator+ (Date const& m1, Date const& m2){
		int *mass = new int[m1.year+m1.month+m1.day];
		for (int i = 0; i < m1.year+m1.month+m1.day; i++){
		 mass[i]=m1.mass[i]+m2.mass[i];
		}
		Date result(m1.year, m1.month, m1.day, mass);
		return result;
		}
		friend Date operator- (Date const& m1, Date const& m2){
		int *mass = new int[m1.year+m1.month+m1.day];
		for (int i = 0; i < m1.year+m1.month+m1.day; i++){
		 mass[i]=m1.mass[i]-m2.mass[i];
		}
		Date result(m1.year, m1.month, m1.day, mass);
		return result;
		}
		friend ostream& operator<<(ostream &out,const Date &ms){
			for (int i=0; i< ms.year; i++){
				for (int j=0; j <ms.month; i++){
					for (int k=0; k < ms.day; i++){
						out << ms.mass[ms.year+ms.month+ms.day] << "";
				}
				out << endl;
			}
		}
		return out;
	}
};	

#include <iostream>
#include <iomanip>
#include <stdexcept>



using namespace std;
class Time
{
public:
	Time(){
		hour=minute=second=0;
	}
	void setTime(int h,int m,int s){
		hour=h;
		minute=m;
		second=s;
	}
	void printUniversal(){
		cout << setfill('0') << setw(2) << hour <<":" << setw(2) << minute << ":" <<setw(2)<<second;
	}
	void printStandard(){
		cout << ((hour==0)||(hour == 12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12? "AM":"PM");

 	}
private:
int hour;
int minute;
int second;	

};


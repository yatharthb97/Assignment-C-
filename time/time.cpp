//Implementation of Time class
#include<iostream>
#include<iomanip>
using namespace std;
#include"time.h"


Time::Time(){
	hour = 0;
	minute=0;
	second=0;
}

void Time::setTime(int h, int m, int s){

	hour=(h>=0 && h<24)?h:0;
	minute=(m>=0 && m<60)?m:0;
	second=(s>=0 && s<60)?s:0;

}

void Time::printUniversal(){
	cout<<"Universal# ";
	cout<<setw(2)<<hour<<":"<<setw(2);
	cout<<setw(2)<<minute<<":"<<setw(2);
	cout<<setw(2)<<second<<setw(2)<<endl;
}


void Time::printStandard()
{
	cout<<"Standard# ";
	cout<<((hour==0 || hour==12)?12:hour%12)<<":"<<minute<<":"<<second<<endl;
}
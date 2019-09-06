#include "rectangle.h"
#include<iostream>
using namespace std;

int main(){
	double width, length;

	cout<<"Enter length and width: ";
	cin>>width>>length;

	//Instance r1
	rectangle r1(width, length);
	cout<<"Area: "<<r1.Area()<<"\t"<<"Perimeter: "<<r1.Perimeter()<<endl;

	cout<<"Enter length and width: ";
	cin>>length>>width;

	//Instance r2
	rectangle r2;
	r2.setLength(length);
	r2.setWidth(width);
	cout<<"Length: "<<r2.getLength()<<"\t"<<"Width: "<<"\t"<<r2.getWidth()<<endl;
	



}
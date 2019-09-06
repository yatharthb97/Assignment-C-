#include<iostream>
#include "rectangle.h"
using namespace std;


///Member Functions Definations

//:::::::::::::::::::::::::::::::::::
//Default Constructor
rectangle::rectangle()
{
	width = 1;
	length = 1;
}

//Overloading Constructor
rectangle::rectangle(double w, double l)
{
	width = w;
	length = l;
}
//::::::::::::::::::::::::::::::::::::::



//=====================================
//Area Calculator
double rectangle::Area()
{
	return(length*width);
}

//Perimeter Calculator
double rectangle::Perimeter()
{
return(2*(length+width));
}
//======================================



//Get Functions----------------------------
double rectangle::getLength()
{
	return length;
}

double rectangle::getWidth()
{
	return width;
}
// ----------------------------------------



//Set Functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void rectangle::setLength(double l)
{
	if(l>=0.0 && l<=20.0){length =l; cout<<">>>Length within bounds!"<<endl;}
	else{cout<<">>>Length out of bounds!"<<endl;}
}

void rectangle::setWidth(double w)
{
	if(w>=0.0 && w<=20.0){width =w; cout<<">>>Width within bounds!"<<endl;}
	else{cout<<">>>Width out of bounds!"<<endl;}
}

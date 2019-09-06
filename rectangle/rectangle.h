#pragma once

class rectangle
{

private:
double length;
double width;

public:
///Member Functions Declarations

//:::::::::::::::::::::::::::::::::::
//Default Constructor
rectangle();


//Overloading Constructor
rectangle(double, double);

//::::::::::::::::::::::::::::::::::::::



//=====================================
//Area Calculator
double Area();


//Perimeter Calculator
double Perimeter();

//======================================



//Get Functions----------------------------
double getLength();


double getWidth();

// ----------------------------------------



//Set Functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setLength(double);


void setWidth(double);

};//End of Class Declaration
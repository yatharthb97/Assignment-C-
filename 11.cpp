#include<iostream>
#include<math.h>
using namespace std;

//Function Declarations
double power(double, int);
int factorial(int);
double taylor(int, double);

//Main Finction
int main(){

	double x = 0.00; double e = 1.00;
	cout<<"Calculate e of x:"<<endl<<endl;
	cout<<"Enter x :";
	cin>>x;

	//Calculation of Exponential with Taylor Expansion
	for(int i = 1; i<10; i++){
		e = e + taylor(i, x);
	}


	cout<<"Using Taylor Expansion:"<<endl;
	cout<<"e^ "<<x<<" : "<<e<<endl<<endl<<endl;


	cout<<"Calculation using <math.h> library:"<<endl;
	//double z = math.sin(x);
	cout<<"e^ "<<x<<" : "<<exp(x)<<endl;
}


double power(double a, int b ){
	double pow=1;
	for(int i=b; i>0; i--)
	{
		pow = pow*a;
	}
	return(pow);

}

int factorial(int c)
	{
	if(c==0 || c==1)
		{return(1);}
	else{
		int fac = 1;
		fac = c * factorial(c-1);
		return fac;
	}

	
	}


double taylor(int t, double y)
	{
		double tay;
 		tay = power(y, t)/factorial(t);
		return (tay);
	}


	

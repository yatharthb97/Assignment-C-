/*14. Write a class which can calculate addition, subtraction, multiplication and division of two rational number .
*/

//Preprocesors
#include<iostream>
using namespace std;

//Class calc
class calc{

public:
	///Member Functions

	//Overloading Constructor - Assignment
	calc(double a, double b){

		this->a=a;
		this->b=b;
	}

	//Addition
	double add()
	{
		return a+b;
	}

	//Subtraction
	double sub()
	{
		return a-b;
	}

	//Multiplication
	double mul()
	{
		return a*b;
	}

	//Division
	double div()
	{
		return a/b;
	}

private:

	///Member Variables
	double a, b;
}; //End of Class calc


///Main function
int main(){
	calc c(5,6); //Object created with a = 5 and b = 6
	cout<<"Addition: "<<c.add()<<endl<<"Subtraction: "<<c.sub()<<endl<<"Multiply: "<<c.mul()<<endl<<"Divide: "<<c.div()<<endl;


} //End of Main Function
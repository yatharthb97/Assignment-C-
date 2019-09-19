/*8. The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, ................... begins with the term 0 and 1 has the property that each succeeding term is the sum of the two preceeding terms. a) Write a nonrecursive function fibonacci (n) that calculates the nth Fibonacci number. b) Determine the largest int Fibonacci number that can be printed on your system. Modify the program of part(a) to use double instead of int to calculate and return Fibonacci numbers and use this modified program to repeat part (b). */



//Preprocessors
#include<iostream>
using namespace std;

//Function declarations
int fibonnaci(int);
double fibonnaci(double);

//Main
int main()
{
	cout<<"Using integer F(200): "<<fibonnaci(200)<<endl;
	cout<<"Using integer F(200): "<<fibonnaci((double)200)<<endl;
	return 0;
}



//Non-recursive fibonnaci
int fibonnaci(int n)
{
	//cout<<n<<" fibonnaci numbers:"<<endl; 
	int a = 0;
	int b = 1;
	int c;
	int count = 2;
	cout<<a<<" "<<b<<" ";
	while(count!=n)
	{
		//Un-comment to print each number
		//cout<<a<<" "<<b<<" ";
		c = a+b;
		a = b;
		b = c;
		count++;
		//Un-comment to print each number
		//cout<<c<<" ";
	}
	cout<<endl;
	return c;
}

//Overloaded with a double argument
double fibonnaci(double n)
{
	//cout<<n<<" fibonnaci numbers:"<<endl; 
	double a = 0;
	double b = 1;
	double c;
	double count = 2;
	//cout<<a<<" "<<b<<" ";
	while(count!=n)
	{
		//Un-comment to print each number
		//cout<<a<<" "<<b<<" ";
		c = a+b;
		a = b;
		b = c;
		count++;
		//Un-comment to print each number
		//cout<<c<<" ";
	}
	return c;
	cout<<endl;
}//End of Function





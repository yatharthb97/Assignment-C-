/*9. a) An integer is said to be a perfect number if the sum of its divisors, including 1 ( but not the number itself), is equal to the number. For example, 6 is a perfect number, because 6= 1+2+3. Write a function perfect that determines whether parameter number is a perfect number. Use this function in a program that determines and prints all the perfect number between 1 and 1000. Print the divisors of each// perfect number to confirm that the number is indeed perfect. Challenge the power of your computer by testing the numbers 
much larger than 1000.One mathematician claims that reciprocals of the divisors of a perfect number must add up to 2. b) Write a program to test that his claim is true for any perfect number. 
*/

//Preprocessors
#include<iostream>
using namespace std;

//Function declarations
bool perfect(int, bool);

//Main
int main()
{
	for(int i = 1; i<=1000; i++)
	{
		perfect(i, false);
		//cout<<i<<"\t"<<perfect(i, true);
	}

	perfect(6, true);
	return 0;
}


bool perfect(int n, bool print)
{
	int p = 0;
	double q = 0.000;
	if(print){cout<<n<<"\t";}
	for(int i =n-1;i>=1; i--)
	{	
		
		if(n%i==0)
		{
			if(print) 
			{cout<<i<<" ";}
			p+=i;
			q+=((double)1/(double)i);
		}
	}
	if(print)cout<<endl;
	if(p==n)
		{
			cout<<n<<" is a perfect number."<<endl;
			if(q==2){cout<<"Reciprocal condition satisfied! Value: "<<q<<endl<<endl;}
			else{cout<<"Reciprocal condition *not* satisfied! Value: "<<q<<endl<<endl;}
			return true;
		}
	else{return false;}
}
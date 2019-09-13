/*Question 4. The 3-digit number 153 has the following interesting property: 
1^3 + 5^3 + 3^3 = 153 Sum of the digits, raised to the power of the number of digits, is the number itself. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,d;

	cout<<"Numbers: "<<endl;
	for (int i = 100; i<=9999;i++)
	{
		

		//cout<<a <<b <<c<<d<<endl;

		if(i<=999) //3 digit
		{
		b = i%10;
		c = (i%100)/10;
		d = (i/100);	
			if((pow(b,3)+pow(c,3)+pow(d,3)) == i)
			{
				cout<<i<<"\t";
			}
		}

		else //4 digit
		{
		d = i%10;
		c = (i%100)/10;
		b = (i%1000)/100;
		a = (i/1000);
			if((pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4)) == i)
			{
				cout<<i<<"\t";
			}
		}
		
	}
	cout<<endl;
	return 0;
}
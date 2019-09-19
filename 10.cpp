/*10. Input an integer containing only 0s and 1s (i.e. a “binary” integer) and
print its decimal equivalent.*/

//Preprocessors
#include<iostream>
#include <stdlib.h> //For atoi
#include <cmath> //For pow
using namespace std;

//Main
int main(){
	char binary[10];
	cout<< "Enter the binary number: ";
	
	cin>>binary;

	//Print Char Array for Confirmation
	cout<< "Number Entered: ";
	for(int j=0; j<10; j++)
	{cout<<binary[j];}
	
	int d = 0; int p = 0;

	for(int j=9; j>=0; j--)
	{
		d = d + (((int)(binary[j])-48)* pow(2,p));
		p++;
		
	
	}

	cout<<endl<< "Decimal: "<<d<<endl;

}

//48 ==> ASCI for 0, '1' = 49.

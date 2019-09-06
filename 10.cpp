/*10. Input an integer containing only 0s and 1s (i.e. a “binary” integer) and
print its decimal equivalent.*/

//Preprocessors
#include<iostream>
#include <stdlib.h> //For atoi
#include <cmath> //For pow
using namespace std;

//Main
int main(){
	char binary[11];
	for(int i; i<11; i++){ binary[i] = 'x';} //Initialization
	cout<< "Enter the binary number: ";
	
	cin.get(binary,10);

	//Print Char Array for Confirmation
	cout<< "Number Entered: ";
	for(int j=0; j<11; j++)
	{cout<<binary[j];}
	
	int d = 0; int p = 0;

	for(int j=9; j>=0; j--)
	{
		if(binary[j]!= 'x'){

			//if((binary[j]!='0')&&(binary[j]!='1')) {cout<<endl<< "Invalid binary!"<<endl; return 0;}

			/*else*/
			{
				d = d + ((int)(binary[j])* pow(2,p));
				p++;
			}
		}
	}
	cout<<endl<< "Decimal: "<<d<<endl;

}
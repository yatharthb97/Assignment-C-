#include<iostream>
using namespace std;



int main(){
int array1[3][3], array2[3][3];
cout<<"Matrix Multiplication: "<<endl<<"Enter the first 3 X 3 Matrix (A): "<<endl;

for(int j =0;j<3; j++)
	{
		cout<<"Enter A["<<j+1<<"][:] : ";
		for(int k = 0; k<3; k++)
		{
			cin>>array1[j][k];			
		}
		
	}
cout<<"Enter the second 3 X 3 Matrix (B): "<<endl;

for(int j =0;j<3; j++)
{
		cout<<"Enter B["<<j+1<<"][:] : ";
		for(int k = 0; k<3; k++)
		{
			cin>>array2[j][k];			
		}
		
}

cout<<"Matrix (A): "<<endl;
	for(int j =0;j<3; j++)
	{
		for(int k = 0; k<3; k++)
		{
			cout<<array1[j][k]<<"\t";			
		}
		cout<<endl;
		
	}

cout<<"Matrix (B): "<<endl;
	for(int j =0;j<3; j++)
	{
		for(int k = 0; k<3; k++)
		{
			cout<<array2[j][k]<<"\t";			
		}
		cout<<endl;
		
	}


cout<<"Matrix (C) = A X B: "<<endl;

	for(int j =0;j<3; j++)
	{
		for(int k = 0; k<3; k++)
		{
			cout<<array1[j][k]*array2[j][k]<<"\t";			
		}
		cout<<endl;
		
	}

return 0;
}

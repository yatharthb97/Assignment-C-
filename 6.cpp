#include<iostream>
using namespace std;

int main(){

int array[10];
cout<<"Enter the elements of the array: ";

for(int i=0; i<10; i++)
{
cin>>array[i];
}

//Print array
cout<<"Array: [";
for(int i=0; i<10; i++)
{
cout<<array[i]<<" ";
}
cout<<"]"<<endl;

int max = array[0];
int count = 1;
//Maximum
for(int i = 1; i<10; i++)
{
	if(array[i]==max){count+=1;}
	if(array[i]>max){max = array[i]; count = 1;}
}

cout<<"Maximum of array:"<<max<<" appears "<<count<<" times."<<endl;


//Minimum
int min = array[0];
count = 1;
for(int i = 1; i<10; i++)
{
	if(array[i]==min){count+=1;}
	if(array[i]<min){min = array[i]; count = 1;}
}

cout<<"Minimum of array:"<<min<<" appears "<<count<<" times."<<endl;

}
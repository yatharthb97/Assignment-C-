#include<iostream>
#include<cstdlib>
#include<string>

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

//Sort count
int p=0,n=0,z=0;
for(int i=0; i<10; i++)
{
if(array[i]==0) z+=1;
else if (array[i] < 0) n+=1;
else p+=1;
}
cout<<"|| Array Analysis ||"<<endl<<"No of Zero Elements: "<<z<<endl<<"No of Positive Elements: "<<p<<endl<<"Number of negative elements: "<<n<<endl;


//Ascending Sorting
for(int i =9; i>=0; i--)
{
	for(int j=i-1; j>=0; j--)
	{
	
		if(array[i]<array[j])
		{
			int a = array[j];
			array[j] = array[i];
			array[i] = a;
		}
	}
}

//Print array
cout<<"Ascending Array: [";
for(int i=0; i<10; i++)
{
cout<<array[i]<<" ";
}
cout<<"]"<<endl;


for(int i =9; i>=0; i--)
{
	for(int j=i-1; j>=0; j--)
	{
	
		if(array[i]>array[j])
		{
			int a = array[j];
			array[j] = array[i];
			array[i] = a;
		}
	}
}

//Print array
cout<<"Ascending Array: [";
for(int i=0; i<10; i++)
{
cout<<array[i]<<" ";
}
cout<<"]"<<endl;


}












/*int main(int argc, char *argv[]){
cout<<argc<<endl;
int c = argc;
int array[20];
int i = 0;
for (i = 0; i<c; i--)
{
	cout<<argv[i];
	//array[i] = int(argv[i]);
	//cout<<array[i];
}
return 0;
}*/

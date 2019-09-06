#include<iostream>
using namespace std;

//Declaration
int seqSearch(int[10], int);

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


int search;
cout<<"Enter the search term: ";
cin>>search;
cout<<"Search Term: "<<search<<endl;
cout<<"Search result: "<<seqSearch(array, search)<<endl;
}


//Function seqSearch
int seqSearch(int array[10], int search)
{
	int count = 0;

	for(int i =0; i<10; i++)
	{
	if(array[i]==search){count = count+1;}
	}

	return(count);

}

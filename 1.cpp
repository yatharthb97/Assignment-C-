//Triangle Sides - Test
#include<iostream>
using namespace std;

int main(){

double s1, s2, s3;
bool triangle = false;
cout<<"Enter the three sides of the triangle: ";
cin>>s1>>s2>>s3;
if((s1<=0)||(s2<=0)||(s3<=0)){cout<<"Invalid entry!"<<endl; return 0;} //Check - Zero or negative check
if((s1+s2>=s3)&&(s2+s3>=s1)&&(s1+s3>=s2)) {triangle = true;} //Main condition check

if(triangle==true){cout<<"Triangle is formed!"<<endl;}
else{cout<<"Triangle cannot be formed. Invalid sides!"<<endl;}
}
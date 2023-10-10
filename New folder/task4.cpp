#include <iostream>
#include<cmath>
using namespace std;
int main(){
int num1;
int num2;
int num3;
int result;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
cout<<"Enter the third number: ";
cin>> num3;
if (num1>num2 && num2>num3)
 {  result = num1;
cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;}
if (num2>num3 && num3>num1)
{
       result = num2;
cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;}
if (num3>num1 && num3>num2)
{
       result = num3;
cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;}
}



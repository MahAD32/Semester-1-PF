#include<iostream>
using namespace std;
int greaterNumber(int num1,int num2);
 main(){
int num1;
int num2;
cout<<"Enter the first number: ";
cin >> num1;
cout<<"Enter the second number: ";
cin >> num2;
 cout<<greaterNumber(num1,num2);
}
int greaterNumber(int num1,int num2)
{
int ans1 = 0;
if(num1>num2){
 ans1 = 1;}
return ans1;


}


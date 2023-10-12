#include <iostream>
#include <windows.h>
using namespace std;
int findGreatest(int num1,int num2,int num3,int num4);
main(){
int num1,num2,num3,num4;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter te second number: ";
cin>>num2;
cout<<"Enter the third number: ";
cin>> num3;
cout<<"The greatest number among "<<num1<<", "<<num2", and "<<num3<<" is: "<<num4;
}
int findGreatest(int num1,int num2,int num3,int num4)
{
   if(num1>num2){
      if num1>num3){
         num4 = num1;
return num4;
}
   if(num3>num2){
      if num3>num1){
         num4 = num3;
return num4;
}
   if(num2>num1){
      if num2>num3){
         num4 = num2;
return num4;
}
}
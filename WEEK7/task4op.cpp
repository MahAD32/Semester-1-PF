#include<iostream>
using namespace std;
int  frequencyCheck(int number,int digit);
main(){
    int number;
    int digit;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    int r =frequencyCheck( number,digit);
cout<<"Frequency: "<<r;
}
int  frequencyCheck(int number,int digit){

int frequency =0;
int code;
code = number%10;
while(number>>0){
if(code==digit)
{
    frequency = frequency +1;}
    number=number/10;
    code =number%10;
}

return frequency;




}
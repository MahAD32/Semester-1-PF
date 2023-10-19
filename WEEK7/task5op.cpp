#include<iostream>
using namespace std;
int  digitSum(int number);
main(){
    int number;
    int digit;
    cout<<"Enter a number: ";
    cin>>number;  
    int r =digitSum( number);
    cout<<"Sum of digits: "<<r;
  
}
int  digitSum(int number){

int sum =0;
int code;
while(number > 0){
code = number%10;
  sum = sum  + code;
  number = number/10;
}
return sum;
}
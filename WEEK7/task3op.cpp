#include<iostream>
using namespace std;
int totalDigits();
int number;
int i;
main(){
cout<<"Enter a number: ";
cin>>number;
int r = totalDigits();
cout<<"Total number of digits: ";
cout<<r;
}
int totalDigits(){
    int i =0;
    if (number < 0)
    number = number*-1;
do{
i = i+1;
number = number/10;
}
while(number>0);
return i;

}
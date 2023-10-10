#include<iostream>
using namespace std;
float discount(float amount,float num2,string day,string month);
int main(){
float amount;
float num2;
string day;
string month;
cout<<"Enter Purchase Day: ";
cin>> day;
cout<<"Enter Purchase Month: ";
cin>> month;
cout<<"Enter Purchase Amount: ";
cin>> amount;
cout<<"Payable Amount after discount: "<<discount(amount,num2,day,month);
}
float discount(float amount,float num2,string day,string month)
{
if (day == "Sunday")
{ num2 =amount - amount*0.1;
return num2;
}
if (day == "October")
{ num2 =amount - amount*0.1;
return num2;
}
}
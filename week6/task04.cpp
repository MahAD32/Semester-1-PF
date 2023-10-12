#include <iostream>
#include <windows.h>
using namespace std;
string discount( float amount,string day, string month,float resultant);
main(){
float amount,resultant;
string day,month;
cout<<"Enter Purchase Day: ";
cin>>day;
cout<<"Enter Purchase Month: ";
cin>>month;
cout<<"Enter Purchase Amount: ";
cin>>amount;
cout<<"Payable Amount after discount: "<<resultant:
}
string discount(float amount,string day,string month,float resultant)
{
if (day == 'Sunday')
{if (month =='October'){
  resultant = amount -amount*0.1;
return resultant;}
}
if (day == 'Sunday'){
  resultant = amount -amount*0.05;
return resultant;
}
else {
resultat = amount;
return resultant;
}
}
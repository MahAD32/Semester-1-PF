#include<iostream>
using namespace std;
float teleBill(char type, float minutes);
string typeAway(char type);
main(){
    char type,time;
    float minutes;
    string typeFull;
    float amountDue;

cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>>type;
typeFull = typeAway(type);
cout<<"Service type: "<<typeFull<<endl;
cout<<"Total Minutes Used: ";
cin>>minutes;
amountDue =teleBill(type,minutes);
cout<<"Amount Due: "<<amountDue<<"$";
} 
string typeAway(char type){
   string typeFull;
   char time;{
    
    if(type == 'R')
    {typeFull = "Regular";
    return typeFull;
    }
     if(type == 'P')
    {typeFull = "Premium";

 cout<<"Enter the time of call (D/d for day, N/n for night): ";
cin>>time;
    return typeFull;
    }
}
}
float teleBill(char type, float minutes)

{
float amountDue;
char time;
{
if( type == 'R' && minutes<= 50 )
{amountDue = 10;
return amountDue;
}
if( type == 'P'&& minutes> 75 && time == 'D')
{amountDue = 25 + (minutes-75)*0.10;

return amountDue;}
    if( type == 'P' && minutes <= 75&& time == 'D')
amountDue = 25;
return amountDue;}
if( type == 'P'&& minutes > 100 && time == 'N')
{amountDue = 25 + (minutes-100)*0.05;

return amountDue;}
if( type == 'P'&& minutes <= 100 && time == 'N')
{amountDue = 25;

return amountDue;}}

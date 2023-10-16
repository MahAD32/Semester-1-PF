#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string decideActivity( string temp,string humidity);
main(){
    string activity;
string temp,humidity;
cout<<"Enter temperature (warm or cold): ";
cin>>temp;
cout<<"Enter humidity: ";
cin>>humidity;
cout<<decideActivity(temp,humidity);
}
string decideActivity( string temp,string humidity)
{
    string activity;{
    if(temp =="Warm" && humidity =="Dry"){
activity = "Play tennis";
}
   if(temp =="Cold" && humidity =="Dry"){
activity = "Play basketball";
}
   if(temp =="Warm" && humidity =="Humid"){
activity = "swim";
}
   if(temp =="Cold" && humidity =="Humid"){
activity = "Watch tv";
}
return activity;
    }
}

#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
 string calculateHotelPrices(float stays,string month);
main(){
    int stays;
    string month;
    float apartment;
    float studio;
    cout<<"Enter the month (May, June ,July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    cout<<calculateHotelPrices(stays,month);
    cout<<studio;

}
string calculateHotelPrices(float stays,string month){
    float apartment;
    float studio;
    if (month == "May" || month == "October" )
    { 
        if( stays > 7 && stays <=14 ){
     apartment = stays*65 ;
     studio = stays*50 -  (0.05*stays*50);
    }
    if( stays < 7 ){
     apartment = stays*65;
     studio = stays*50;}
      if( stays > 14 ){
     apartment = stays*65 -  (0.1*stays*65);
     studio = stays*50 -  (0.3*stays*50);
    } 
    }
   if (month == "June" || month == "September"){
    if(stays <= 14 ){
     apartment = stays*68.70;
     studio = stays*75.20;
    }
    if(stays > 14 ){
     apartment = stays*68.70 - (0.1*stays*68.70);
     studio = stays*75.20  - (0.2*stays*75.20);
    }
   }
    if (month == "July" || month == "August"){
        if(stays <=14){
     apartment = stays*77;
     studio = stays*76;
    }
    if (stays > 14){
     apartment = stays*77 -(0.1*stays*77);
     studio = stays*76;
    }
    }
     return "Appartment: "+ to_string(apartment)+"$"+"Studio: "+ to_string(studio)+"$";

    }

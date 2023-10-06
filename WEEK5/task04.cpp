#include <iostream>
#include <cmath>
using namespace std;
string time(int hours,int days,int workers,int hoursLeft,int training,int timeFirm);
main(){
int hours,days,workers,hoursLeft,training,timeFirm;
string result = time(hours,days,workers,hoursLeft,training,timeFirm);
  cout<<result;
}
string time (int hours,int days,int workers,int hoursLeft,int training,int timeFirm)
{
 cout<<"Enter the needed hours: ";
cin>> hours;
cout<<"Enter the days that firm has: ";
cin>> days;
cout<<"Enter the number of all workers: ";
cin>> workers;
training = days*workers*10;
timeFirm = training*0.1;
   hoursLeft = training-timeFirm;


   if (hoursLeft >= hours )
{   hoursLeft = hoursLeft - hours;
     return "Yes! "+ to_string(hoursLeft) +" hours needed.";
}

   if (hoursLeft < hours )
{  hoursLeft =hours - hoursLeft;
     return "Not enough time! "+ to_string(hoursLeft) +" hours needed.";
}
}
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float calculateVolleyballGames(string yearType,float holidays,float homeTownWeekends);
main(){
    float amountPlayed;
string yearType;
float holidays,homeTownWeekends;
cout<<"Enter year type: ";
cin>>yearType;
cout<<"Enter number of holidays: ";
cin>>holidays;
cout<<"Enter number of weekends: ";
cin>>homeTownWeekends;
cout<<calculateVolleyballGames(yearType,holidays,homeTownWeekends);

}
float calculateVolleyballGames(string yearType,float holidays,float homeTownWeekends)
{float amountPlayed;
{if(yearType == "Normal"){
    amountPlayed = (0.67)*holidays+homeTownWeekends+(0.75)*(48-homeTownWeekends);
    return amountPlayed;
}
if(yearType == "Leap"){
    amountPlayed = ((0.67)*holidays+homeTownWeekends+(0.75)*(48-homeTownWeekends))+0.15*((0.67)*holidays+homeTownWeekends+(0.75)*(48-homeTownWeekends));
    return amountPlayed;
}
}
}

    
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string findZodiacSign(string month,int day);
main(){
    string month;
    int day;
    string zodiac;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    zodiac = findZodiacSign(month,day);
    cout<<"Zodiac Sign: "<<zodiac;
}
string findZodiacSign(string month,int day)
{
      string zodiac;
    if ((day >=21 && day <=31) && month == "March" || (day >=1 && day<=19) && month =="April")
    { zodiac = "Aries";
    return zodiac;
    }
    if ((day >=20 && day <=31) && month == "April" || (day >=1 && day<=20) && month =="May")
    { zodiac = "Taurus";
    return zodiac;
    }
    if ((day >=21 && day <=31) && month == "May" || (day >=1 && day<=20) && month =="June")
    { zodiac = "Gemini";
    return zodiac;
    }
    if ((day >=21 && day <=31) && month == "June" || (day >=1 && day<=22) && month =="July")
    { zodiac = "Cancer";
    return zodiac;
    }
    if ((day >=23 && day <=31) && month == "July" || (day >=1 && day<=22) && month =="August")
    { zodiac = "Leo";
    return zodiac;
    }
    if ((day >=23 && day <=31) && month == "August" || (day >=1 && day<=22) && month =="September")
    { zodiac = "Virgo";
    return zodiac;
    }
     if ((day >=23 && day <=31) && month == "September" || (day >=1 && day<=22) && month =="October")
    { zodiac = "Libra";
    return zodiac;
    }

     if ((day >=23 && day <=31) && month == "October" || (day >=1 && day<=21) && month =="November")
    { zodiac = "Scorpio";
    return zodiac;
    }

 if ((day >=22 && day <=31) && month == "november" || (day >=1 && day<=21) && month =="December")
    { zodiac = "Sagittarius";
    return zodiac;
    } 
    if ((day >=22 && day <=31) && month == "December" || (day >=1 && day<=19) && month =="January")
    { zodiac = "Capricorn";
    return zodiac;
    }
 if ((day >=20 && day <=31) && month == "January" || (day >=1 && day<=18 ) && month =="Feburary")
    { zodiac = "Aquarius";
    return zodiac;
    }

 if ((day >19 && day <=31) && month == "Feburary" || (day >=1 && day<=20) && month =="March")
    { zodiac = "Pices";
    return zodiac;
    }

}
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string checkStudentStatus(int examHour,int examMinute,int studentHour, int studentMinute);
main()
{    int hourDifference,minuteDifference;
    int examHour,examMinute,studentHour,studentMinute;
cout<<"Enter Exam Starting Time (hour): ";
cin>>examHour;
cout<<"Enter Exam Starting Time (minutes): ";
cin>>examMinute;
cout<<"Enter Student hour of arrival: ";
cin>>studentHour;
cout<<"Enter Student minute of arrival: ";
cin>>studentMinute;
cout<<checkStudentStatus(examHour,examMinute,studentHour,studentMinute;);
}
string checkStudentStatus(int examHour,int examMinute,int studentHour, int studentMinute)
{
     if(examHour >studentHour )
     {
 hourDifference = examHour - studentHour;
     
     if (examMinute > studentMinute){
        minuteDifference = examMinute - studentMinute;
     }
     
     if (examMinute < studentMinute){
        minuteDifference = studentMinute - examMinute;
     }
     }
     if(studentHour >examHour){
        if (examMinute 
     }
}
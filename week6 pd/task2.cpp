#include<iostream>
#include <windows.h>
#include<cmath>
using namespace std;
float calculateAverage( int numE,int numM,int numC, int numS,int numB,string name);
string calculateGrade(float percentage);
main(){
int numE,numB,numS,numM,numC;
float percentage;
string name,grade;
cout<<"Enter student name: ";
cin>>name;
cout<<"Enter marks for English: ";
cin>>numE;
cout<<"Enter marks for Math: ";
cin>>numM;
cout<<"Enter marks for Chemistry : ";
cin>>numC;
cout<<"Enter marks for Social Sciences: ";
cin>>numS;
cout<<"Enter marks for Biology: ";
cin>>numB;
cout<<"Student name: "<<name<<endl;
   percentage = calculateAverage( numE, numM,numC, numS, numB, name);
  cout<<"Percentage : "<<percentage<<"%"<<endl;
grade = calculateGrade( percentage);
  cout<<"Grade: "<<grade;
}
float calculateAverage( int numE,int numM,int numC, int numS,int numB,string name)
{
   float percentage;
   float total =500;
   percentage = ((numE+numS+numC+numM+numB)/total)*100;
   return percentage;
}
string calculateGrade(float percentage)
{ 
    string grade;
if(percentage >=90 &&percentage <=100)
{grade =" A+";
return grade;}
if(percentage >=80 &&percentage <90)
{grade = 'A';
return grade;}
    if(percentage >=70 &&percentage <80)
{grade = "B+";
return grade;}
if(percentage >=60 &&percentage <70)
{grade = 'B';
return grade;}
if(percentage >=50 &&percentage <60)
{grade ="C+";
return grade;}
if(percentage >=40 &&percentage <50)
{grade ='C';
return grade;}
if(percentage >=40 )
{grade ='F';
return grade;}
}
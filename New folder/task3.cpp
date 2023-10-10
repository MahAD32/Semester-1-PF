#include<iostream>
#include<cmath>
using namespace std;
int main(){
   float value;
   float perimeter;
   char shape;
   cout<<"Enter the shape(s for square, c for circle, t for triangle, h for hexagon): ";
   cin>>shape;
   cout<<"Enter the vaue: ";
cin >>value;
if(shape  == 's')
{
 perimeter = value*4;
cout<<"The perimeter is: "<<perimeter;
}
if(shape  == 'c')
{
 perimeter = value*6.28;
cout<<"The perimeter is: "<<perimeter;
}
if(shape  == 't')
{
 perimeter = value*3;
cout<<"The perimeter is: "<<perimeter;
}
if(shape  == 'h')
{
 perimeter = value*6;
cout<<"The perimeter is: "<<perimeter;
}
return 0;
}
#include <iostream>
#include <windows.h>
using namespace std;
float perimeter(float num1,float num2,char alpha);
main(){
float num1,num2;
char alpha;
cout<<"Enter the shape(s for square, c for circle, t for triangle, h for hexagon): ";
cin>>alpha;
cout<<"Enter the value: ";
cin>>num1;
ccout<<"The perimeter is: "<<num2;
}
float perimeter(float num1,num2,char alpha)
{if ( alpha=='s')
{num2 = num1*4;
return num2;
}
{if ( alpha=='c')
{num2 = num1*6.28;
return num2;
}
{if ( alpha=='t')
{num2 = num1*3;
return num2;
}
{if ( alpha=='h')
{num2 = num1*6;
return num2;
}
}
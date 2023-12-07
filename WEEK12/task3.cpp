#include<iostream>

using namespace std;

main()
{
    string input;
string battleField[5][5]={
 {".",".",".","*","*"}
,{".","*",".",".","."}
,{".","*",".",".","."}
,{".","*",".",".","."}
,{".",".","*","*","."}};
cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
cin>>input;
char alpha;
int num1,num2;
alpha = input[0];
num2 = input[1]-'0';
num2 = num2 -1;
if (alpha == 'A')
num1 = 0;
if (alpha == 'B')
num1 = 1;
if (alpha == 'C')
num1 = 2;
if (alpha == 'D')
num1 = 3;
if (alpha == 'E')
num1 = 4;
if (battleField[num1][num2] == ".")
cout<<"Result: splash";
if (battleField[num1][num2] == "*")
cout<<"Result: BOOM";
}
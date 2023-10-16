#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
void gotoxy(int x,int y);
void printEnemy();
void moveEnemy();
void eraseEnemy();
void printEnvironment();
void movePlayerLeft();
void movePlayerRight();
void printPlayer();
void erasePlayer();
char getCharAtxy(short int x, short int y);

int ex = 8;
int ey = 23;
int px = 20;
int py = 20;

main()
{
    system("cls");
     printEnvironment();
    printPlayer();

    while(true){
    if (GetAsyncKeyState(VK_LEFT))
    {
        movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        movePlayerRight();
    }
    moveEnemy();
    Sleep(100);
}
}
void printEnvironment(){
	cout<<"#############################################################################################################"<<endl;
	cout<<"#                                                                                                           #"<<endl;
	cout<<"#                                                                         .                                 #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                                                                                           #"<<endl; 
	cout<<"#             .                                       .                                                     #"<<endl;
	cout<<"#                                                                                     .                     #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                                                                                           #"<<endl;
	cout<<"#                                                                   .                       .               #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                .                                                                          #"<<endl;
	cout<<"#             .                                                                                             #"<<endl;
	cout<<"#                                                       .                                                   #"<<endl;
	cout<<"#                                                                                .                          #"<<endl;   
	cout<<"#                                                                                                         . #"<<endl;  
	cout<<"#                                                                   .                                       #"<<endl;
	cout<<"#                          .                                                                                #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                                                                                           #"<<endl; 
	cout<<"#                                                   .                                                       #"<<endl;
	cout<<"#                                                                                                           #"<<endl;
	cout<<"#                                                                                   .                       #"<<endl;   
	cout<<"#               .                                                                                           #"<<endl; 
	cout<<"#                                                                                                           #"<<endl;
	cout<<"#                                                                                           .               #"<<endl;
	cout<<"#                                                    .                                                      #"<<endl;   
	cout<<"#                                                                             .                             #"<<endl; 
	cout<<"#############################################################################################################"<<endl;
 }
 
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy(){

    gotoxy(ex,ey);
    cout<<"|||"<<endl;
    gotoxy(ex,ey+1);
    cout<<"|||"<<endl;
    gotoxy(ex,ey+2);
    cout<<" o "<<endl;
 
}
void eraseEnemy(){
    gotoxy(ex,ey);
    cout<<"     "<<endl;
    gotoxy(ex,ey+1);
    cout<<"     "<<endl;
    gotoxy(ex,ey+2);
    cout<<"     "<<endl;

}
void moveEnemy(){
    eraseEnemy();
    ex = ex + 1;
    if (ex >= 30){
    ex =2;
}
    printEnemy();
}
void movePlayerRight(){   
    erasePlayer();
    px = px+1;
    printPlayer();
}
void movePlayerLeft(){
    erasePlayer();
    px = px-1;
    printPlayer();
}
void printPlayer()
{
    gotoxy(px,py);
    cout<<" o "<<endl;
    gotoxy(px,py+1);
    cout<<"|||"<<endl;
    gotoxy(px,py+2);
    cout<<"|||"<<endl;
}
void erasePlayer(){
    gotoxy(px,py);
    cout<<"     "<<endl;
    gotoxy(px,py+1);
    cout<<"     "<<endl;
    gotoxy(px,py+2);
    cout<<"      "<<endl;
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

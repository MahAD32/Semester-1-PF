#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printEnemy();
void moveEnemy(string directionenemy1);
string changeDirection(string directionenemy1);
void eraseEnemy();
void printEnemy3();
void moveEnemy3();
void eraseEnemy3();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnvironment();
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();
void printPlayer();
void erasePlayer();
char getCharAtxy(short int x, short int y);

int ex1=8,ey1=23; 
int ex2=20,ey2=8;
int ex3=40,ey3=15;
int px = 20,py = 20;

main()
{   string directionenemy1="right";
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
    if (GetAsyncKeyState(VK_UP)){
        movePlayerUp();
    }
    if (GetAsyncKeyState(VK_DOWN)){
        movePlayerDown();
    }
    printEnemy3();
    moveEnemy3();
    printEnemy2();
    moveEnemy2();
    moveEnemy(directionenemy1);
    directionenemy1=changeDirection(directionenemy1);
    Sleep(100);
}
}
void printEnvironment(){
	cout<<"#############################################################################################################"<<endl;
	cout<<"#                                                               #                                           #"<<endl;
	cout<<"#                                                               #         .                                 #"<<endl;
	cout<<"#                                                               #                                           #"<<endl;   
	cout<<"#                                                               #                                           #"<<endl; 
	cout<<"#             .                                       .         #                                           #"<<endl;
	cout<<"#                                                                                     .                     #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                                                                                           #"<<endl;
	cout<<"#                                                                   .                       .               #"<<endl;
	cout<<"#                                                                                                           #"<<endl;   
	cout<<"#                                .                                                                          #"<<endl;
	cout<<"###########################                                                                                 #"<<endl;
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
void printEnemy3(){

    gotoxy(ex3,ey3);
    cout<<"|||"<<endl;
    gotoxy(ex3,ey3+1);
    cout<<"|||"<<endl;
    gotoxy(ex3,ey3+2);
    cout<<" o "<<endl;
 
}
void eraseEnemy3(){
    gotoxy(ex3,ey3);
    cout<<"   "<<endl;
    gotoxy(ex3,ey3+1);
    cout<<"   "<<endl;
    gotoxy(ex3,ey3+2);
    cout<<"   "<<endl;
}
void moveEnemy3(){
    eraseEnemy3();
    ey3 = ey3 + 1;
    if (ey3 == 24){
    ey3 =15;
}
printEnemy3();
}
void printEnemy2(){

    gotoxy(ex2,ey2);
    cout<<"|||"<<endl;
    gotoxy(ex2,ey2+1);
    cout<<"|||"<<endl;
    gotoxy(ex2,ey2+2);
    cout<<" o "<<endl;
 
}
void eraseEnemy2(){
    gotoxy(ex2,ey2);
    cout<<"   "<<endl;
    gotoxy(ex2,ey2+1);
    cout<<"   "<<endl;
    gotoxy(ex2,ey2+2);
    cout<<"   "<<endl;
}
void moveEnemy2(){
    eraseEnemy2();

    for(int ex2 = 20; ex2 >= 40;ex2++){
        for(int ex2 = 40; ex2 <=20; ex2--);
    }
printEnemy2();
}

void printEnemy(){
    gotoxy(ex1,ey1);
    cout<<"|||"<<endl;
    gotoxy(ex1,ey1+1);
    cout<<"|||"<<endl;
    gotoxy(ex1,ey1+2);
    cout<<" o "<<endl;
}
void eraseEnemy(){
    gotoxy(ex1,ey1);
    cout<<"     "<<endl;
    gotoxy(ex1,ey1+1);
    cout<<"     "<<endl;
    gotoxy(ex1,ey1+2);
    cout<<"     "<<endl;

}
void moveEnemy(string directionenemy1){
    eraseEnemy();
    if(directionenemy1=="right"){
        ex1 = ex1 + 1;
    }
    if(directionenemy1=="left"){
        ex1 = ex1 - 1;
    }
    printEnemy();
}
string changeDirection(string directionenemy1){
    if(ex1>=30){
        directionenemy1="left";
    }
    if(ex1<=2){
        directionenemy1="right";
    }
    return directionenemy1;
}
void movePlayerUp(){   
    erasePlayer();
    py = py-1;
    printPlayer();
}
void movePlayerDown(){   
    erasePlayer();
    py = py+3;
    printPlayer();
}
void movePlayerRight(){   
    erasePlayer();
    px = px+1;
    printPlayer();
}
void movePlayerLeft(){
    erasePlayer();
    px = px-3;
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
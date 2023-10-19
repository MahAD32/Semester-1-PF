#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printEnemy();
void moveEnemy(string directrixEnemy1);
string changeDirection1(string directrixEnemy1);
string changeDirection3(string directrixEnemy3);
string changeDirection2(string directrixEnemy2);
void eraseEnemy();
void printEnemy3();
void moveEnemy3(string directrixEnemy3);
void eraseEnemy3();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2(string directrixEnemy2);
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
{  
    int num;
    int num1;
    cout<<"Press 3";
    cin>>num;
    if(num == 3){
        cout<<"        @@@@@@@@  @@@@@@@@@    @@@@@@@@@@@@  "<<endl;
        cout<<"        @         @       @              @   "<<endl;
        cout<<"        @         @       @            @     "<<endl;
        cout<<"        @         @       @          @       "<<endl;
        cout<<"        @@@@@@@@  @@@@@@@@@        @         "<<endl;
        cout<<"               @  @              @           "<<endl;
        cout<<"               @  @            @             "<<endl;
        cout<<"        @@@@@@@@  @            @@@@@@@@@@@   "<<endl;
      
   cout<<"Press 2";
   cin>>num1;
   if (num1 ==2){
    
    string directrixEnemy1= "right";
    string directrixEnemy2= "right";
    string directrixEnemy3= "up";
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
    moveEnemy3(directrixEnemy3);
    printEnemy2();
    moveEnemy2(directrixEnemy2);
    moveEnemy(directrixEnemy1);
    directrixEnemy2=changeDirection2(directrixEnemy2);
    directrixEnemy1=changeDirection1(directrixEnemy1);
    directrixEnemy3=changeDirection3(directrixEnemy3);
    Sleep(100);
    }
    }
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
void moveEnemy3(string directrixEnemy3){
    eraseEnemy3();
    if( directrixEnemy3== "up"){
        ey3 = ey3 - 1;
    }
    if( directrixEnemy3== "down"){
        ey3 = ey3 + 1;
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
void moveEnemy2(string directrixEnemy2){
    eraseEnemy2();
    if(directrixEnemy2=="right"){
        ex2 = ex2 + 1;
    }
    if(directrixEnemy2=="left"){
        ex2 = ex2 - 1;
    
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
void moveEnemy(string directrixEnemy1){
    eraseEnemy();
    if(directrixEnemy1=="right"){
        ex1 = ex1 + 1;
    }
    if(directrixEnemy1=="left"){
        ex1 = ex1 - 1;
    }
    printEnemy();
}
string changeDirection3(string directrixEnemy3){
    if(ey3 >=24){
        directrixEnemy3="up";
    }
    if(ey3 <=15){
        directrixEnemy3="down";
    }   
    return directrixEnemy3;
}
string changeDirection2(string directrixEnemy2){
    if(ex2 <=20){
        directrixEnemy2= "right";
    }
    if(ex2 ==26){
        directrixEnemy2= "left";
    }   
    return directrixEnemy2;
}
string changeDirection1(string directrixEnemy1){
    if(ex1>=30){
        directrixEnemy1="left";
    }
    if(ex1<=2){
        directrixEnemy1="right";
    }
    
     return directrixEnemy1;
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
#include<iostream>
using namespace std;
void patron ();
void administrator();
string book[100],author[100],accesso,genre[100],result[100];
void signIn(string username[],string password[],string access[]);
void signUp(string username[],string password[],string access[]);
void changeBooks();
string addNewBook1();
string addNewBook2();
string addNewBook3();
string addNewBook4();
string addNewBook5();
void alterAuthor();
void changePrices();
int num,price[100],number,ken;
main(){
system("cls");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<R"( __         __     ______     ______     ______     ______     __  __                                                                                  )"<<endl;
cout<<R"(/\ \       /\ \   /\  == \   /\  == \   /\  __ \   /\  == \   /\ \_\ \                                                                                 )"<<endl;
cout<<R"(\ \ \____  \ \ \  \ \  __<   \ \  __<   \ \  __ \  \ \  __<   \ \____ \                                                                                )"<<endl;
cout<<R"( \ \_____\  \ \_\  \ \_____\  \ \_\ \_\  \ \_\ \_\  \ \_\ \_\  \/\_____\                                                                               )"<<endl;
cout<<R"(  \/_____/   \/_/   \/_____/   \/_/ /_/   \/_/\/_/   \/_/ /_/   \/_____/                                                                               )"<<endl;
cout<<R"(                                                                                                                                                       )"<<endl;  
cout<<R"(                                        __  __     ______     __   __     _____     __         __     __   __     ______                               )"<<endl;
cout<<R"(                                       /\ \_\ \   /\  __ \   /\ "-.\ \   /\  __-.  /\ \       /\ \   /\ "-.\ \   /\  ___\                              )"<<endl;
cout<<R"(                                       \ \  __ \  \ \  __ \  \ \ \-.  \  \ \ \/\ \ \ \ \____  \ \ \  \ \ \-.  \  \ \ \__ \                             )"<<endl;
cout<<R"(                                        \ \_\ \_\  \ \_\ \_\  \ \_\\"\_\  \ \____-  \ \_____\  \ \_\  \ \_\\"\_\  \ \_____\                            )"<<endl;
cout<<R"(                                         \/_/\/_/   \/_/\/_/   \/_/ \/_/   \/____/   \/_____/   \/_/   \/_/ \/_/   \/_____/                            )"<<endl;
                                                                                                                                                                
string ok;
cout<<"PRESS OK TO CONTINUE TO THE MAIN HANDLE"<<endl;
cout<<"                                                                                    ";cin>>ok;
     string username[10],password[10],access[100];
     int idNumber;
int num;
string enter;
int p;
int e;
int rechoice;
if (ok == "ok")
{
system("cls");
int choicy;
cout<<endl;
cout<<endl;
cout<<endl; 
cout<<R"(    ,o888888o.    8 88888888o.   8 888888   8 88888888o.      8 888888   b.             8 8888888 888888888 8 888          .8.          8 8888           d888888o.    )"<<endl;                                         
cout<<R"(   8888     `88.  8 888    `88.  8 8888     8 888    `^888.   8 888      888o.          8       8 888       8 888         .888.         8 8888         .`8888:' `88.  )"<<endl;                                         
cout<<R"(,8 8888       `8. 8 888     `88  8 8888     8 888        `88. 8 888      Y88888o.       8       8 888       8 888        :88888.        8 8888         8.`8888.   Y8  )"<<endl;                                         
cout<<R"(88 8888           8 888     ,88  8 8888     8 888         `88 8 888      .`Y888888o.    8       8 888       8 888       . `88888.       8 8888         `8.`8888.      )"<<endl;                                         
cout<<R"(88 8888           8 888.   ,88'  8 88888888 8 888          88 8 88888888 8o. `Y888888o. 8       8 888       8 888      .8. `88888.      8 8888          `8.`8888.     )"<<endl;                                         
cout<<R"(88 8888           8 88888888P'   8 8888     8 888          88 8 888      8`Y8o. `Y88888o8       8 888       8 888     .8`8. `88888.     8 8888           `8.`8888.    )"<<endl;                                         
cout<<R"(88 8888           8 888`8b       8 8888     8 888         ,88 8 888      8   `Y8o. `Y8888       8 888       8 888    .8' `8. `88888.    8 8888            `8.`8888.   )"<<endl;                                         
cout<<R"(`8 8888       .8' 8 888 `8b.     8 8888     8 888        ,88' 8 888      8      `Y8o. `Y8       8 888       8 888   .8'   `8. `88888.   8 8888        8b   `8.`8888.  )"<<endl;                                        
cout<<R"(   8888     ,88'  8 888   `8b.   8 8888     8 888    ,o88P'   8 888      8         `Y8o.`       8 888       8 888  .888888888. `88888.  8 8888        `8b.  ;8.`8888  )"<<endl;                                         
cout<<R"(    `8888888P'    8 888     `88. 8 88888888 8 88888888P'      8 88888888 8            `Yo       8 888       8 888 .8'       `8. `88888. 888888888888o8 `Y88.8. ,88P'  )"<<endl;                         
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                 ";cout<<R"(               8 888888888o    .88888.         ,o888888o.    8 8888888888  )"<<endl;
cout<<"         1.   SIGN-UP ON LIBRARY HANDLING        ";cout<<R"(               8 8888    `88.   .88888.       8888     `88.  8 8888        )"<<endl;                             
cout<<"                                                 ";cout<<R"(               8 8888.   ,88'.8. `88888.   88 8888           8 88888888888 )"<<endl;
cout<<"                                                 ";cout<<R"(               8 888888888P'.8`8. `88888.  88 8888           8 8888        )"<<endl;
cout<<"         2.   SIGN-IN ON LIBRARY HANDLIN         ";cout<<R"(               8 8888      .8' `8. `88888. 88 8888   8888888 8 8888        )"<<endl;
cout<<"                                                 ";cout<<R"(               8 8888     .8'   `8. `88888.`8 8888       .8' 8 8888        )"<<endl;
cout<<"                                                 ";cout<<R"(               8 8888    .888888888. `88888.  8888     ,88'  8 8888        )"<<endl; 
cout<<"         3.   EXIT LIBRARY HANDLING              ";cout<<R"(               8 8888   .8'       `8. `88888.  `8888888P'    8 88888888888 )"<<endl;
cout<<"                                                 "<<endl;
cout<<endl;
cout<<"HINT: ENTER 7 FOR SIGN-UP , 9 FOR SIGN-IN  "<<endl;

cin >>choicy;

if (choicy == 9)
{
     cout<<"YOU NEED TO SIGN-UP FIRST ";
}
if( choicy == 7)
{
     signUp( username,password,access);
system("cls");

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
           

                                                                                                                                                                                                                             
                                                                                                                                                                                                                                
cout<<R"(    ,o888888o.    8 88888888o.   8 888888   8 88888888o.      8 888888   b.             8 8888888 888888888 8 888          .8.          8 8888           d888888o.    )"<<endl;                                         
cout<<R"(   8888     `88.  8 888    `88.  8 8888     8 888    `^888.   8 888      888o.          8       8 888       8 888         .888.         8 8888         .`8888:' `88.  )"<<endl;                                         
cout<<R"(,8 8888       `8. 8 888     `88  8 8888     8 888        `88. 8 888      Y88888o.       8       8 888       8 888        :88888.        8 8888         8.`8888.   Y8  )"<<endl;                                         
cout<<R"(88 8888           8 888     ,88  8 8888     8 888         `88 8 888      .`Y888888o.    8       8 888       8 888       . `88888.       8 8888         `8.`8888.      )"<<endl;                                         
cout<<R"(88 8888           8 888.   ,88'  8 88888888 8 888          88 8 88888888 8o. `Y888888o. 8       8 888       8 888      .8. `88888.      8 8888          `8.`8888.     )"<<endl;                                         
cout<<R"(88 8888           8 88888888P'   8 8888     8 888          88 8 888      8`Y8o. `Y88888o8       8 888       8 888     .8`8. `88888.     8 8888           `8.`8888.    )"<<endl;                                         
cout<<R"(88 8888           8 888`8b       8 8888     8 888         ,88 8 888      8   `Y8o. `Y8888       8 888       8 888    .8' `8. `88888.    8 8888            `8.`8888.   )"<<endl;                                         
cout<<R"(`8 8888       .8' 8 888 `8b.     8 8888     8 888        ,88' 8 888      8      `Y8o. `Y8       8 888       8 888   .8'   `8. `88888.   8 8888        8b   `8.`8888.  )"<<endl;                                        
cout<<R"(   8888     ,88'  8 888   `8b.   8 8888     8 888    ,o88P'   8 888      8         `Y8o.`       8 888       8 888  .888888888. `88888.  8 8888        `8b.  ;8.`8888  )"<<endl;                                         
cout<<R"(    `8888888P'    8 888     `88. 8 88888888 8 88888888P'      8 88888888 8            `Yo       8 888       8 888 .8'       `8. `88888. 888888888888o8 `Y88.8. ,88P'  )"<<endl;                                
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                 ";cout<<R"(               8 888888888o    .88888.         ,o888888o.    8 8888888888  )"<<endl;
cout<<"         1.   SIGN-UP ON LIBRARY HANDLING        ";cout<<R"(               8 8888    `88.   .88888.       8888     `88.  8 8888        )"<<endl;                             
cout<<"                                                 ";cout<<R"(               8 8888.   ,88'.8. `88888.   88 8888           8 88888888888 )"<<endl;
cout<<"                                                 ";cout<<R"(               8 888888888P'.8`8. `88888.  88 8888           8 8888        )"<<endl;
cout<<"         2.   SIGN-IN ON LIBRARY HANDLIN         ";cout<<R"(               8 8888      .8' `8. `88888. 88 8888   8888888 8 8888        )"<<endl;
cout<<"                                                 ";cout<<R"(               8 8888     .8'   `8. `88888.`8 8888       .8' 8 8888        )"<<endl;
cout<<"                                                 ";cout<<R"(               8 8888    .888888888. `88888.  8888     ,88'  8 8888        )"<<endl; 
cout<<"         3.   EXIT LIBRARY HANDLING              ";cout<<R"(               8 8888   .8'       `8. `88888.  `8888888P'    8 88888888888 )"<<endl;
cout<<"                                                 "<<endl;
cout<<"                                           "<<endl; 
cout<<endl;
cout<<"HINT: ENTER 7 FOR SIGN-UP , 0 FOR SIGN-IN  "<<endl;cout<<"                 ";cin >>rechoice;
if ( rechoice == 7 )
     cout<<" YOU HAVE ALREADY SIGNED UP "<<endl;
if ( rechoice == 0 )
signIn(username,password,access);
}
}
}
void changeBooks()
{
     int ec,gen;
     
cout<<" SELECT THE GENRE                                               ";cin>>gen;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                        how many books would you like to change"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                   enter choice"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                select from 0 to 9 "<<endl;
cout<<"                                                                            ";cin>>ec;
if (gen == 1){
for (int i = 0 ; i <+ ec ; i++)
{
     cin>>book[i];
}
}
if (gen == 2){
for (int i = 10 ; i <= 10 + ec ; i++)
{
     cin>>book[i];
}
}
if (gen == 3){
for (int i = 20 ; i <= 20 + ec ; i++)
{
     cin>>book[i];
}
}
if (gen == 4){
for (int i = 30 ; i <= 30 + ec ; i++)
{
     cin>>book[i];
}
}
if (gen == 5){
for (int i = 40 ; i < 40 + ec ; i++)
{
     cin>>book[i];
}
}
cout<<"RETURNING TO MAIN PAGE";
 administrator();

}
void patron (){
     system("cls");
int choiceGenre,index=0;
char choiceBook,h,k;
     char cb;
     system("cls");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                  YOU HAVE LOGGED IN AS STUDENT"<<endl;
cout<<endl;
cout<<endl;
cout<<R"(                          ::::    ::::      :::     ::::::::::: ::::    :::      ::::    ::::  :::::::::: ::::    ::: :::    :::  )"<<endl;
cout<<R"(                          +:+:+: :+:+:+   :+: :+:       :+:     :+:+:   :+:      +:+:+: :+:+:+ :+:        :+:+:   :+: :+:    :+:  )"<<endl;
cout<<R"(                          +:+ +:+:+ +:+  +:+   +:+      +:+     :+:+:+  +:+      +:+ +:+:+ +:+ +:+        :+:+:+  +:+ +:+    +:+  )"<<endl;
cout<<R"(                          +#+  +:+  +#+ +#++:++#++:     +#+     +#+ +:+ +#+      +#+  +:+  +#+ +#++:++#   +#+ +:+ +#+ +#+    +:+  )"<<endl;
cout<<R"(                          +#+       +#+ +#+     +#+     +#+     +#+  +#+#+#      +#+       +#+ +#+        +#+  +#+#+# +#+    +#+  )"<<endl;
cout<<R"(                          #+#       #+# #+#     #+#     #+#     #+#   #+#+#      #+#       #+# #+#        #+#   #+#+# #+#    #+#  )"<<endl;
cout<<R"(                          ###       ### ###     ### ########### ###    ####      ###       ### ########## ###    ####  ########   )"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"                                                                      Enter your choice: "<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                               Enter h to see the genre of books: "<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                         Enter y to directly see computer sciences section"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                                 ";cin>>h;              
    if (h == 'y'){ 
     system("cls");
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"YOU HAVE CHOSEN SCIENCE"<<endl;
                          cout<<"CHOOSE FROM THEFOLLOWING"<<endl;
                          book[0]= "A: COMPUTER SCIENCE";
                          author[0]=" by mark touche";
                          price[0] = 47;
                          cout<<book[0]<<author[0]<<"     price:"<<price[0]<<endl;
                          cout<<"CHOOSE"<<endl;
                          cin>>cb;
                    
                    if(cb == 'A')
                    {
                          system("cls");
                          price[0] = 47;
                          cout<<"YOU HAVE TO PAY $"<<endl;
                          cout<<price[0]<<endl; 
                    }
    }

                         if (     h == 'h'    )
                    {
                         system("cls");
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"                                                             CHOOSE FROM THE FOLLOWING GENRE OF BOOKS"<<endl;
                          genre[0]=" SCIENCE";
                          genre[1]=" SOCIAL";
                          genre[2]=" LANGUAGES";
                          genre[3]=" LITERATURE";
                          genre[4]=" FICTION";
                          for ( index = 0 ; index <5 ; index++ ) {
                          cout<<index<<":"<<genre[index]<<endl;
                          }
                          cout<<"                                                                             CHOOSE                                   "<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          
                          cout<<"                                                                               ";cin>>choiceGenre;
                    }
                         if(choiceGenre < 1)
                    {
                          system("cls");
                          cout<<"                                                                 YOU HAVE CHOSEN SCIENCE"<<endl;
                          cout<<endl;
                          cout<<"                                                                 CHOOSE FROM THE FOLLOWING"<<endl;
                          book[0]= "A: COMPUTER SCIENCE";
                          author[0]=" by mark touche";
                         price[0] = 47;
                          cout<<book[0]<<" author: "<<author[0]<<" price: "<<price[0]<<endl;
                          cout<<"CHOOSE"<<endl;
                          cin>>cb;
                    
                    if(cb== 'A')
                    {
                          system("cls");
                          price[0] = 47;
                          cout<<"YOU BOUGHT THE BOOK "<<book[0]<<endl;
                          cout<<price[0]<<endl; 
                    }
                    
               }
                    if(choiceGenre == 1)
                    {
                          system("cls");
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"                                                         YOU HAVE CHOSEN SOCIAL"<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"                                                        CHOOSE FROM THE FOLLOWING"<<endl;
                          cout<<endl;
                          cout<<endl;
                          
                          book[10]=" SOCIAL CULTURE";
                          author[10]=" by mark touche";
                          price[10] =87;
                          cout<<book[10]<<" author: "<<author[10]<<" price:"<<price[10]<<endl;
                          cin>>choiceBook;
                    if (choiceBook == 'E')
                     {
                         system("cls");
                         cout<<"YOU BOUGHT THE BOOK "<<book[10]<<endl;
                         cout<<price[10]<<endl;
                     }
                }
                    if(choiceGenre == 2)
                    {
                         system("cls");
                         cout<<"YOU HAVE CHOSEN LANGUAGES"<<endl; 
                         cout<<"CHOOSE FROM THE FOLLOWING"<<endl;
                         book[20]="F: ARABIC";
                         author[20]=" by mark touche";
                         price[20]=98;
                         cout<<book[20]<<" author:"<<author[20]<<" price:"<<price[20]<<endl;
                         cin>>choiceBook;
                    if(choiceBook == 'F')
                    {
                         system("cls");
                         cout<<"YOU BOUGHT THE BOOK "<<book[20]<<endl;
                         cout<<price[20]<<endl;
                    } 
                    
               }
                    if(choiceGenre == 3)
                    { 
                            system("cls");
                           cout<<"YOU HAVE CHOSEN LITRATURE"<<endl;
                           cout<<"CHOOSE FROM THE FOLLOWING"<<endl;
                           book[30]="J: URDU HISTORY";
                           author[30]=" by mark touche";
                           price[30] =60;
                           cout<<book[30]<<" author:"<<author[30]<<" price:"<<price[30]<<endl;
                           cin>>choiceBook;
                    if(choiceBook == 'J')
                    {
                          system("cls");
                          cout<<"YOU BOUGHT THE BOOK "<<book[30]<<endl;
                          cout<<price[30]<<endl;
                    }
                   
               }
                    else if(choiceGenre == 4)
                    {
                          cout<<"YOU HAVE CHOSEN FICTION"<<endl;
                          cout<<"CHOOSE FROM THE FOLLOWING"<<endl;
                          book[40]="L: HARRY POTTER";
                          author[40]=" by mark touche";
                          price [40]=50;
                          cout<<book[40]<<" auhor:"<<author[40]<<" price:"<<price[40]<<endl;
                          cin>>choiceBook; 
                    
                    if(choiceBook == '1')
                    {
                          system("cls");
                          cout<<"YOU BOUGHT THE BOOK "<<book[40]<<endl;
                          cout<<price[40]<<endl;
                    }
          }
} 
void administrator(){
     system("cls");
     int y;
    cout<<"                                                       YOU HAVE LOGGED IN AS ADMINISTRATOR         "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                             ENTER 1 TO ALTER BOOKS                "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                 YOU CAN NOW ALTER THE PRICE OF BOOKS BY TYPING 2  "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                YOU CAN ALTER THE AUTHORS OF THE BOOKS BY TYPING 3 "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                      YOU CAN ADD A NEW BOOK BY TYPING 4           "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout <<"                                                    ENTER 5 TO RETURN TO GO TO PATRON PAGE        "<<endl;
    cin>>y;
    if ( y == 1)
    changeBooks();
    if (y == 2)
    changePrices();
    if (y == 5)
    patron();
    if (y == 3)
    alterAuthor();
    if (y == 4)
    {
     cout<<"                                                  CHOOSE BETWEEN THE GENRE NUMBERS BETWEEN 1 TO 5          "<<endl;
     int c;
     cout<<"                                                                      ";cin >> c;
     if ( c == 1)
     string addNewBook1();
      if ( c == 2)
     string addNewBook2();
      if ( c == 3)
     string addNewBook3();
      if ( c == 4)
     string addNewBook4();
      if ( c == 5)
     string addNewBook5();
    }
}
void signIn( string username[],string password[],string access[])
{
     string usernameo,passwordo,accesso;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                       ___________________________________________________________________________________________"<<endl;             
cout<<endl;
cout<<endl;
cout<<"                                  ENTER USERNAME HERE:"<<endl;
cout<<"                                 _________________________________________________________ "<<endl;
cout<<endl;
cout<<"                                ";cin>>usernameo;
cout<<"                                 _________________________________________________________"<<endl;
cout<<"                                  ENTER PASSWORD HERE:"<<endl;
cout<<"                                 _________________________________________________________"<<endl;
cout<<endl;
cout<<"                                ";cin>>passwordo;
cout<<"                                 _________________________________________________________"<<endl;
cout<<endl;
cout<<"                                 ENTER USER TYPE: "<<endl;
cout<<endl;
cout<<"                                ";cin>>accesso;
cout<<"                      ____________________________________________________________________________________________"<<endl;             
cout<<endl;
cout<<endl;
cout<<endl;
if ( usernameo == username[10] && passwordo == password[10] && accesso == access[100] )
{
     if ( accesso == "admin" )
     {
          administrator();
     }
     if ( accesso == "patron" )
     {
          patron();
     }
}
}
void signUp( string username[],string password[],string access[])
{

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                       ___________________________________________________________________________________________"<<endl;             
cout<<endl;
cout<<endl;
cout<<"                                  ENTER USERNAME HERE:"<<endl;
cout<<"                                 _________________________________________________________ "<<endl;
cout<<endl;
cout<<"                                ";cin>>username[10];
cout<<"                                 _________________________________________________________"<<endl;
cout<<"                                  ENTER PASSWORD HERE:"<<endl;
cout<<"                                 _________________________________________________________"<<endl;
cout<<endl;
cout<<"                                ";cin>>password[10];
cout<<"                                 _________________________________________________________"<<endl;
cout<<endl;
cout<<"                                 ENTER USER TYPE: "<<endl;
cout<<endl;
cout<<"                                ";cin>>access[100];
cout<<"                      ____________________________________________________________________________________________"<<endl;             
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                 SIGNED IN SUCCESSFULLY!                              "<<endl;
cout<<endl;
}
void changePrices(){
       int ec,gen;
     
cout<<" SELECT THE GENRE                                               ";cin>>gen;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                        how many prices would you like to change"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                   enter choice"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                select from 0 to 9 "<<endl;
cout<<"                                                                            ";cin>>ec;
if (gen == 1){
for (int i = 0 ; i <+ ec ; i++)
{
     cin>>price[i];
}
}
if (gen == 2){
for (int i = 10 ; i <= 10 + ec ; i++)
{
     cin>>price[i];
}
}
if (gen == 3){
for (int i = 20 ; i <= 20 + ec ; i++)
{
     cin>>price[i];
}
}
if (gen == 4){
for (int i = 30 ; i <= 30 + ec ; i++)
{
     cin>>price[i];
}
}
if (gen == 5){
for (int i = 40 ; i < 40 + ec ; i++)
{
     cin>>price[i];
}
}
     cout<<"RETURNING TO MAIN PAGE";
 administrator();
}
string addNewBook1()
{int ec;
cout<<"                                                           CHOOSE NUMBER OF BOOKS BETWEEN 1 AND 9 "<<endl;
cin>>ec;
for (int i = 1 ; i <+ ec ; i++)
{
     cout<<"ADD BOOK: ";cin>>book[i];
     cout<<"ADD AUTHOR: ";cin>>author[i];
     cout<<"ADD PRICE: ";cin>>price[i];
     cout<<book[i]<<" AUTHOR: "<<author[i]<<" PRICE: "<<price[i];
}
}
string addNewBook2(){
    int ec;
cout<<"                                                           CHOOSE NUMBER OF BOOKS BETWEEN 1 AND 9 "<<endl;
cin>>ec;
     for (int i = 11 ; i <= 11 + ec ; i++)
{
     cout<<"ADD BOOK: ";cin>>book[i];
     cout<<"ADD AUTHOR: ";cin>>author[i];
     cout<<"ADD PRICE: ";cin>>price[i];
     cout<<book[i]<<" AUTHOR: "<<author[i]<<" PRICE: "<<price[i];

}}
string addNewBook3(){
   int ec;
cout<<"                                                           CHOOSE NUMBER OF BOOKS BETWEEN 1 AND 9 "<<endl;
cin>>ec;
     for (int i = 21 ; i <= 21 + ec ; i++)
{
     cout<<"ADD BOOK: ";cin>>book[i];
     cout<<"ADD AUTHOR: ";cin>>author[i];
     cout<<"ADD PRICE: ";cin>>price[i];
     cout<<book[i]<<" AUTHOR: "<<author[i]<<" PRICE: "<<price[i];

}}
string addNewBook4(){
    int ec;
cout<<"                                                           CHOOSE NUMBER OF BOOKS BETWEEN 1 AND 9 "<<endl;
cin>>ec;
     for (int i = 31 ; i <= 31 + ec ; i++)
{
    cout<<"ADD BOOK: ";cin>>book[i];
     cout<<"ADD AUTHOR: ";cin>>author[i];
     cout<<"ADD PRICE: ";cin>>price[i];
     cout<<book[i]<<" AUTHOR: "<<author[i]<<" PRICE: "<<price[i];

}}
string addNewBook5(){
    int ec;
cout<<"                                                           CHOOSE NUMBER OF BOOKS BETWEEN 1 AND 9 "<<endl;
cin>>ec;
     for (int i = 41 ; i < 41 + ec ; i++)
{
      cout<<"ADD BOOK: ";cin>>book[i];
     cout<<"ADD AUTHOR: ";cin>>author[i];
     cout<<"ADD PRICE: ";cin>>price[i];
     cout<<book[i]<<" AUTHOR: "<<author[i]<<" PRICE: "<<price[i];

}}
void alterAuthor()
{
   int gen,ec;
     
cout<<" SELECT THE GENRE                                               ";cin>>gen;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                        how many authors would you like to change"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                      enter choice"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                select from 0 to 9 "<<endl;
cout<<"                                                                            ";cin>>ec;
if (gen == 1){
for (int i = 0 ; i <+ ec ; i++)
{
     cin>>author[i];
}
}
if (gen == 2){
for (int i = 10 ; i <= 10 + ec ; i++)
{
     cin>>author[i];
}
}
if (gen == 3){
for (int i = 20 ; i <= 20 + ec ; i++)
{
     cin>>author[i];
}
}
if (gen == 4){
for (int i = 30 ; i <= 30 + ec ; i++)
{
     cin>>author[i];
}
}
if (gen == 5){
for (int i = 40 ; i < 40 + ec ; i++)
{
     cin>>author[i];
}
}
     cout<<"RETURNING TO MAIN PAGE";
 administrator();
}
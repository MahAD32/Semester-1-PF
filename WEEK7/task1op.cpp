#include<iostream>
using namespace std;
int printTable();
int num;
main(){

cout<<"Enter a number: ";
cin>>num;
for(int i = 1; i<=10;i++){

printTable();
return 0;
}



}
int printTable(){
    int product ;
for (int i = 1; i<=10 ; i ++){
product = num*i;
cout<<num<<" X "<<i<<" = "<<product<<endl;
}
}
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
string checkPointPosition(int poh,int pox,int poy);
main(){
    string position;
    int poh;
    int pox,poy;
cout<<"Enter height : ";
cin>>poh;
cout<<"Enter x coordinate: ";
cin>>pox;
cout<<"Enter y coordinate: ";
cin>>poy;
cout<<checkPointPosition(poh,pox,poy);

}
string checkPointPosition(int poh,int pox,int poy){
    string position;
if (pox > 0 && pox <= 2){
if (poy > 0 && poy< 2 && pox != poy){
    position = "Inside";}}
    if (pox > 0 && pox < 2){
    if (poy >2 && poy <10 && pox != poy){
        position = "Outside";
    }}
    if( pox == 0 ){
  if (poy == 0 || poy == 2){
    position = "Border";
  }
  if (poy>2){
    position = "Outside";
  }
  }
  if (pox == 2){
  if (poy > 2 ){
    position ="Border";}
   if (poy == 0 || poy == 2){
    position = "Border";
  }
    }
  
  if(pox> 2 && pox <4){
    if(poy>0 && poy < 8){
        position = "Inside";
    }}
    if (pox == 4){
        if(poy >=2 && poy<=8){
            position = "Border";
        }}
        if(pox >=4 && pox <6){
            if(poy > 0 && poy < 2){
                position = "Inside";
            }
        }
if (pox >=6){
if(poy >=0 && poy<= 2){
  position =  "Border";

}
}
if(pox >4){
    if (poy > 2){
        position = "Outside";
    }
} 
if(pox >= 3 && pox <=4){
    if(poy > 8){
        position = "Outside";
    }

}
return position;
}


  











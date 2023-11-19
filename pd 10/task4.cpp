#include<iostream>

using namespace std;

main()
    {
     int n;   
     int i = 0;
     int boxes[100];
     cout << "Enter the number of boxes: ";
     cin>>n;
     cout<<"Enter the dimensions of boxes (length, width, height): "<<endl;
     for ( i ; i < (3*n) ; i++ )
       cin>>boxes[i];
     int sum = 1,sut = 0;
     int k = 2;
     for ( int l = 0 ; l < (3*n) ; l++ )
     {
     sum = sum*boxes[l];
     
     if ( (l+1)%3 == 0 )
      {
       sut = sut + sum;
       sum = 1  ; 
      }
       }
       cout<<"Total volume of all boxes: "<< sut;
    }
    

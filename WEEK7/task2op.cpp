#include<iostream>
using namespace std;


    int num;
    int wei = 1;
    int sum = 0;
    int current = 0;
    main(){

  cout<<"Enter the length of the Fibonacci series: ";
  cin>>num;
  for( int i  = 0; i <+ num ; i++){

 
    if (i == 0 ){
        current = i;
        cout<<current;
    }
    if (i == 1 ){
        current = i;
        cout<<", "<<current;
    } 
    if(i >= 2) 
    {
    current = wei + sum;
    sum = wei;
    wei = current;
    cout<<", "<<current;
  }  
}
return 0;
}
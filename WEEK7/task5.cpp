#include<iostream>
using namespace std;
int addSum();
main(){
  int total;
  total = addSum();
  cout<<"Sum: "<<total<<endl;



}
int addSum(){
int sum = 0;
for(int i = 1; i<=100;i++){

    sum = sum + i;

}
return sum;
}
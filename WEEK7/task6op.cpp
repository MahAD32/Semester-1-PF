#include<iostream>
using namespace std;  
int firstNumber,secondNumber,x,gcd;
main(){
    int cm;
    int firstNumber,secondNumber,x,gcd;
    cout<<"Enter the first number: ";
    cin>>firstNumber;
    cout<<"Enter the second number: ";
cin>>secondNumber;
x=firstNumber*secondNumber;
for (int i = 1;i <=firstNumber&&i<=secondNumber;i++){
    if(firstNumber%i== 0 && secondNumber%i==0){
        gcd = i;
    }
}
cout<<"GCD: "<<gcd<<endl;

 x = (firstNumber > secondNumber)? firstNumber : secondNumber;
	
	while(1)
	{
		if(x % firstNumber == 0 &&x % secondNumber == 0)
		{
			cout << "LCM: "<<x;
			break;
		} 
		++x;
	}
}

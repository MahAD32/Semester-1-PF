#include <iostream>
#include <cmath>
using namespace std;
string tax(string name, float price ,float finalPrice);
main()
{
float finalPrice;
float price;
string name;
string result = tax(name,price,finalPrice);
cout<<result;
}
string tax(string name,float price,float finalPrice)
{
 cout<<"Enter the vehicle type code (M, E, S, V, T): ";
 cin>>name;
 cout<<"Enter the price of the vehicle: $";
 cin>>price;
if (name == "M")
{
   finalPrice =(price+(price*0.06);
  return "The final price of the vehicle of return type M after adding the tax is: $" + to_string(finalPrice) +".00.";
}
if (name == "V")
{
   finalPrice =(price+(price*0.12));
  return "The final price of the vehicle of return type V after adding the tax is: $" + to_string(finalPrice) +".00.";
}
if (name == "E")
{
   finalPrice =(price+(price*0.08));
  return "The final price of the vehicle of return type E after adding the tax is: $" + to_string(finalPrice) +".00.";
}
if (name == "S")
{
   finalPrice =(price+(price*0.10);
  return "The final price of the vehicle of return type S after adding the tax is: $" + to_string(finalPrice) +".00.";
}
if (name == "T")
{
   finalPrice =(price+(price*0.15);
  return "The final price of the vehicle of return type T after adding the tax is: $" + to_string(finalPrice) +".00.";
}
} 
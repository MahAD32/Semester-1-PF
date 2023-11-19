#include<iostream>

using namespace std;

int value(int side ,int arr[]);

main()
{
int side;
cout<<"Enter the side of array: ";
cin>>side;
int arr[side];
cout<<"Enter the elements of array: "<<endl;
for ( int i  = 0 ; i < side ; i++ )

 cin>>arr[i];

cout<<"Special value: "<<value(side,arr);
}
int value(int side ,int arr[])
{
    int count = 0;
 for (int x = side; x >= 0; x--)
    {
        for (int i = 0; i < side; i++)
{
if (arr[i] >= x)
count++;
if (count == x)
return x;
}
    }
return -1;
}
#include<iostream>

using namespace std;

main()
{
    int side,left=0,right=0;
    cout<<"Enter the length of array: ";
    cin>>side;
    string arr[side];
    cout<<"Enter the elements of array (\"left\" or \"right\" )"<<endl;
    for ( int i = 0 ; i < side ; i++ )

    cin>>arr[i];
    
    cout<<"Number of full rotations: ";
for ( int i = 0 ; i < side ; i++ )
{
    if (arr[i]=="right")
    right++;
    if (arr[i] == "left")
    left++;
}
int count = (left/4) + (right/4);
cout<<count;
    
}
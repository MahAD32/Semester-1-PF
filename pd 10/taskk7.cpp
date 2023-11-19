#include<iostream>

using namespace std;

main()
{
    int length , min,num;
    bool result = false,kudos;
    cout<<"Enter the length of array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the lenth of the array: "<<endl;
    for ( int i = 0 ; i < length ; i++ )
        cin>>arr[i];
    cout<<"Can be arranged: ";
     min=arr[0];
    for ( int i = 1 ; i < length ; i++ )
    {
        if ( arr[i] < min )
        {
            min == arr[i];
        } 
    }
    for ( int i = 0 ; i < length ; i++ )
       {
    if (num == arr[i])
    result = true;
       }
       for(int i = min ; i < min+length ; i++ )
       {
        if ( !result)
        {
            kudos = false;
        }
       }
       kudos = true;
       cout<<kudos;
}
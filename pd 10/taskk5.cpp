#include<iostream>

using namespace std;

main()
{
    string sentence,arr[20],space = "";;
    int idx = 0;
    cout<<"Enter a string: ";
    getline(cin,sentence);
    cout<<"Reversed string: ";
for ( int i = 0 ; i < sentence.length() ; i++ )
{
    if (sentence[i] != ' ')
    {
        space += sentence[i];
    }
    else 
    {
        arr[idx]=space;
        idx++;
        space ="";
    }
    arr[idx] = space;
}
for ( int i = idx ; i >= 0 ; i--)
{
    cout<<arr[i]<<" ";
}
}
#include <iostream>

using namespace std;

     main() {

    int n,min=0;
    char alph;

    cout << "Enter how many words you want to enter: ";
    cin>>n;
    string words[n]; too
    for ( int i = 0 ; i < n ; i++ )
    {
    cout<<"Enter word "<<i + 1<<": ";
    cin>>words[i];
    }
    cout<<"Enter the character that you want to count: ";
    cin>>alph;
        
    for (int i = 0; i < n; ++i) 
    {
    string current =words[i];
    for( int j = 0 ; j < words[i].length() ; j++ )
    {
    if (current[j] == alph)
        min += 1;
    }
    }
    cout<<alph<<" shows up "<<min<<" times in the data.";
}

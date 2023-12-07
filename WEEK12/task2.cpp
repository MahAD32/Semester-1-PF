#include<iostream>

using namespace std;

main(){

    int element[3][3],space = 0,sum;
    cout<<"Enter the elements of the matrix: "<<endl;
    for ( int i = 0 ; i < 3 ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
        {
            cout<<"Enter element at position ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>element[i][j];
           
        }

    }
    cout<<"The matrix you entered is: "<<endl;
    for ( int i = 0 ; i < 3 ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
        {
            
            cout<<element[i][j]<<"\t";
           
        }
  cout<<endl;
    }

if ( element[0][0] == 1 && element[1][1] == 1 && element[2][2] == 1)
{
    if(element[0][1] == 0 && element[0][2] == 0 && element[1][0] == 0 && element[1][2] == 0 && element[2][0] == 0 && element[2][1] == 0)
    {
        cout<<"The entered matrix is an identity matrix.";
    }
}if ( element[0][0] != 1 || element[1][1] != 1 || element[2][2] != 1)
{
    
    
        cout<<"The entered matrix is NOT an identity matrix.";
    
}
if ( element[0][0] == 1 && element[1][1] == 1 && element[2][2] == 1)
{
    if(element[0][1] != 0 || element[0][2] != 0 || element[1][0] != 0 || element[1][2] != 0 || element[2][0] != 0 || element[2][1] != 0)
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}
}
#include<iostream>

using namespace std;

main(){
    int rowSize ;
    cout<<"Enter row size: ";
    cin>>rowSize;
    int element[rowSize][3],space = 0,sum;
    cout<<"Enter the elements of the matrix: "<<endl;
    for ( int i = 0 ; i < rowSize ; i++ )
    {
        for ( int j = 0 ; j < 3 ; j++)
        {
            cout<<"Enter element at position ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>element[i][j];
            sum = space + element[i][j];
            space = sum;
        }

    }
    cout<<"The sum of elements in the matrix is: "<<sum;
}
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
using namespace std;


//Spiral Order Traversal
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns respectively";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;
    while(row_start<=row_end)
    {
        //for row start
        for(int col = col_start; col<= col_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        
        // for col end 
        for(int row = row_start; row<= row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        //for last row
        for(int col = col_end; col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for first column

        for(int row = row_end ; row>= row_start ; row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;



    }
}
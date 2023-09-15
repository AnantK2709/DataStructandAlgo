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
        cout<<arr[row_start][col_start];
        col_start++;
        if(col_start==col_end)
        {
            row_start++;
            col_start=0;
        }
    }
}
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
    int temp;
    for(int i = 0; i < n ;i++)
    {
        for(int j =i ; j<m;j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr [j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
    }
}

/* Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. */

/*What we are doing is starting from top rightmost element then compare with the key 
if the element is smaller then we go to the left 
if the element is bigger then we go to down */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
using namespace std;


//Spiral Order Traversal
void MatrixSearch(int **arr , int key, int row, int col)
{
    int start = arr[0][col-1];
    if(key<start)
    {
        
    }
}
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns respectively";
    cin>>n>>m;
    int **arr;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the key to be found";
    int key;
    cin>>key;
    MatrixSearch(arr,key,n,m);
}
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
using namespace std;

// Spiral Order Traversal
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> n >> m;
    int arr1[n][m];
    int arr2[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int arr3[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j]=0;
            for (int k = 0; k < m; k++)
            {
                arr3[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }

}

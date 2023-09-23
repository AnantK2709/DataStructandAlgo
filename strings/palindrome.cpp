// Checking if a string is palindrome or not

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Given String is palindrome" << endl;
    }
    else
    {
        cout << "Given string not a palindrome" << endl;
    }
}
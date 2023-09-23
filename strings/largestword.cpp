// We have to find the largest word in sentence

// #include <iostream>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     cin.ignore();
//     char arr[n];
//     cin.getline(arr, 500);
//     cin.ignore();
//     cout<<arr<<endl;
//     int i = 0;
//     int len = 0;
//     int curlen = 0;
//     int end;
//     while (1)
//     {
//         if (arr[i] == ' '|| arr[i]=='\0')
//         {
//             if (len < curlen)
//             {
//                 end = i;
//                 len = curlen;
//             }
//             curlen = 0;
//         }
//         else if(arr[i]=='\0')
//             break;
//         else
//         {
//             curlen++;
//         }
//         i++;
//     }
//     for (int i = end - len; i < end; i++)
//     {
//         cout << arr[i];
//     }
//     cout << endl;
// }

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    char arr[500];
    cin.getline(arr, 500);
    
    int i = 0;
    int len = 0;
    int curlen = 0;
    int end = 0; // Initialize 'end' to zero
    
    for (; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ')
        {
            if (len < curlen)
            {
                end = i;
                len = curlen;
            }
            curlen = 0;
        }
        else
        {
            curlen++;
        }
    }
    // Check if the last word is the longest
    if (len < curlen)
    {
        end = i;
        len = curlen;
    }
    cout<<"Longest word in sentence is of : "<<len<<" and is: ";
    for (int j = end - len; j < end; j++)
    {
        cout << arr[j];
    }
    cout << endl;
}

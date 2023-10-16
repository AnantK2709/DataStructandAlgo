#include <bits/stdc++.h>
using namespace std;
//IMPLEMENTATION OF MERGESORT IN A SINGLE ARRAY ITSELF
// void Merge(int arr[], int n, int m)
// {
//     int temp;
//     if (m - n <= 0)
//     {
//         return;
//     }
//     int p1 = n;
//     int mid = (n + m) / 2;
//     int p2 = mid + 1;
//     while (p1 != (mid + 1) && p2 != m)
//     {
//         if (arr[p1] < arr[p2])
//         {
//             p1++;
//         }
//         else if (arr[p1] > arr[p2])
//         {
//             temp = arr[p2];
//             for (int i = p1; i < p2; i++)
//             {
//                 arr[i + 1] = arr[i];
//             }
//             arr[p1] = temp;
//             p2++;
//         }
//         else
//         {
//             temp = arr[p2];
//             for (int i = p1 + 1; i < p2; i++)
//             {
//                 arr[i + 1] = arr[i];
//             }
//             arr[p1+1] = temp;
//             p2++;
//             p1++;
//         }
//     }
// }

// void MergeSort(int arr[], int n, int m)
// {
//     int mid = (n + m) / 2;
//     if (m - n <= 0)
//     {
//         return;
//     }
//     else if (m - n > 1)
//     {
//         MergeSort(arr, n, mid);
//         MergeSort(arr, mid + 1, m);
//     }
//     Merge(arr, n, m);
// }

void Merge(int arr[] , int n , int m)
{
    if(m-n<=0)
        return;
    int mid = (m+n)/2;
    int p1 = n;
    int p2 = mid+1;
    while(p1<=mid && p2<=m)
    {
        if(arr[p1]>arr[p2])
        {
            int temp =arr[p2++];
            for(int i=++mid;i>p1;i--)
            {
                arr[i] = arr[i-1];
            }
            arr[p1] = temp;
            p1++;
        }
        else if(arr[p1]<arr[p2])
        {
            p1++;
        }
        else 
        {   
            if(p1==mid && p2 == m)
                break;
            int temp = arr[p2++];
            for(int i=++mid;i<p1;i--)
            {
                arr[i] = arr[i-1];
            }
            arr[p1++] = temp;
        }
    }
}
void  MergeSort(int arr[], int n , int m)
{
    if(m-n<=0)
        return;
    if(m-n>=1)
    {
        int mid = (m+n)/2;
        MergeSort(arr, n , mid);
        MergeSort(arr , mid+1, m );
    }
    Merge(arr,n,m);
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorting using MergeSort";
    MergeSort(arr, 0, n - 1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}



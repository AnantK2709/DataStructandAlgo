#include <bits/stdc++.h>
using namespace std;

// int partition(int arr[], int low, int high)
// {
//     int i, last_small, pivot;
//     int mid = (low + high) / 2;
//     swap(arr[low], arr[mid]);
//     pivot = arr[low];
//     last_small = low;
//     for (i = low + 1; i <= high; i++)
//     {
//         if (arr[i] < pivot)
//             swap(++last_small, i);
//     }
//     swap(arr[low], arr[last_small]);
//     return last_small;
// }
// void QuickSort(int arr[], int n, int m)
// {
//     int pivot_pos;
//     if (n >= m)
//         return;
//     pivot_pos = partition(arr, n, m);
//     QuickSort(arr, n, pivot_pos - 1);
//     QuickSort(arr, pivot_pos + 1, m);
// }
// int main()
// {
//     int n;
//     int arr[] = {9,3,4,2,1,8};
//     n = 6;
//     cout << "Sorting using MergeSort"<<endl;
//     QuickSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++) 
//     {
//         cout << arr[i] << " ";
//     }
// }

// int partition(int arr[], int start, int end)
// {
 
//     int pivot = arr[start];
 
//     int count = 0;
//     for (int i = start + 1; i <= end; i++) {
//         if (arr[i] <= pivot)
//             count++;
//     }
 
//     // Giving pivot element its correct position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);
 
//     // Sorting left and right parts of the pivot element
//     int i = start, j = end;
 
//     while (i < pivotIndex && j > pivotIndex) {
 
//         while (arr[i] <= pivot) {
//             i++;
//         }
 
//         while (arr[j] > pivot) {
//             j--;
//         }
 
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }
 
//     return pivotIndex;
// }
 
// void quickSort(int arr[], int start, int end)
// {
 
//     // base case
//     if (start >= end)
//         return;
 
//     // partitioning the array
//     int p = partition(arr, start, end);
 
//     // Sorting the left part
//     quickSort(arr, start, p - 1);
 
//     // Sorting the right part
//     quickSort(arr, p + 1, end);
// }
 
// int main()
// {
 
//     int arr[] = { 9, 3, 4, 2, 1, 8 };
//     int n = 6;
 
//     quickSort(arr, 0, n - 1);
 
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
 
//     return 0;
// }
int partition(int arr[],int low,int high)
{
    int mid =(low+high)/2;
    int last_small;
    int pivot = arr[mid];
    swap(arr[low],arr[mid]);
    last_small = low;
    for(int i = low+1;i<=high;i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[++last_small],arr[i]);
        }
    }
    swap(arr[low],arr[last_small]);
    return last_small;
}
void QuickSort(int arr[],int start , int end)
{
    if(start>=end)
        return;
    int pivot_pos = partition(arr,start,end);
    QuickSort(arr,start,pivot_pos-1);
    QuickSort(arr,pivot_pos+1,end);
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
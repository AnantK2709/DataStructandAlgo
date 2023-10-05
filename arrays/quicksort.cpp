#include <bits/stdc++.h>
using namespace std;

// void swap(int x, int y)
// {
//     int temp = x;
//     y = temp;
//     temp = x;
// }
// int partition(int arr[], int low, int high)
// {
//     int i, last_small, pivot;
//     int mid = (low + high) / 2;
//     swap(low, mid);
//     pivot = arr[low];
//     last_small = low;
//     for (i = low + 1; i <= high; i++)
//     {
//         if (arr[i] < pivot)
//             swap(++last_small, i);
//     }
//     swap(low, last_small);
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
//     int arr[n];
//     cout << n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Sorting using MergeSort";
//     QuickSort(arr, 0, n - 1);
// }

int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}
 
int main()
{
 
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
 
    quickSort(arr, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
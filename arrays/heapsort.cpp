#include <bits/stdc++.h>>
using namespace std;

void Heapifying(int arr[], int n, int i)
{
    int largest = i; // initialise largest as root - default
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    //if left is greater than root
    if(arr[l]>arr[largest] && l<n) // the left child should exist, otherwise it might take a garbage value
    {
        largest = l;
    }
    if(arr[r]>arr[largest] && r<n)
    {
        largest = r;            
    }
}

void HeapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) // heapify onlt the nodes which are not leaf nodes
    {                                    // therfore it starts with n/2-1 ->nodes with childs
        Heapifying(arr, n, i);
    }
    for (int i = n; i >= 1; i--)
    {
        int curMax = getMax(H);
        deleteMax(H);
        arr[i] = currMax;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int arr[n];
    Heapsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
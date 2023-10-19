#include <bits/stdc++.h>
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
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        //Recursively heapify the affected subtree
        Heapifying(arr,n,largest);
    }
}

void HeapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) // heapify onlt the nodes which are not leaf nodes
    {                                    // therfore it starts with n/2-1 ->nodes with childs
        Heapifying(arr, n, i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        Heapifying(arr,i,0);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    HeapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
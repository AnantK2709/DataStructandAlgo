#include <bits/stdc++.h>>
using namespace std;




void HeapSort(int arr[], int n)
{
    ConstructHeap(arr,);
    for(int i=n;i>=1;i--)
    {
        int curMax = getMax(H);
        deleteMax(H);
        arr[i] = currMax;    
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    Heapsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
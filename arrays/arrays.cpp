#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
using namespace std;

// Binary Search
// int binsearch(int arr[], int size, int key)
// {
//     int low = 0;
//     int high = size;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > key)
//         {
//             high = mid-1;

//         }
//         else if (arr[mid] < key)
//         {
//             low = mid+1;
//         }
//         else if (arr[mid] == key)
//         {
//             return mid;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int index = binsearch(arr, n, key);
//     if (index != -1)
//     {
//         cout << "The position is " << index<<endl;
//     }
//     else
//     {
//         cout << "Not found"<<endl;
//     }
// }

// Selection Sorting -  Find the minimum then swap it with the first element and so on....
// void SelectionSort(int arr[], int size)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < size-1; i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     SelectionSort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     cout<<endl;
// }

// Bubble Sort - Swap adjacent elements, ith iteration - (n-i) times
//  void BubbleSort(int arr[],int size)
//  {
//      int counter=1;
//      while(counter<size)
//      {
//          for(int i=0;i<size-counter;i++)
//          {
//              if(arr[i]>arr[i+1])
//              {
//                  int temp = arr[i];
//                  arr[i] = arr[i+1];
//                  arr[i+1] = temp;
//              }
//          }
//          counter++;
//      }
//  }
//  int main()
//  {
//      int n;
//      cout << "Enter the size of the array ";
//      cin >> n;
//      int arr[n];
//      for (int i = 0; i < n; i++)
//      {
//          cin >> arr[i];
//      }
//      BubbleSort(arr, n);
//      for (int i = 0; i < n; i++)
//      {
//          cout << arr[i];
//      }
//      cout<<endl;
//  }

// Insertion Sort
//  void InsertionSort(int arr[], int size)
//  {
//      for(int i=1;i<size;i++)
//      {
//          int current = arr[i];
//          int j=i-1;
//          while(arr[j]>current && j>=0)
//          {
//              arr[j+1]= arr[j];
//              j--;
//          }
//          arr[j+1]=current;
//      }
//  }
//  int main()
//  {
//      int n;
//      cout << "Enter the size of the array ";
//      cin >> n;
//      int arr[n];
//      for (int i = 0; i < n; i++)
//      {
//          cin >> arr[i];
//      }
//      InsertionSort(arr, n);
//      for (int i = 0; i < n; i++)
//      {
//          cout << arr[i];
//      }
//      cout<<endl;
//  }

// Max till I
//  int main()
//  {
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++)
//      {
//          cin>>arr[i];
//      }
//      int mx=arr[0];
//      for(int i=0;i<n;i++)
//      {
//          mx= max(mx,arr[i]);
//          cout<<"Output is: ";
//          cout<<mx<<endl;
//      }
//  }

// Sum of all Subarrays
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int sum=0,temp=0;
//     for(int i=0;i<n;i++)
//     {
//         temp=0;
//         for(int j=i;j<n;j++)
//         {
//             temp+=arr[j];
//             sum+=temp;
//         }
//     }
//     cout<<sum<<endl;
// }

// Longest Arithmetic Subarray
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int len = 2, diff = arr[1] - arr[0], maxlen = len;
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (diff == (arr[i + 1] - arr[i]))
//         {
//             len++;
//         }
//         else
//         {
//             if (maxlen < len)
//             {
//                 maxlen = len;
//             }
//             len = 2;
//             diff = arr[i + 1] - arr[i];
//         }
//     }
//     if(maxlen<len)
//     {
//         maxlen=len;
//     }
//     if (n == 0 || n == 1)
//     {
//         return 0;
//     }
//     cout << maxlen  << endl;
// }

// Record Breaker
//  int main()
//  {
//      int n;
//      cout<<"Enter the size: ";
//      cin>>n;
//      int a[n+1];
//      a[n]=-1;
//      for(int i=0;i<n;i++)
//      {
//          cin>>a[i];
//      }
//      int ans=0;
//      int mx=-1;
//      if(n==1)
//      {
//          cout<<"1"<<endl;
//          return 0;
//      }
//      for(int i=0;i<n;i++)
//      {
//          if(a[i]>mx && a[i]>a[i+1])
//          {
//              ans++;
//          }
//          mx=max(a[i],mx);
//      }
//      cout<<ans<<endl;
//      return 0;
// }

// First Repeating Element
// int main()
// {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int pos[n + 1];
//     for (int i = 0; i < n + 1; i++)
//     {
//         pos[i] = -1;
//     }
//     int minidx = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (pos[arr[i]] == -1)
//         {
//             pos[arr[i]] = i;
//         }
//         else
//         {
//             if (i < minidx)
//             {
//                 minidx = min(minidx, pos[arr[i]]);
//             }
//         }
//     }
//     cout<<minidx<<endl;
// }

// Find a continuous subarray which adds to a given number S;
//  int main()
//  {
//      int n;
//      cout<<"Enter number of elements in subarray: ";
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++)
//      {
//          cin>>arr[i];
//      }
//      int sum;
//      cout<<"Enter the sum to be found: ";
//      cin>>sum;
//      int start = arr[0], end = arr[0];
//      int cursum=0,i=0,j=0;
//      while(cursum<=sum && i<n)
//      {
//          if((cursum + end)<sum)
//          {
//              cursum += end;
//              j++;
//              end=arr[j];
//          }
//          else if((cursum+end)>sum)
//          {
//              cursum=0;
//              end=arr[++i];
//              j=i;
//              start=i;
//          }
//          if((cursum+end)==sum)
//          {
//              end = j;
//              break;
//          }
//      }
//      cout<<start<<" "<<end<<endl;
//  }

// Smallest Positive missing number
// int main()
// {
//     int n;
//     cout << "Enter number of elements in array: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bool check[n];
//     for(int i=0;i<n;i++)
//     {
//         check[i]=false;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>=0)
//         {
//             int value=arr[i];
//             check[value]=true;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(check[i]==false)
//         {
//             cout<<"The smallest positive number is: "<< i<< endl;
//             break;
//         }
//     }
//     return 0;
// }

// Printing all possible subarrays
// int main()
// {
//     int n;
//     cout << "Enter number of elements in array: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// Maximum Subarray Sum - O(n^2)
// int main()
// {
//     int n;
//     cout << "Enter number of elements in array: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int csm[n + 1];
//     csm[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         csm[i] = csm[i - 1] + arr[i - 1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = csm[i] - csm[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }



//Maximum Circular Subarray Sum
// int kadane(int arr[], int n)
// {
//     int curSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         curSum += arr[i];
//         if (curSum < 0) 
//         {
//             curSum = 0;
//         }
//         maxSum = max(maxSum, curSum);
//     }
//     return maxSum;
// }
// int main()
// {
//     int n;
//     cout << "Enter number of elements in array: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int wrapsum, nonwrapsum;
//     nonwrapsum = kadane(arr, n);
//     int totalsum;
//     for(int i=0;i<n;i++)
//     {
//         totalsum+=arr[i];
//         arr[i]=-arr[i];
//     }
//     wrapsum = totalsum + kadane(arr,n);
//     cout<<max(wrapsum,nonwrapsum)<<endl;
// }


//Two elements in array give a sum k
// int main()
// {
//     int n;
//     cout<<"Enter number of elements in the array: ";
//     cin>>n;
//     int k;
//     cout<<"Enter the sum to be found of: ";
//     cin>>k;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int low =0;
//     int high =n-1;
//     while(low<high)
//     {
//         if((arr[low]+arr[high])==k)
//         {
//             cout<<"2 indices are: "<<low<<" "<<high<<endl;
//             return 0;
//         }
//         else if((arr[low]+arr[high])>k)
//         {
//             high--;
//         }
//         else
//         {
//             low++;
//         }
//     }
//     cout<<"Not found";
//     return 0;
// }



#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Print prime numbers between A and B
//
//
//  bool isPrime(int num)
//  {
//      for(int i=2;i<num;i++)
//      {
//          if(num%i == 0)
//          {
//              return false;
//          }
//      }
//      return true;
//  }
//  int main()
//  {
//      int a,b;
//      cin>>a>>b;
//      for(int i=a;i<=b;i++)
//      {
//          if(isPrime(i))
//          {
//              cout<<i<<endl;
//          }
//      }
//  }

// Fibonacci Sequence

// void fib( int n)
// {
//     int t1=0;
//     int t2=1;
//     int next;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<t1<<endl;
//         next=t1+t2;
//         t1=t2;
//         t2=next;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the sequence limit: ";
//     cin>>n;
//     fib(n);
//     return 0;
// }

// Factorial  Number

// void fact(int n)
// {
//     int prod=1;
//     for(int i=1;i<=n;i++)
//     {
//         prod*=i;
//     }
//     cout<<prod<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     fact(n);
//     return 0;
// }

// Calculate nCr
//  int fact(int n)
//  {
//      int prod=1;
//      for(int i=1;i<=n;i++)
//      {
//          prod*=i;
//      }
//      return prod;
//  }
//  int main()
//  {
//      int n,r;
//      int answer;
//      cout<<" Input the value of n: ";
//      cin>>n;
//      cout<<" Input the value of r: ";
//      cin>>r;
//      answer = fact(n)/(fact(n-r) * fact(r));
//      cout<<answer<<endl;
//      return 0;

// }

// Pascal Triangle
// int fact(int n)
// {
//     int prod = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         prod *= i;
//     }
//     return prod;
// }
// int ncr(int n, int r)
// {
//     int answer = fact(n) / (fact(n - r) * fact(r));
//     return answer;
// }
// int main()
// {
//     int n;
//     cout << "Enter the height: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             int ans = ncr(i, j);
//             if (ans)
//             {
//                 cout << ncr(i, j) << " ";
//             }
//         }
//         cout << endl;
//     }
// }


// int reverse(int x) 
//     {
//         long int num=0;
//         int rem,y;
//         if(x<0)
//         {
//             y=x;
//             x=abs(x);
//         }
//         while(x>0)
//         {
//             rem=x%10;
//             num = (num*10) + rem;
//             x/=10;
//         }
//         if(y<0)
//         {
//             num=num*(-1);
//         }
//         return num;
//     }
// int main()
// {
//     cout<<reverse(1534236469);
// }

// Create nodes and sum of two lists 
// void createNode(struct ListNode **head, struct ListNode **last, int r)
//  {
//     struct ListNode *new = NULL;
//     new = (struct ListNode*)malloc(sizeof(struct ListNode));
//     new->next = NULL;
//     new->val = r;

//     if(*head == NULL)
//     {
//         *head = new;
//         *last = new;
//     }
//     else
//     {
//         (*last)->next =new;
//         *last = new;
//     }
//  }
// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

//    struct ListNode* head = NULL;
//    struct ListNode* last = NULL;
//    struct ListNode* temp = NULL;
//    int sum = 0;
//    int rem = 0;

//    while(l1 && l2)
//    {
//        sum = sum + l1->val + l2->val;
//        rem = sum % 10;
//        sum = sum /10;
//        l1 = l1->next;
//        l2 = l2->next;
//        createNode(&head, &last, rem);
//    }
//     temp = (l1==NULL? l2 : l1);
//     while(temp)
//     {
//         sum = sum +temp->val;
//         rem = sum % 10;
//         sum = sum / 10;
//         temp = temp->next;
//         createNode(&head, &last, rem);
//     }
//     if(sum)
//     {
//         createNode(&head, &last, sum);
//     }
//     return head;
// }


#include <iostream>
using namespace std;

// Normal Pattern
//  int main()
//  {
//      int row,col;
//      cin>>row>>col;
//     for(int i=1;i<=row;i++){
//      for (int j=1;j<=col;j++){
//          cout<<"*";
//      }
//      cout<<endl;
//     }
//     return 0;
//  }

// Rectangular Pattern
// int main()
// {
//     int row, col;
//     cin >> row >> col;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// Inverted Half Pyramid
//  int main(){
//      int row,col;
//      cin>>row>>col;
//      for(int i=row;i>=1;i--)
//      {
//          for(int j=1;j<=i;j++)
//          {
//              cout<<"*";
//          }
//          cout<<endl;
//      }
//  }

// Half Pyramid after 180 degree rotation
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=n-i)
//             {
//                 cout<<" ";
//             }
//             else
//             {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

// Half Pyramid Using Numbers
// int main()
// {
//     int rows;
//     cin>>rows;
//     for(int i =1; i<=rows;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// Floyds Triangle
// int main()
// {
//     int k=1;
//     int rows;
//     cin>>rows;
//     for(int i=1;i<=rows;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<(k++);
//         }
//         cout<<endl;
//     }
// }

// Butterfly Pattern
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int j=1; j<=space;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int j=1; j<=space;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Inverted Pattern
// int main()
// {
//     int rows;
//     cin>>rows;
//     int k=1;
//     for(int i = rows;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k++;
//         }
//         k=1;
//         cout<<endl;
//     }
// }

// 0-1 pattern
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             if((i+j)%2==0)
//             {
//                 cout<<"1";
//             }
//             else
//             {
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }

// Rhombus Pattern
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =n; i>=1 ; i--)
//     {
//         for(int j =1; j<=i-1;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Number Pattern
// int main()
// {
//     int n;
//     cin>>n;
//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++)
//         {
//             cout<<k++<<" ";
//         }
//         k=1;
//         cout<<endl;
//     }
// }

// Palindromic Pattern
//  int main()
//  {
//      int n;
//      cin>>n;
//      for(int i=1;i<=n;i++)
//      {
//          int j;
//          for(j=1;j<=n-i;j++)
//          {
//              cout<<" ";
//          }
//          int k=i;
//          for(int j=i;j>=1;j--)
//          {
//              cout<<j;
//          }
//          for(int j=2;j<=n;j++)
//          {
//              if(j<=i)
//              {
//                  cout<<j;
//              }
//          }
//      cout<<endl;
//      }
//  }

// Star Pattern
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j < 2 * i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1; j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<2*i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// zigzag pattern
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(((i+j)%4==0) || (i==2 && j%4==0))
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }
// }
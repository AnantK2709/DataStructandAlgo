//Form the biggest number from the numeric string

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = stoi(s);
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;

}

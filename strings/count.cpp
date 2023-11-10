// In a given string return the element with maximum count

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ujbwejceiujuwi";
    int freq[26];
    for(int i=0;i<26;i++)
        freq[i]= 0;
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    char ans;
    int maxF = 0;
    for(int i = 0;i<26;i++)
    {
        if(freq[i]>maxF)
        {
            maxF= freq[i];
            ans = i + 'a';
        }
    }
    cout<<"Max frequency is: "<< maxF << " for character "<<ans<<endl;

}
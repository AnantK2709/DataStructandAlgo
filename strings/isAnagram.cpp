#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        int correct =0; 
        if(s.size()!=t.size())
        {
            return false;
        }
        for(char ch:s)
        {
            for(char ch1:t)
            {
                cout<<t<<endl;
                if(ch==ch1)
                {
                    correct+=1;
                    size_t pos = t.find(ch1);
                    t.erase(pos,1);
                    break;
                } 
            }
        }
        if(correct==s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
int main(){
    cout<<isAnagram("aacc","ccac");
}

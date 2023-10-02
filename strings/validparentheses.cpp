
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include <stack>

bool isValid(string s)
{
    stack<char> st;
    int i = 0;
    if (s.size() <= 1)
    {
        return false;
    }
    while (i < s.size())
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '['))
            {
                return false;
            }
            else
                st.pop();
        }
        i++;
    }
    return st.empty();
}
int main()
{
    string str;
    cin >> str;
    cout << isValid(str) << endl;
}
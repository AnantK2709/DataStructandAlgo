// Given a string s of lower and upper case English letters.

// A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

// 0 <= i <= s.length - 2
// s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
// To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

// Return the string after making it good. The answer is guaranteed to be unique under the given constraints.


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
using namespace std;

string makeGood(string s)
{
    string answer = "";
    stack<char> st;
    stack<char> ans;
    if (s.size() <= 1)
    {
        return s;
    }
    int i = 1;
    st.push(s[0]);
    while (i <= s.size() && (!st.empty()))
    {
        if ((s[i] == st.top() - 32) || (s[i] == st.top() + 32))
        {
            st.pop();
            //    i++;
        }
        else
        {
            st.push(s[i]);
        }
        i++;
    }

    while (!st.empty())
    {
        ans.push(st.top());
        st.pop();
    }
    while (!ans.empty())
    {
        answer = answer + ans.top();
        ans.pop();
    }
    return answer;
}

int main()
{
    string s;
    cin>>s;
    cout<<makeGood(s)<<endl;
}


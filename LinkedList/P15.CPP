// BALANCED PARANTHESIS

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty()) // if some opening brackets are still left in the stack
        return false;

    return ans;
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
        cout << "Valid string";
    else
        cout << "Invalid string";

    return 0;
}
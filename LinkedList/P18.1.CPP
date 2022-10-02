// Queue using Stack
// Approach-1 -> Using 2 stacks

#include <bits/stdc++.h>
using namespace std;

class Que
{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topele = s2.top();
        s2.pop();

        return topele;
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
            return true;
        return false;
    }
};

int main()
{
    Que q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.pop() << endl;
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty();
    return 0;
}
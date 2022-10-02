// Sliding Window Maximum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, size;
    cin >> size >> k;
    vector<int> a(size);

    for (auto &i : a)
    {
        cin >> i;
    }

    deque<int> d;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!d.empty() && a[i] > d.back())
        {
            d.pop_back();
        }
        d.push_back(a[i]);
    }

    ans.push_back(d.front());

    for (int i = k; i < a.size(); i++)
    {
        if (d.front() == a[i - k])
        {
            d.pop_front();
        }

        while (!d.empty() && a[i] > d.back())
        {
            d.pop_back();
        }
        d.push_back(a[i]);
        ans.push_back(d.front());
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
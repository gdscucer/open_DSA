#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

// Sieve of Eratosthenes

signed main()
{
    int n;
    cout << "Enter The Number upto which we have to find Prime Numers : ";
    cin >> n;
    bool Prime[n + 1];
    for (int i = 0; i <= n; i++)
    {
        Prime[i] = true;
    }
    int a;

    Prime[0] = false;
    Prime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (Prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                Prime[j] = false;
            }
        }
    }
    cout << "\nThe Prime Numbers From 1 To " << n << " are : " << endl;

    for (int i = 1; i <= n; i++)
    {
        if (Prime[i] == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

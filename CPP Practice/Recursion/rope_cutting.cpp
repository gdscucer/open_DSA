#include <bits/stdc++.h>

using namespace std;

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {

            return c;
        }
    }
}

int maxPieces(int n, int a, int b, int c)
{
    //Base Case
    if (n == 0)
        return 0;

    if (n < 0)
        return -1;

    //Recursive Call
    int res = max(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c));

    if (res == -1)
        return -1;

    return (res+1);     //adding +1 so that result increases to one valid cut.
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = maxPieces(n, a, b, c);

    cout << "Maximum pieces that can be cut are : " << ans << endl;

    return 0;
}
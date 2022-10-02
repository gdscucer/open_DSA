/*

 *             *
 * *         * *
 * * *     * * *
 * * * * * * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *

*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int l = i + 1; l <= 2 * row - i; l++)
        {
            cout << " ";
        }

        for (int k = (2 * row); k >= (2 * row - (i - 1)); k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = row + 1; i <= 2 * row; i++)
    {

        for (int j = 1; j <= ((2 * row) - i) + 1; j++)
        {
            cout << "*";
        }

        for (int l = 2 * row - (i - 2); l <= i - 1; l++)
        {
            cout << " ";
        }

        for (int j = i; j <= 2 * row; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
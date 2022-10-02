/*

  *   *
 * * * *
*   *   *

*/

#include <iostream>
using namespace std;
int main()
{
    int col;
    cout << "Enter total column" << endl;
    cin >> col;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i + j) % 4 == 0 || (j % 4 == 0 && i % 2 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
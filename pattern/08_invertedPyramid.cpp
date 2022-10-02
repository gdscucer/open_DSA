/*

1 1 1 1
2 2 2
3 3
4

*/

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the rows" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
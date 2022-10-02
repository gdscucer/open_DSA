/*

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;
int main()
{
    int row, count = 0;
    cout << "Enter the rows" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << ++count << " ";
        }
        cout << endl;
    }

    return 0;
}
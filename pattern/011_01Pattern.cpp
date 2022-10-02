/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    cout << " 1 ";
                else
                    cout << " 0 ";
            }
            else
            {
                if (j % 2 == 0)
                    cout << " 0 ";
                else
                    cout << " 1 ";
            }
        }
        cout << endl;
    }

    return 0;
}
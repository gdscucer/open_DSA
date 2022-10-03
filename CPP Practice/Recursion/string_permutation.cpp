#include<bits/stdc++.h>

using namespace std;

void permutationOfString(string s, int index = 0)
{
    //Base Case
    if(index >= s.length())
    {
        cout<<s<<" ";
        return;
    }

    //Recursive Call
    for (int j = index; j < s.length(); j++)
    {
        swap(s[index], s[j]);
        permutationOfString(s, index+1);
        swap(s[index], s[j]);
    }
    
}

int main()
{
    string s;
    cin>>s;

    permutationOfString(s);

    return 0;
}
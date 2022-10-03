#include<iostream>
#include<string>

using namespace std;

void subsets(string s, string curr, int index = 0)
{
    //Base Case
    if(index == s.length())
    {
        cout<<curr<<" ";
        return;
    }

    //Recursive Call for Excluding
    subsets(s, curr, index+1);

    //Recursive Call for Including
    
    subsets(s, curr+s[index], index+1);
}

int main()
{
    string str;
    string curr = "";

    cin>>str;

    subsets(str, curr, 0);

    return 0;
}
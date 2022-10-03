#include<iostream>

using namespace std;

bool palindromeCheck(string str, int start, int end)
{
    if(start >= end)
    return true;

    return ((str[start]==str[end]) && palindromeCheck(str, start + 1, end - 1)); 
}

int main()
{
    string str;
    cin>>str;
    int ans = palindromeCheck(str, 0, str.length()-1);

    if(ans == 0)
    cout<<"Not Plaindrome!";
    else
    cout<<"Palindrome!";

    return 0;
}
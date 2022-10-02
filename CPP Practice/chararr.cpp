#include<iostream>
using namespace std;

// Lowercase conversion

char toLowerCase(char ch) {
if(ch >='a' && ch <='z')
    return  ch;
else {
    char temp = ch - 'A' + 'a';
    return temp;

}
}


// Palindrome
 bool checkPalindrome(char a[], int n) {
 int s = 0;
 int e = n-1;

 while(s<=e) {
    if(a[s] != a[e]) {
        return 0;
    }
    else {
        s++;
        e--;
    }
 }
 return true;
 }

// Reverse a string

int getreverse (char name[], int n ) {
int s =0;
int e = n-1;

while(s<e) {
    swap(name[s++], name[e--]);
    }

}

// length of string

int getLength(char name[]) {
int count = 0;
for(int i = 0; name[i] != '\0'; i++) {
        count++;

}
return count;
}

int main() {
char name[20];

cout << "Enter the name" << endl;
cin >> name;

cout << " Your name is";
cout << name << endl;
int len = getLength(name);
cout << "Length:" << len << endl;

//reverse(name, len);
cout << "Your name is ";
cout << name << endl;

cout <<" Palindrome or Not: " << checkPalindrome(name, len) <<endl;

return 0;
}

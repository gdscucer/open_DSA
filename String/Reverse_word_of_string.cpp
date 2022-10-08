/*Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i */

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> words;
        int start = 0;
        int len = 0;
        for(int i=0; i<S.size(); i++)
        {
            if(S[i] == '.')
            {
                string word = S.substr(start, len);
                words.push_back(word);
                if(i!= S.size() -1) 
                {
                    start = i+1; 
                    len = 0;
                }
            }
            else
            {
                len++;
            }
        }
        
        //last word 
        string word = S.substr(start, len);
        words.push_back(word);
        
        
        reverse(words.begin(), words.end());
        
        string ans = "";
        for(int i=0; i<words.size(); i++)
        {
            if(i!= words.size() -1)
            {
                ans += words[i];
                ans.push_back('.');
            }
            else
            {
                ans += words[i];
            }
        }
        
        return ans;
    } 
};
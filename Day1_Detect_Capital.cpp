/*
Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
 

Example 1:

Input: "USA"
Output: True
 

Example 2:

Input: "FlaG"
Output: False

Approach:-
We will declare a variable count =0, and then iterate a for loop over a string.
If capital char present count will increment by 1.There will be 3 cases.
if count = length of string means all chars are capital, -->true
if count = 0, all chars are small. --->true
if count = 1 and 0th char of string is capital ---> true
otherwise all cases ---> false
*/



class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() == 0) return true;
        int cnt = 0;
        int len = word.length();
        for(int i = 0; i<len; i++)
        {
            int ch = word[i];
            if(ch >= 65 && ch < 91)
                cnt++;
        }
        if(cnt == len) return true; // all chars are capital
        if(cnt == 0) return true;   // all chars are small
        if(cnt == 1 && word[0]>=65 && word[0]<91) return true; // 1st char is capital only
        return false;
        
    }
};

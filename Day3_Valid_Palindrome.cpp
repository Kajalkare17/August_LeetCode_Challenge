/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

Constraints:  s consists only of printable ASCII characters.
*/


class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() <= 1) {
            return true;
        }
        int left = 0;
        int right = s.length()-1;
        while(left < right) {
            if(!isAlphanumeric(s[left])){    // whitespace or other than alphanumeric char e.g ,.;
                left++;
            }else if(!isAlphanumeric(s[right])){
                right--;
        }else if(lowercase(s[left]) != lowercase(s[right])) {
                return false;
            }else {
                left++;
                right--;
            }
        }
        return true;
        
    }
    bool isAlphanumeric(char c) {
        return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9');
    }
    
    char lowercase(char c) {
        if(('a' <= c && c <= 'z') || ('0' <= c && c <= '9')) return c;
        return (char)((int)c+32);
            
    }
};

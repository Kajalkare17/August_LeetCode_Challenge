/*
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> counts;   //create a map table for keeping char frequency
        for(char c: s) counts[c]++;
        
        int result = 0;
        bool firstodd_found = false;  // initiate a var fist odd frquency char as false
        for(auto & c: counts){
            if(c.second % 2 == 0) result += c.second;  // if even frequency char found in string add
													   //it in result
            else{
                if(firstodd_found == false){       //if first odd frquency char found then add it to result
                    result += c.second;
                    firstodd_found = true;       // now make var firstodd_found true
                }
                else
                    result += c.second-1;    //again when odd freuency char found add (frequency -1) to result 
                
            }
        }
        return result;
        
    }
};

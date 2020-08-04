Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example 1:

Input: 16
Output: true
Example 2:

Input: 5
Output: false



class Solution {
public:
    bool isPowerOfFour(int num) {
        int count = 0;
        for(int i=0; i<32; i++)
        {
            if(((num >> i) & 1) != 0){      //to check whether bit is set or not
                count++;
                if(i%2 == 1)                //index of bit is odd ---> false
                return false;
            }
        }
        if(count == 1) return true;         //count of set bit should be one
        else return false;
    }
};

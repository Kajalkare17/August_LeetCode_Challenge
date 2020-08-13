/*
Given a non-negative index k where k = 33, return the kth index row of the Pascal's triangle.

Note that the row index starts from 0.


In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example:

Input: 3
Output: [1,3,3,1]
*/


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1, 1);
        for(int i = 1; i < rowIndex; ++i){
            for(int j = i; j > 0; --j)
                result[j] += result[j-1];
        }
        return result;
    }
};


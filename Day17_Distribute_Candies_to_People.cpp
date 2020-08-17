/*
Example 1:

Input: candies = 7, num_people = 4
Output: [1,2,3,1]
Explanation:
On the first turn, ans[0] += 1, and the array is [1,0,0,0].
On the second turn, ans[1] += 2, and the array is [1,2,0,0].
On the third turn, ans[2] += 3, and the array is [1,2,3,0].
On the fourth turn, ans[3] += 1 (because there is only one candy left), and the final array is [1,2,3,1].
*/

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        int idx =0;
        int candies_count =1;   
        while(candies){
            result[idx++] += candies_count;  
            candies-=candies_count;
            candies_count++;
            if(idx == num_people) idx = 0;
            if(candies_count > candies) 
                candies_count = candies;
        }
        return result;
        
    }
};

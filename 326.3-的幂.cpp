/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
    public:
    bool isPowerOfThree(int n) {
        // if(n <= 0){
        //     return false;
        // }

        // while (n%3 == 0){
        //     n = n/3;
        // }
        
        // if (n == 1){
        //     return true;
        // }

        // return false;

        long tmp = 1;
        while (tmp < INT_MAX)
        {
            if(n == tmp){
                return true;
            }
            tmp = tmp*3;
        }
        
        return false;
    }
};
// @lc code=end
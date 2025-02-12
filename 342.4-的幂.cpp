/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        // 方法1
        // long tmp = 1;
        // while (tmp < INT_MAX)
        // {
        //     if(n == tmp){
        //         return true;
        //     }
        //     tmp = tmp*4;
        // }
        
        // return false;

        // 方法2
        int tmp = n;
        if(tmp <=0 ){
            return false;
        }
        
        while(tmp%4 == 0){
            tmp /= 4;
        }

        if(tmp == 1){
            return true;
        }

        return false;
    }
};
// @lc code=end


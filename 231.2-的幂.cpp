/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //方法1
        // int tmp = n;
        // if (tmp <= 0){
        //     return false;
        // }

        // //去掉2的倍数
        // while (tmp%2 == 0){
        //     tmp = tmp/2;
        // }

        // if (tmp == 1){
        //     return true;
        // }

        // return false;

        //方法2
        // for(int i=0;i < 31;i++){
        //     if(n == 1 << i){
        //         return true;
        //     }
        // }

        // return false;

        //方法3
        if(n <= 0){
            return false;
        }
        
        int maxNum = 1 << 30;
        if (maxNum % n == 0){
            return true;
        }

        return false;
    }
};
// @lc code=end


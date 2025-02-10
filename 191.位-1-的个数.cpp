/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        //方法1
        // int cnt = 0;
        // long cur = 1;
        // while (n > 0)
        // {
        //     int tmp = n & cur;
        //     if (tmp > 0){
        //         cnt++;
        //     }

        //     n = n - tmp;
        //     cur = cur*2;
        // }
        
        // return cnt;

        //方法2
        int cnt = 0;
        for(int i = 0; i < 32; i++){
            if ((n&(1<<i)) > 0){
                cnt++;
            }
        }

        return cnt;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        //方法1:暴力搜索
        // long d = 0;
        // while(d*d <= x){
        //     d++;
        // }

        // return --d;

        //方法2:二份查找
        int l = 0;
        int r = x;
        while(l < r){
            int mid = (l + r)/2;
            if(mid*mid >x){
                r = mid;
            }

            if(mid*mid <x){
                l = mid;
            }
        }

        return l;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        //方法1
        // vector<char> nums1;//从左往右
        // vector<char> nums2;//从右往左

        // if(x < 0){
        //     return false;
        // }

        // int tmp = x;
        // while(tmp > 0){
        //     nums2.push_back(tmp%10);
        //     tmp = tmp/10;
        // }

        // //反转得到nums1
        // int cnt = nums2.size();
        // while(--cnt >= 0){
        //     nums1.push_back(nums2[cnt]);
        // }

        // for(int i = 0; i < nums1.size();i++){
        //     if(nums1[i] != nums2[i]){
        //         return false;
        //     }
        // }

        // return true;

        //方法2
        if(x < 0){
            return false;
        }

        int tmp = x;
        long cur = 0;

        while(tmp > 0){
            cur = cur*10 + tmp%10;
            tmp = tmp/10;
        }

        return (cur == x);
    }
};
// @lc code=end


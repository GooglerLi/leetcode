/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //方法1
        // vector<int> tmp_nums;
        // for(auto n : nums) {
        //     if(n != 0){
        //         tmp_nums.push_back(n);
        //     }
        // }

        // int t = nums.size() - tmp_nums.size();
        // for(int i = 0; i < t; i++) {
        //     tmp_nums.push_back(0);
        // }

        // for(int i = 0; i < nums.size(); i++) {
        //     nums[i] = tmp_nums[i];
        // }
        
        //方法2
        // int nonZeroIndex = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     if(nums[i] != 0){
        //         nums[nonZeroIndex++] = nums[i];
        //     }
        // }

        // for(int i = nonZeroIndex; i < nums.size(); i++) {
        //     nums[i] = 0;
        // }

        //方法3
        int nonZeroIndex = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0 && nonZeroIndex < nums.size()){
                int tmp = nums[nonZeroIndex];
                nums[nonZeroIndex] = nums[i];
                nums[i] = tmp;
                nonZeroIndex++;
            }
        }        
    }
};
// @lc code=end


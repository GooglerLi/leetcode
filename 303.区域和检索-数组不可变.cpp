/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
private:
    vector<int> nms;

public:
    //方法1
    // NumArray(vector<int>& nums) {
    //     for (auto n : nums) {
    //         nms.push_back(n);
    //     }
    // }
    
    // int sumRange(int left, int right) {
    //     int sum = 0;
    //     for (auto i = left; i <= right; i++){
    //         sum += nms[i];
    //     }
        
    //     return sum;
    // }

    // 方法2
    NumArray(vector<int>& nums) {
        nms.push_back(0);
        for(int i = 0; i < nums.size(); i++){
            nms.push_back(nms[i] + nums[i]);
        }
    }

    int sumRange(int left, int right) {
        return nms[right+1] - nms[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end


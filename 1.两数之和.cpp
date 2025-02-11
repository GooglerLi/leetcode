/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            // 方法1
            // vector<int> result;
            // map<int,int> num2index;
    
            // for(int i = 0; i < nums.size();i++){
            //     int p = target - nums[i];
            //     if(num2index.find(p) != num2index.end() && num2index[p] != i){
            //         result.push_back(i);
            //         result.push_back(num2index[p]);
            //         return result;
            //     }else{
            //         num2index[nums[i]] = i;
            //     }
            // }
    
            // return result;

            // 方法2
            vector<int> result;
            for(int i = 0; i < nums.size();i++){
                for(int j = i+1; j < nums.size();j++){
                    if(target == nums[i] + nums[j]){
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
    
            return result;
        }
    };    
// @lc code=end


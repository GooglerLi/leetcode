/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> rst;
        if(nums.size() == 0){
            return rst;
        }

        int startNum = nums[0];
        int endNum = startNum;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1] + 1){
                //继续遍历
                endNum = nums[i];
                continue;
            }

            //输出
            string tmp = to_string(startNum);
            if (endNum == startNum){
                rst.push_back(tmp);
            }else{
                tmp += ("->" + to_string(endNum));
                rst.push_back(tmp);            
            }

            startNum = nums[i];
            endNum = startNum;
        }

        string tmp = to_string(startNum);
        if (endNum == startNum){
            rst.push_back(tmp);
        }else{
            tmp += ("->" + to_string(endNum));
            rst.push_back(tmp);            
        }

        return rst;
    }
};
// @lc code=end


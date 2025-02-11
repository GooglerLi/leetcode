/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //方法1
        // map<int,int> num2index;
        // for(auto num : nums) {
        //     num2index[num] +=1;
        // }

        // for(auto pair : num2index) {
        //     if (pair.second == 1) {
        //         return pair.first;
        //     }
        // }

        // return 0;

        //方法2
        // int ret = 0;
        // for(auto num : nums) {
        //     ret ^= num;
        // }

        // return ret;

        //方法3
        map<int,int> num2index;
        for(auto num : nums) {
            if(num2index.find(num) != num2index.end()){
                num2index.erase(num);
            }else{
                num2index[num] +=1;
            }
        }

        for(auto pair : num2index) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return 0;
    }
};
// @lc code=end


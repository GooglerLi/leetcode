/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //方法1
        // for(int i = digits.size() - 1; i >=0 ; i--){
        //     digits[i]++;
        //     if(digits[i] == 10){
        //         digits[i] = 0;
        //         continue;
        //     }

        //     return digits; 
        // }

        // digits.insert(digits.begin(),1);
        // return digits; 

        //方法2
        int carry = 0;
        for(int i = digits.size() - 1; i >=0 ; i--){
            int tmp = 0;
            if (i == digits.size() - 1){
                tmp = tmp + 1;
            }
            tmp += digits[i] + carry;

           if(tmp >= 10){
                carry = tmp /10;
                tmp = tmp % 10;
           }else{
                carry = 0;
           }
           
           digits[i] = tmp;
        }

        if(carry > 0){
            digits.insert(digits.begin(),carry );
        }
        
        return digits; 
    }
};
// @lc code=end


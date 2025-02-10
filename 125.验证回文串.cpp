/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        // vector<char> v;
        // for (int i = 0; i < s.length(); i++) {
        //     //方法1
        //     // if (s[i] >= 'A' and s[i] <= 'Z'){
        //     //     v.push_back(s[i]+32);
        //     // }

        //     // if (s[i] >= 'a' and s[i] <= 'z'){
        //     //     v.push_back(s[i]);
        //     // }

        //     // if (s[i] >= '0' and s[i] <= '9'){
        //     //     v.push_back(s[i]);
        //     // }

        //     //方法2
        //     // if(isupper(s[i])){
        //     //     v.push_back(s[i]+32);
        //     // }

        //     // if(islower(s[i])){
        //     //     v.push_back(s[i]);
        //     // }

        //     // if(isdigit(s[i])){
        //     //     v.push_back(s[i]);
        //     // }

        //     //方法3
        //     if(isalnum(s[i])){
        //         v.push_back(tolower(s[i]));
        //     }
        // }

        // for (int i = 0; i < v.size()/2; i++){
        //     if (v[i] != v[v.size()-1-i]){
        //         return false;
        //     }
        // }

        int l = 0;
        int r = s.length()-1;
        while (l < r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }

            if(!isalnum(s[r])){
                r--;
                continue;
            }

            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //方法1
        // for(int i=0; i<n;i++) {
        //     nums1[m+i] = nums2[i];
        // }
        // sort(nums1.begin(), nums1.end());

        //方法2
        // vector<int> rstNums;
        // int i = 0,j = 0;

        // while(i<m || j<n){
        //     if(i==m){
        //         rstNums.push_back(nums2[j++]);
        //     }else if(j==n){
        //         rstNums.push_back(nums1[i++]);
        //     }else if(nums1[i] <= nums2[j]){
        //         rstNums.push_back(nums1[i++]);
        //     }else{
        //         rstNums.push_back(nums2[j++]);
        //     }
        // }

        // nums1 = rstNums;

        //方法3
        int i = m-1;
        int j = n-1;
        int cnt = 0;
        while(i>=0 || j>=0){
            int cur = 0;
            if(i == -1){
                cur  = nums2[j--];
            }else if(j == -1){
                cur = nums1[i--];
            }else if(nums1[i] >= nums2[j]){
                cur = nums1[i--];
            }else{
                cur = nums2[j--];
            }
            nums1[m+n-cnt-1] = cur;
            cnt++;
        }
    }   
};
// @lc code=end


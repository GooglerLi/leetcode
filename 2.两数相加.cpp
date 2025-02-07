/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lr = nullptr;
        ListNode* tr = nullptr;

        int carry = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            int tmp = 0;
            if(l1 != nullptr && l2 != nullptr){
                tmp = carry + l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;              
            }else if(l1 != nullptr && l2 == nullptr){
                tmp = carry + l1->val;
                l1 = l1->next;
            }else if(l1 == nullptr && l2 != nullptr){
                tmp = carry + l2->val;
                l2 = l2->next;
            }

            carry = tmp/10;
            ListNode* r = new ListNode(tmp%10);

            if(lr == nullptr){
                lr = r;
            }else{
                tr->next = r;
            }
            tr = r;
        }

        if(carry > 0){
            tr->next = new ListNode(carry);
        }
        return lr;
    }
};
// @lc code=end


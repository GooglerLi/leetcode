/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }

        ListNode* h = new ListNode(0);
        h->next = head;
        while (head->next != nullptr)
        {
            if(head->val == head->next->val){
                head->next = head->next->next;
            }else{
                head = head->next;
            }
        }
        
        return h->next;
    }
};
// @lc code=end


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;
 
struct ListNode 
{
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
  
class Solution {
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    
        if(head == NULL)
            return NULL;
            
    	ListNode *back = NULL;
    	ListNode *front = NULL;
    	ListNode *curr = head;
    	while(curr)
    	{
    		back = curr->next; //后面的节点 

    		curr->next = front; //逆转当前节点
    		
    		front = curr;	
    		curr = back; 
		}
        
        return front;
    }
};


int main()
{
	ListNode *head;
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(3);
	ListNode node4(4);
	ListNode node5(5);
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	
	head = &node1;
	
	ListNode *cur = head;
	while(cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	
	cout << endl;
	
	Solution su;
	ListNode *cur_other = su.reverseList(head);
	while(cur_other)
	{
		cout << cur_other->val << " "; 
		cur_other = cur_other->next;
	}
	
	cout << endl;
}

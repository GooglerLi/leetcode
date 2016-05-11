#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
 
 /**
 *  1->2->3->4->5->6
 * 首先判断是否是尾节点，如果是尾节点，那么退出函数
 * 如果不是尾节点的话，将后一节点的值赋值给当前节点，然后删除下一节点
 */
 
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next == NULL)   //尾节点
            return;
        
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = temp->next;
        delete temp;
    }
};

int main()
{
	ListNode node1(0);
	ListNode node2(0);
	ListNode node3(0);
	
	node1.next = &node2;
	node2.next = &node3;

	

	ListNode *cur = &node1;
	while(cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	
	cout << endl;
	Solution su;
	su.deleteNode(&node1);
	
	cur = &node1;
	while(cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	
	cout << endl;
}

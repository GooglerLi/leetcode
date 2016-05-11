#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
 
 /**
 *  1->2->3->4->5->6
 * �����ж��Ƿ���β�ڵ㣬�����β�ڵ㣬��ô�˳�����
 * �������β�ڵ�Ļ�������һ�ڵ��ֵ��ֵ����ǰ�ڵ㣬Ȼ��ɾ����һ�ڵ�
 */
 
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next == NULL)   //β�ڵ�
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

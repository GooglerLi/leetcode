#include <iostream>
#include <stdlib.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
 
class Solution {
public:
    struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    struct ListNode *curr = head;
    while(curr!=NULL)
    {
    	if(curr->next == NULL)
    		break;
        if(curr->val == curr->next->val)
        {
            struct ListNode *temp = curr->next;
            if(curr->next->next!=NULL)
            {
                curr->next = curr->next->next;
            }else
            {
                 curr->next = NULL;
            }
      //      free(temp);
      //    delete(temp); 
        }else
        {
            curr = curr->next;
        }
    }
    
    return head;
}
};


int main()
{
	ListNode node1 = ListNode(1);
	ListNode node2 = ListNode(1);
	ListNode node3 = ListNode(1);
	
	ListNode *head = &node1;
	head->next = &node2;
	head->next->next = &node3;
	
	Solution su;
	su.deleteDuplicates(head);
	
	while(head)
	{
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
	
}

#include <iostream>
#include <stdio.h>

#include <stdlib.h>
using namespace std;



struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
		ListNode prev(0);
        prev.next = head;
        ListNode *pcurr = head;
        
        while(pcurr)
        {
            if(pcurr->val == val)
            {
                if(pcurr->next==NULL)   //Î²½Úµã
                {
					free(pcurr);
					return prev.next;
				}
                    
                pcurr->val = pcurr->next->val;
                ListNode *temp = pcurr->next;
                pcurr->next = pcurr->next->next;
                
                delete temp;
            }
            pcurr=pcurr->next;
        }
        
        return prev.next;
    }
};

int main()
{
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(6);
	ListNode node4(4);
	ListNode node5(5);
	ListNode node6(6);
	
	ListNode *head = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;
	
	ListNode *cur = head;
	while(cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	
	cout << endl;
	Solution su;
	cur = su.removeElements(head,6);
	

	while(cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	
	cout << endl;
	
}

#include <iostream>
#include <malloc.h>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	
	ListNode(int x):val(x),next(NULL)
	{
	}
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
	struct ListNode* result = new ListNode(0);
	struct ListNode* currNode = result;
	int carry = 0;
	ListNode *b1 = l1, *b2 = l2;
	while(b1!=NULL || b2!=NULL || carry)
	{
		ListNode *node = new ListNode(0);
		int val1 = b1 ? b1->val : 0;
		int val2 = b2 ? b2->val : 0;
		b1 = b1 ? b1->next : NULL;
		b2 = b2 ? b2->next: NULL;
		node->val = (val1 + val2 + carry) % 10;
		carry = (val1 + val2 + carry) / 10;
		currNode->next = node;
		currNode = node;
	}
	
	return result->next;
}

int main()
{
	struct ListNode* l1 = NULL;
	struct ListNode* l2 = NULL;
	struct ListNode* curr_l1 = NULL;
	struct ListNode* curr_l2 = NULL;
	
	int val1;
	int val2;
	
	
	char ch1;
	char ch2;
	
	while((cin >>val1).get(ch1))
	{
		struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(ListNode));
		temp_node->val = val1;
		temp_node->next = NULL;
		
		if(l1 == NULL)
		{
			l1 = temp_node;  //头结点 
			curr_l1 = temp_node; //结果链表当前指针 
		}else
		{
			curr_l1->next = temp_node;
			curr_l1 = curr_l1->next;	
		}
		
		if(ch1=='\n')
		{
			break;
		}
	}
	
	while((cin >>val2).get(ch2))
	{
		struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(ListNode));
		temp_node->val = val2;
		temp_node->next = NULL;
		
		if(l2 == NULL)
		{
			l2 = temp_node;  //头结点 
			curr_l2 = temp_node; //结果链表当前指针 
		}else
		{
			curr_l2->next = temp_node;
			curr_l2 = curr_l2->next;	
		}
		
		if(ch2=='\n')
		{
			break;
		}	
	}
	
	struct ListNode *result = addTwoNumbers(l1,l2);
	while(result!=NULL)
	{
		cout << result->val << " ";
		result = result->next;
	}
	
	cout << endl;
}

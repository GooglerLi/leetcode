#include <iostream>
#include <malloc.h>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
	if(l1==NULL)
	{
		return l2;
	}
	
	if(l2==NULL)
	{
		return l1;
	}
	
	struct ListNode *result = NULL;
	struct ListNode *curr_point1;
	struct ListNode *curr_point2;
	struct ListNode *curr_result = NULL;
	curr_point1 = l1;
	curr_point2 = l2;
	
	int flag = 0;
	while((curr_point1!=NULL && curr_point2!=NULL))
	{
		int temp_val = curr_point1->val + curr_point2->val;
		if(flag)
		{
			temp_val = temp_val + 1;
			flag = 0;
		}
		
		if(temp_val > 9)
		{
			flag = 1;
			temp_val = temp_val - 10;
		} 
		
		struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp_node->val = temp_val;
		temp_node->next = NULL;
		 
		if(result == NULL)
		{
			result = temp_node;  //头结点 
			curr_result = temp_node; //结果链表当前指针 
		}else
		{
			curr_result->next = temp_node;
			curr_result = curr_result->next;	
		}
		
		curr_point1 = curr_point1->next;
		curr_point2 = curr_point2->next;
	}
	
	while(curr_point1!=NULL)
	{
		int temp_val = curr_point1->val;

		if(flag)
		{
			temp_val = temp_val + 1;
			flag = 0;
		}
		
		if(temp_val >9)
		{
			flag = 1;
			temp_val = temp_val -10;
		}
		
		struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp_node->val = temp_val;
		temp_node->next = NULL;
		
		if(result == NULL)
		{
			result = temp_node;  //头结点 
			curr_result = temp_node; //结果链表当前指针 
		}else
		{
			curr_result->next = temp_node;
			curr_result = curr_result->next;	
		}
		
		curr_point1 = curr_point1->next;
	}
	
	while(curr_point2!=NULL)
	{		
		int temp_val = curr_point2->val;

		if(flag)
		{
			temp_val = temp_val + 1;
			flag = 0;
		}
		
		if(temp_val >9)
		{
			flag = 1;
			temp_val = temp_val -10;
		}
		
		struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp_node->val = temp_val;
		temp_node->next = NULL;
		
		if(result == NULL)
		{
			result = temp_node;  //头结点 
			curr_result = temp_node; //结果链表当前指针 
		}else
		{
			curr_result->next = temp_node;
			curr_result = curr_result->next;	
		}
		
		curr_point2 = curr_point2->next;	
	}
	
	
	if(curr_point1==NULL && curr_point2==NULL)
	{
		if(flag)
		{
			struct ListNode *temp_node = (struct ListNode*)malloc(sizeof(struct ListNode));
			temp_node->val = 1;
			temp_node->next = NULL;
			
			curr_result->next = temp_node;
			curr_result = curr_result->next;
		}
	}
	
	return result;
}

int main()
{
	struct ListNode* l1 = NULL;
	struct ListNode* l2 = NULL;
	struct ListNode* curr_l1 = NULL;
	struct ListNode* curr_l2 = NULL;
	
	int val1;
	int val2;
	
	int m = 1;
	int n = 2;
	
	
	while(m >0)
	{
	//	cin.eof()
		cin >>val1; 
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
		m--;
	}
	
//	fflush(cin);
	while(n>0)
	{
		cin >>val2;
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
		
		n--;	
	}
	
	struct ListNode *result = addTwoNumbers(l1,l2);
	while(result!=NULL)
	{
		cout << result->val << " ";
		result = result->next;
	}
	
	cout << endl;
}

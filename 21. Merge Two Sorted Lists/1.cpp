/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 /*第一种方法，循环比较各个节点的值*/
/*struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1==NULL)
        return l2;
        
    if(l2==NULL)
        return l1;
     
    struct ListNode* result = NULL;
    struct ListNode* curr_res = NULL;
    struct ListNode* curr1 = l1;
    struct ListNode* curr2 = l2;
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->val <= curr2->val)
        {
            if(result == NULL)
            {
                result = curr1;
                curr_res = result;
            }else
            {
                curr_res->next = curr1;
                curr_res = curr1;
            }
            curr1 = curr1->next;
            
        }else
        {
            if(result == NULL)
            {
                result = curr2;
                curr_res = result;
            }else
            {
                curr_res->next = curr2;
                curr_res = curr2;
            }
            curr2 = curr2->next;
        }
    }
    
    if(curr1!=NULL)
    {
        curr_res->next = curr1;
    }
    
    if(curr2!=NULL)
    {
        curr_res->next = curr2;
    }
    
    return result;
    
}*/


/*第二种解法：递归*/ 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1==NULL)
        return l2;
        
    if(l2==NULL)
        return l1;
     
    struct ListNode* result = NULL;
    struct ListNode* curr1 = l1;
    struct ListNode* curr2 = l2;
  
   
    if(curr1->val <= curr2->val)
    {
        result = curr1;
        result->next =  mergeTwoLists(curr1->next,curr2);
    }else
    {
        result = curr2;
        result->next =  mergeTwoLists(curr1,curr2->next);
    }
    

    return result;
    
}

int main()
{
 } 
 

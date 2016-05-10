/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode *> queue_element;
        vector<vector<int>> result;
     
        if(root!=NULL)
        {
            queue_element.push(root);
            
            while(queue_element.size()!=0)
            {
                int size = queue_element.size();
                vector<int> temp_result;
                while(size!=0)
                {
                    struct TreeNode *node = queue_element.front();
                    queue_element.pop();
                    temp_result.push_back(node->val);
                
                    if(node->left)
                        queue_element.push(node->left);
                    if(node->right)
                        queue_element.push(node->right);
                    size--;
                }
                result.push_back(temp_result);
            }
        }
        
       return result;
    }
};


int main()
{
	
}

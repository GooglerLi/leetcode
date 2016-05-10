
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
    int minDepth(TreeNode* root) 
    {
       int depth = 0;
       if(root == NULL)
       {
            return 0;
       }else
       {
           if(root->right == NULL)
           {
               return 1 + minDepth(root->left);
           }else if(root->left == NULL)
           {
               return 1 + minDepth(root->right);
           }if(root->right == NULL && root->left == NULL)
           {
               return 1;
           }else
           {
                int ldepth = minDepth(root->left);
                int rdepth = minDepth(root->right);
           
                depth = (ldepth <= rdepth) ? (ldepth + 1) : (rdepth + 1);
           }
    
           return depth;
       }
    }
};

int main()
{
	
	
}

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
    int maxDepth(TreeNode* root) {
       int depth = 0;
       if(root == NULL)
       {
            return 0;
       }else
       {
           int ldepth = maxDepth(root->left);
           int rdepth = maxDepth(root->right);
           
           depth = (ldepth > rdepth) ? (ldepth + 1) : (rdepth + 1);
           return depth;
       }
    }
};



int main()
{
	
}

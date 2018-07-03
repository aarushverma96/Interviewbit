/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int height(TreeNode* root)
{
  if(root==NULL)
  {
    return 0;
  }
  return 1+max(height(root->left),height(root->right));
}
int Solution::isBalanced(TreeNode* A) 
{
  if(A==NULL)
  {
    return 1;
  }

  int lh=height(A->left);
  int rh=height(A->right);

  int l=isBalanced(A->left);
  int r=isBalanced(A->right);

  if(abs(lh-rh)<=1 && (l&&r))
  {
    return 1;
  }

  return 0;


}

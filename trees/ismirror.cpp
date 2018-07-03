/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool isMirror(TreeNode* A,TreeNode* B)
{

  if(A==NULL && B==NULL)
  {
    return true;
  }

  if(A && B && A->val==B->val)
  {
    return isMirror(A->left,B->right) && isMirror(A->right,B->left);
  }
  retrn false

}

int Solution::isSymmetric(TreeNode* A)
{

  if(isMirror(A,A))
  {
    return 1;
  }
  return 0;

}

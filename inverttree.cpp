/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 void swap(Tree)
TreeNode* Solution::invertTree(TreeNode* A)
{

  if(A==NULL)
  {
    return NULL;
  }

  queue<TreeNode*> q;

  q.push(A);

  while(!q.empty())
  {
    TreeNode* temp;
    temp=q.front();
    q.pop();

    swap(temp->left,temp->right);

    if(temp->left)
    {
      q.push(temp->left);
    }
    if(temp->right)
    {
      q.push(temp->right);
    }
  }

  return A;



}

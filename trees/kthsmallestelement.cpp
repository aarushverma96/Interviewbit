/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


int Solution::kthsmallest(TreeNode* A, int B)
{

  vector<int> sol;
  stack<TreeNode*> s;
  TreeNode* curr=A;
  s.push(curr);

  while(!s.empty())
  {
    if(curr==NULL)
    {
      curr=s.top();
      sol.push_back(curr->val);
      s.pop();

      curr=curr->right;
      if(curr!=NULL)
      {
        s.push_back(curr);
        curr=curr->left;
      }
    }
    else
    {
      s.push_back(curr);
      curr=curr->left;
    }






  }

  return sol[B-1];

}

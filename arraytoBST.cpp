/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* construct(vector<int> &A,int start,int end)
{

  if(start>end)
  {
    return NULL;
  }

  int middle=(end-start)/2;

  TreeNode* node=new TreeNode(A[middle]);

  node->left=construct(A,start,middle-1);
  node->right=construct(A,middle+1,end);

  return node;


}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A)
{

  return construct(A,0,A.size()-1);

}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int findMaxIn(vector<int> &A,int start,int end)
 {
   int maxe=INT_MIN;
   int res;
   for (size_t i = start; i <= end; i++)
   {
     if(A[i]>maxe)
     {
       maxe=A[i];
       res=i;
     }
   }

   return i;

 }

TreeNode* construct(vector<int> &A,int start,int end)
{

  if (start>end)
  {
    return NULL;
  }

  int maxIn=findMaxIn(A);

  TreeNode* node=new TreeNode(A[maxIn]);

  node->left=construct(A,start,maxIn-1);
  node->right=construct(A,maxIn+1,end);

  return root;


}


TreeNode* Solution::buildTree(vector<int> &A)
{

  int start=0;
  int end=A.size()-1;

  return construct(A,start,end);

}

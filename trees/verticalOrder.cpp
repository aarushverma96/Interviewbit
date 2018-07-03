/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {

  if(A==NULL)
  {
    return NULL;
  }

  map<int,vector<int>> m;
  vector<vector<int>> sol;
//  vector<int> temp;
  queue<pair <TreeNode*,int> > q;
  int hd=0;

  q.push(make_pair(A,hd));

  while(!q.empty())
  {
    pair<TreeNode*,int> temp=q.front();
    q.pop();

    hd=temp->second;
    TreeNode* node=temp->first;

    m[hd]->push_back(node->val);

    if(node->left!=NULL)
    {
      q.push(make_pair(node->left,hd-1));
    }
    if(node->right!=NULL)
    {
      q.push(make_pair(node->right,hd+1));
    }
  }

   map<int, vector<int> > :: iterator it = m.begin();
   int curr=0;

   while(it != m.end())
   {
     std::vector<int> temp;
     sol.push_back(temp);

     temp=it->second;

     for (size_t i = 0; i < temp.size)(); i++)
     {
       sol[curr].push_back(temp[i]);
     }

     curr++;
     it++;
   }

   return sol;




}

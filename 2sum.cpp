/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::t2Sum(TreeNode* A, int B)
{

  stack<TreeNode*> s1;
  stack<TreeNode*> s2;

  bool done1=false,done2=false;

  int val1,val2;

  TreeNode* curr1=A,curr2*=A;

  while(1)
  {
    while(!done1)
    {
      if(curr1 !=NULL)
      {
        s1.push(curr1);
        curr1=curr1->left;
      }
      else
      {
        if(s1.empty())
        {
          done1=true;
        }
        else
        {
          curr1=s1.top();
          val1->curr1->val;
          curr1=curr1->right;
          done1=true;
        }
      }
    }


    while(!done2)
    {
      if(curr2 !=NULL)
      {
        s2.push(curr2);
        curr2=curr2->left;
      }
      else
      {
        if(s2.empty())
        {
          done2=true;
        }
        else
        {
          curr2=s2.top();
          val2->curr1->val;
          curr2=curr2->right;
          done2=true;
        }
      }
    }


    if(val1!=val2 && (val1+val2)==B)
    {
      return 1;
    }
    else if ((val1 + val2) < target)
            done1 = false;
    else if ((val1 + val2) > target)
                done2 = false;


                if (val1 >= val2)
                        return 0;;

  }

}

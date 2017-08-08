/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int length(ListNode* A)
{
	ListNode* temp ;
	temp=A;

	int count=0;

	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}

	return count;
}


ListNode* reverse(ListNode* A)
{
	struct ListNode* nex;
    struct ListNode* prev;
	struct ListNode* curr;


	prev=NULL;
	curr=A;
	

	while(curr!=NULL)
	{
		nex=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nex;
	}

	A=prev;

	return A;
}


int Solution::lPalin(ListNode* A) {


	int lenA=length(A);
	ListNode* rev;

	rev=A;

	for (int i = 0; i < lenA/2; ++i)
	{
		rev=rev->next;
	}

	rev=reverse(rev);

	for (int i = 0; i < lenA/2; ++i)
	{
		if(A->val!=rev->val)
		{
			return 0;
		}
		A=A->next;
		rev=rev->next;
	}

	return 1;


}

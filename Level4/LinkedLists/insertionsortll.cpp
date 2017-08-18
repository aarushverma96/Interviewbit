/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode *head,*ta;

	ta=A;
	head=NULL;


	while(ta!=NULL)
	{
		ListNode *nN(ta->val);

		if(head==NULL)//list is empty
		{
			head=nN;
		}
		else
		{
			if(head->val>nN->val)//insert at the begginnig
			{
				nN->next=head;
				head=nN;
			}
			else
			{
				ListNode *t1,*t2;
				t1=head;
				t2=head->next;

				while(t2!=NULL && t2->val<nN->val)
				{
					t1=t2;
					t2=t2->next;
				}

				if(t2==NULL)
				{
					t1->next=nN;
				}
				else
				{
					t1->next=nN;
					nN->next=t2;
				}
			}
		}
	}


	return head;



}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode *curr1,*curr2,*nex,*prev;
	prev=NULL;
	curr1=A;
	curr2=curr1->next;
	nex=curr2->next;

	curr1->next=nex;
	curr2->next=curr1;

	A=curr2;

	prev=curr1;
	curr1=curr1->next;

	while(curr1!=NULL)
	{
		curr2=curr1->next;
		nex=curr2->next;

		curr1->next=nex;
		curr2->next=curr1;
		prev->next=curr2;

		prev=curr1;
		curr1=curr1->next;
	}

	return A;


}

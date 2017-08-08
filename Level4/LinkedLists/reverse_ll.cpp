/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	struct ListNode* next;
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

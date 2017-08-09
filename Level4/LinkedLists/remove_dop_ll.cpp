/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode* temp1;
	ListNode* temp2;

	temp1=A;

	while(temp1!=NULL)
	{
		temp2=temp1->next;

		if(temp1->val==temp2->val)
		{
			temp1->next=temp2->next;
		}

		temp1=temp1->next;
	}

	return A;

}

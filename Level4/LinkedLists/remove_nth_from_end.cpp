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


ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode* del;
	ListNode* prev;

	del=A;
	prev=NULL;

	int len=length(A);

	if(B>len || B==len)
	{
		ListNode* temp=A;
		A=A->next;
		free(temp);
		return A;
	}

	int count=len-B;

	for (int i = 0; i < count; ++i)
	{
		prev=del;
		del=del->next;
	}


	prev->next=del->next;
	free(del);

	return A;

}

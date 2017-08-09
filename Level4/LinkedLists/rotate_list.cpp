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




ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode* curr;
	ListNode* prev;

	curr=A;
	prev=NULL;
	int len=length(A);

	int rot=B%len;

	if(rot==0)
	{
		return A;
	}

	int count=len-rot;

	for (int i = 0; i < count; ++i)
	{
		prev=curr;
		curr=curr->next;
	}

	while(curr->next!=NULL)
	{
		curr=curr->next;
	}

	curr->next=A;
	A=prev->next;
	prev->next=NULL;

	return A;

}

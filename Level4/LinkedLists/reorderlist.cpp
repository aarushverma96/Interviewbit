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


ListNode* Solution::reorderList(ListNode* A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details



	int lenA=length(A);

	if(lenA<=2)
	{
		return A;
	}

	ListNode *curr,*ele,*prev;

	curr=A;
	ele=A;
	prev=NULL;

	

	for (int i = 0; i < lenA/2; ++i)
	{
		ele=A;
		prev=NULL;

		while(ele->next!=NULL) 
		{
			prev=ele;
			ele=ele->next;
		}
		prev->next=NULL;

		ele->next=curr->next;
		curr->next=ele;

		curr=curr->next;
		curr=curr->next;

	}

	return A;


}

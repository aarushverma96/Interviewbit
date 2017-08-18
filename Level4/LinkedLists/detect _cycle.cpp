/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	ListNode *slowp,*fastp;

	slowp=A;
	fastp=A;

	while(slowp && fastp && fastp->next)
	{
		slowp=slowp->next;
		fastp=fastp->next->next;

		if(slowp==fastp)
		{
			break;
		}	
	}

	if(fastp->next==NULL)
	{
		return NULL;
	}

	slowp=A;

	while(slowp!=fastp)
	{
		slowp=slowp->next;
		fastp=fastp->next;
	}

	return fastp;

}

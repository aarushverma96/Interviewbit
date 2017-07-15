


int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	int low=0,high=A.size()-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(A[mid]==B)
		{
			return mid;
		}
		else if (A[mid]<=A[high])
		{
			if(B>A[mid] && B<=A[high])
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
		else
		{
			if(A[low]<B && B<A[mid])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}

	return -1;


}

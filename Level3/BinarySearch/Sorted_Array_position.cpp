int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	int low=0,high=A.size()-1,result=-1;

	if(B<A[low])
	{
		return 0;
	}

	if(B>A[high])
	{
		return A.size();
	}



	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(A[mid]==B)
		{
			return mid;
		}
		else if(A[mid]<B)
		{
			low= mid+1;
		}
		else
		{
			result=high;
			high = mid-1;
			
		}
	}

	int mid=(low+high)/2;
	if(low>high)
	{
		if(B>A[mid])
		{
			return mid+1;
		}
		if(B<A[mid])
		{
			return mid;
		}
	}

	if(result==-1)
	{
		return A.size();
	}

	return result;

}

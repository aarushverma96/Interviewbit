int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	long long int start=0,end=A,ans;

	while(start<=end)
	{
		long long int mid=(start+end)/2;
		if(mid*mid==A)
		{
			return mid;
		}


		if(mid*mid<A)
		{
			start=mid+1;
			ans=mid;
		}
		else
		{
			end=mid-1;
		}

	}

	return ans;


}


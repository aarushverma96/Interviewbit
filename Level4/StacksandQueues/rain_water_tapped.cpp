int Solution::trap(const vector<int> &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int lo=0,hi=A.size()-1;

	int left=0,right=0;

	int result=0;

	while(lo<=hi)
	{
		
		if(A[lo] < A[hi])
        {
            if(A[lo] > left)
            // update max in left
            left = A[lo];
            else
            // water on curr element = max - curr
            result += left - A[lo];
            lo++;
        }
        else
        {
        	if(A[hi] > right)
            // update right maximum
            right = A[hi];
            else
            result += right - A[hi];
            hi--;
        }
	}


	return result;


}

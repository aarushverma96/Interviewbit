int Solution::maxArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i=0,j=A.size()-1;

	int ans=0;

	while(i<A.size())
	{
		int area;

		if(A[i]<A[j])
		{
			area=(j-i)*(A[i]);
			i++;
		}
		else if(A[i]>A[j])
		{
			area=(j-i)*(A[j]);
			j--;
		}

		if(area>ans)
		{
			ans=area;
		}


		if(i==j)
		{
			break;
		}

	}

	return ans;


}

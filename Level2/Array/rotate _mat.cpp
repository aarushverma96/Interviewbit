void Solution::rotate(vector<vector<int> > &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	
	int i,j;

	for(i=0;i<A[0].size();i++)
	{
		for(j=i;j<A[0].size();j++)
		{
			swap(A[i][j],A[j][i]);
		}
	}

	for(i=0;i<A[0].size();i++)
	{
		reverse(A[i].begin(), A[i].end());
	}

}

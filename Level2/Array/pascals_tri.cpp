vector<vector<int> > Solution::generate(int A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	vector<vector<int>> ans;

	if(A==0)
	{
		return ans;
	}

	int i,j;

	std::vector<int> row1={1};
	ans.push_back(row1);
	if(A==1)
	{
		return ans;
	}
	std::vector<int> row2={1,1};
	ans.push_back(row2);
	if(A==2)
	{
		return ans;
	}

	
	

	for(i=2;i<A;i++)
	{
		std::vector<int> rowi;
		rowi.push_back(1);
		
		for(j=1;j<i;j++)
		{
			rowi.push_back(ans[i-1][j-1]+ans[i-1][j]);
		}

		rowi.push_back(1);

		ans.push_back(rowi);
	}



	

	return ans;
	


}

vector<vector<int> > Solution::prettyPrint(int A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	vector<vector<int>> v ;
	int n=(A*2)-1;

	for(int i=0;i<=n/2;i++)
	{
		vector<int> temp;

		for(int j=0;j<=n/2;j++)
		{
			int val=A-min(i,j);
			temp.push_back(val);
		}

		v.push_back(temp);

		for(int j=n/2-1;j>=0;--j)
		{
			int val=v[i][j];
			v[i].push_back(val);
		}
	}


	for(int k=n/2-1;k>=0;k--)
		{
			v.push_back(v[k]);
		}

	return v;


	
}

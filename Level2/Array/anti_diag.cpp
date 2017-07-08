vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

	int i,j;

	vector<vector<int>> ans;

	for(i=0;i<2*A[0].size()-1;i++)
	{
		std::vector<int> rowi;

		for(int k=0,j=i;k<2*A[0].size(),j>=0;k++,j--)
		{
			if(k<A.size()&&j>=0&&j<A.size())
			{
				rowi.push_back(A[k][j]);
			}
		}

		ans.push_back(rowi);
	}

	return ans;
}

int Solution::solve(vector<int> &A) {

	sort(A.begin(),A.end());

	int i;

	for(i=0;i<=A.size();i++)
	{
		if(i!=A.size()-1)
		{
			if(A[i]==A[i+1])
			{
				continue;
			}
		}
		
		if(A[i]==A.size()-(i+1))
		{
			return 1;
		}
	}

	return -1;

	

}

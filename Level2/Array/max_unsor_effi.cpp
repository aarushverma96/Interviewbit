vector<int> Solution::subUnsort(vector<int> &A) {

	std::vector<int> ans;

	int s,e;

	int i;

	for(s=0;s<A.size()-1;s++)
	{
		if(A[s]>A[s+1])
		{
			break;
		}
	}

	if(s==A.size()-1)
	{
		ans.push_back(-1);
		return ans;
	}

	for(e=A.size()-1;e>0;e--)
	{
		if(A[e]<A[e-1])
		{
			
			break;
		}
	}

	int maxU=A[s],minU=A[s];

	for(i=s;i<=e;i++)
	{
		maxU=max(maxU,A[i]);
		minU=min(minU,A[i]);
	}

	for(i=0;i<s;i++)
	{
		if(A[i]>minU)
		{
			s=i;
			break;
		}
	}

	for(i=A.size()-1;i>=e+1;i--)
	{
		if(A[i]<maxU)
		{
			e=i;
			break;
		}
	}

	ans.push_back(s);
	ans.push_back(e);

	return ans;

}
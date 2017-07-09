vector<int> Solution::subUnsort(vector<int> &A) {

	std::vector<int> copy(A.size());
	std::vector<int> ans;

	int i;

	for(i=0;i<A.size();i++)
	{
		copy[i]=A[i];
	}

	sort(copy.begin(),copy.end());

	int l=INT_MAX,r=INT_MIN;
	bool flag=true;

	for(i=0;i<A.size();i++)
	{
		if(copy[i]!=A[i])
		{
			l=min(i,l);
			flag=false;
		}
	}

	if(flag)
	{
		ans.push_back(-1);
		return ans;
	}

	for(i=A.size()-1;i>=0;i--)
	{
		if(copy[i]!=A[i])
		{
			r=max(i,r);
		}
	}

	


	ans.push_back(l);
	ans.push_back(r);

	return ans;


}

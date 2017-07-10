
vector<int> Solution::findPerm(const string A, int B) {

	std::vector<int> ans;

	int max=B,min=1;

	int i;
	for(i=0;i<A.size();i++)
	{
		if(A[i]=='I')
		{
			ans.push_back(min);
			min++;
		}
		else
		{
			ans.push_back(max);
			max--;
		}
	}

	ans.push_back(min);

	return ans;
}

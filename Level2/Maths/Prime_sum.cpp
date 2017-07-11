vector<int> Solution::primesum(int A) 
{

	std::vector<bool> v(A+1);
	std::vector<int> ans;
	int i,j;
	for(i=0;i<v.size();i++)
	{
		v[i]=true;
	}
	v[0]=false;
	v[1]=false;
	for(i=2;i<=sqrt(A);i++)
	{
		for(j=2;i*j<=A;j++)
		{
			v[i*j]=false;
		}
	}

	for(i=0;i<A;i++)
	{
		if(v[i]&&v[A-i])
		{
			ans.push_back(i);
			ans.push_back(A-i);
			return ans;

		}
	}
}

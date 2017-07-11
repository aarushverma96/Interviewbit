vector<int> Solution::sieve(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	std::vector<int> v(A+1);
	std::vector<int> ans;

	int i,j;

	for(i=0;i<v.size();i++)
	{
		v[i]=1;
	}

	v[0]=0;
	v[1]=0;

	for(i=2;i<=sqrt(A);i++)
	{
		for(j=2;i*j<=A;j++)
		{
			v[i*j]=0;
		}
	}

	for(i=0;i<v.size();i++)
	{
		if(v[i]==1)
		{
			ans.push_back(i);
		}
	}

	return ans;

}
	
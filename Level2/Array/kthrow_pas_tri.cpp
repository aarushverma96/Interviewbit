vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int k=A;
	int i;

	std::vector<int> ans(A+1);

	ans[0]=(1);
	ans[A]=1;

	for(i=1;i<=k/2;i++)
	{
		ans[i]=ans[i-1]*((k-i+1)/i);
		ans[k-i]=ans[i];
	}

	return ans;


}

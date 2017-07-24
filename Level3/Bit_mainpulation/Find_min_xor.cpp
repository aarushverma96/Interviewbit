int Solution::findMinXor(vector<int> &A) {

	sort(A.begin(), A.end());

	int ans=INT_MAX;

	for (int i = 1; i < A.size(); ++i)
	{
		ans= min(ans,(A[i-1]^A[i]));
	}

	return ans;


}

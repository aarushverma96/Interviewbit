
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

	int i=0,j=0,k=0;


	int ans=INT_MAX;

	while(i<A.size() && j<B.size() && k<C.size()) 
	{
		int maximum=max( A[i] , max(B[j],C[k]) );
		int minimum=min( A[i] , min(B[j],C[k]) );

		int diff=maximum-minimum;

		if(diff<ans)
		{
			ans=diff;
		}

		if(ans==0)
		{
			break;
		}

		if(A[i]==minimum)
		{
			i++;
		}
		else if(B[i]==minimum)
		{
			j++;
		}
		else
		{
			k++;
		}
	}

	return ans;


}
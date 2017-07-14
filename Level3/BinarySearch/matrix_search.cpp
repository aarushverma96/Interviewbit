
int binary_search(vector<int> A,int B)
{
	int low=0,high=A.size()-1,result=0;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(A[mid]==B)
		{
			return 1;
		}
		else if(A[mid]<B)
		{
			low=mid+1;
		}
		else if(A[mid]>B)
		{
			high = mid-1;
		}
	}
	return 0;
}


int Solution::searchMatrix(vector<vector<int> > &A, int B) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details



	for(int i=0;i<A.size();i++)
	{
		if((A[i][0] <= B) && (A[i][A[0].size()-1]  >= B))
		{
			int ans=binary_search(A[i],B);

			if(ans)
			{
				return ans;
			}
			else
			{
				return 0;
			}
		}
		
	}


	return 0;
	
}

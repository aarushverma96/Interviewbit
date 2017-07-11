void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	int i,j;
	int r=-1,c=-1;

	for(i=0;i<A.size();i++)
	{

		for(j=0;j<A[0].size();j++)
		{
			if(j==c)
			{
				continue;
			}
			if(A[i][j]==0)
			{
				for(int k=0;k<A[i].size();k++)
				{
					A[i][k]=0;
				}
				for(int k=0;k<A.size();k++)
				{
					A[k][j]=0;
				}
				r=i;
				c=j;
			}
		}
	}



}

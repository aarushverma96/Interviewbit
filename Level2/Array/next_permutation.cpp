
void swapA(int num,vector<int>& A,int i)
{
	int min =A[i];
	int j=i,index=i;

	for(j=i;j<A.size();j++)
	{
		if(min>A[j]&&A[j]>A[num])
		{
			index=j;
			min=A[j];
		}
	}

	swap(A[index],A[num]);

}




void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	bool flag=true;


	if(A.size()==0||A.size()==1)
	{
		return;
	}

	for(int i=A.size()-1;i>0;i--)
	{
		if(A[i]>A[i-1])
		{
			swapA(i-1,A,i);
			sort(A.begin()+i, A.end());
			flag=false;
			break;
		}
	}

	if(flag)
	{
		sort(A.begin(), A.end());
	}


}

void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int mid=0;
	int high=A.size()-1;
	int low=0;


	while(mid<=high)
	{
		if(A[mid]==0)
		{
			swap(A[low],A[mid]);
			low++;
			mid++;
		}
		else if(A[mid]==1)
		{
			mid++;
		}
		else if(A[mid]==2)
		{
			swap(A[mid],A[high]);
		
			high--;
		}
	}



}

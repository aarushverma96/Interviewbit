int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i=0,j=1;


	while(i<A.size())
	{
		j=i+1;
		while(A[i]==A[j])
		{
			A.erase(A.begin()+j);
		}
		i++;
	}

	int length=A.size();

	return length;

}

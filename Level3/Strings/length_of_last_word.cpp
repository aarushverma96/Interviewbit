int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i=A.length()-1;

	while(isspace(A[i]))
	{
		i--;
	}

	int count=0;

	while(!isspace(A[i])&&i>=0)
	{
		count ++;
		i--;
	}

	return count;
}
 
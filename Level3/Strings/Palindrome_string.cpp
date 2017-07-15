int Solution::isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i=0,j=A.length()-1;
	int flag =1;

	while(i<A.length()&&j>=0)
	{
		
		if(isalnum(A[i])&&isalnum(A[j]))
		{
			if(tolower(A[i])!=tolower(A[j]))
			{
				flag =0;
			}
			i++;
			j--;
		}
		else
		{
			if(!isalnum(A[i]))
			{
				i++;
			}
			else if(!isalnum(A[j]))
			{
				j--;
			}
		}

	}

	return flag;


}

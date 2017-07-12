int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int n=A;
		int trail=0;
		i=1;
	do
	{	
		trail += A/pow(5,i);
		n=n/5;
		i++;
	}while(n>=1);

	return trail;


}

unsigned int Solution::reverse(unsigned int A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	
	unsigned int n=A;

	unsigned int rev=0;

	int no_bits = sizeof(A)*8;



    for (int i = 0; i < no_bits; ++i)
    {
    	if(A & (1 << i))
    	{
    		rev |= (1 << ((no_bits-1)-i));
    	}
    }


    return  rev;

	
}

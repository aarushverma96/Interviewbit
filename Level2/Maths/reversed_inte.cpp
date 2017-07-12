int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	


	int remainder;
	long long reversedNumber=0;



	
    while(A != 0)
    {
        remainder = A%10;
        reversedNumber = reversedNumber*10 + remainder;
   
        A /= 10;
    }


    if(reversedNumber > INT_MAX || reversedNumber < INT_MIN)
		return 0;
    


	return reversedNumber;

}

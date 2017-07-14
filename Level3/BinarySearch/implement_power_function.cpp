

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more 

    long long int res=1;
    int chech =0;

    if(x == 0){
        return 0;
    }
    if(n == 0){
        return 1;
}

if(x < 0){
        x = abs(x);
        if(n%2 != 0){
            check = 1;
        }
}

    long long int temp=x%d;

    while(n>0)
    {
    	if(n&1)
    	{
    		res=(res*temp)%d;
    	}

    	n=n>>1;
    	temp=(temp*temp)%d;
    }

    if(check==1)
    {
    	return d-(int)res;
    }
	
   return (int)res;

}


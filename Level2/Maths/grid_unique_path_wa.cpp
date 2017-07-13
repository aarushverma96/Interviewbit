

long long int fact(long long int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}


long long int combi(int n,int r)
{
	long long int deno=fact(r)*fact(n-r);
	long long int ans=  fact(n)/(deno);

	return ans;
}


int Solution::uniquePaths(int A, int B) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more det


    if(A==0 || B==0)
    {
    	return 0;
    }


	if(A==1 || B==1)
	{
		return 1;
	}

    int min1=min(A,B);

    int n=A+B-2;
    int d=min1;
    long long int res;

    res=combi(n,d);

    return res;


}

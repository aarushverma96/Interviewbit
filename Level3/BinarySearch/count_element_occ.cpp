int sfl(vector<int> A,int B,bool sf)
{
	int l=0,h=A.size(),result=-1;


    while(l<=h)
    {
    	int mid=(l+h)/2;
    	if(A[mid]==B)
    	{
    		result=mid;
    		if(sf)
    		{
    			h=mid-1;
    		}
    		else
    		{
    			l=mid+1;
    		}
    	}
    	else if(B<A[mid])
    	{
    		h =mid-1;
    	}
    	else
    	{
    		l=mid+1;
    	}
    }
    return result;
}


int Solution::findCount(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details



	int firstocc=sfl(A,B,true);
	

	if(firstocc==-1)
	{
		return 0;
	}
	else
	{
		int lastocc=sfl(A,B,false);
		return lastocc-firstocc+1;
	}

	
    


}

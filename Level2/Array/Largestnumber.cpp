
bool myfunc(string x,string y)
{
	

	return x+y>y+x;
}

string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    std::vector<string> copy;

    int i;
   	bool flag=true;

    for(i=0;i<A.size();i++)
    {
    	copy.push_back(A[i]);
    	if(A[i]!=0)
    	{
    		flag =false;
    	}
    }

    if(flag)
    {
    	return "0";
    }

    sort(copy.begin(),copy.end(),myfunc);

    string ans=NULL;

    for(i=0;i<copy.size();i++)
    {
    	ans.append(copy[i]);
    }

    return ans;

}

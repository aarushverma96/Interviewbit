bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int i,j;

    if(A<0)
    {
    	return false;
    }

    string s=to_string(A);

    if(s.size()==1)
    {
    	return true;
    }
    for(i=0,j=s.size()-1;i<=s.size()/2,j>=s.size()/2;i++,j--)
    {
    	if(s[i]!=s[j])
    	{
    		return false;
    	}
    }

    return true;

}

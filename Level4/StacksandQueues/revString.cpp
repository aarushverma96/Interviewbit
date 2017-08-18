string Solution::reverseString(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	if(A.length()==1 || A.length()==0)
	{
		return A;
	}

    stack<char> s;
    string ans;


    for (int i = 0; i < A.length(); ++i)
    {
    	s.push(A[i]);
    }

    while(!s.empty())
    {
    	ans.append(s.top());
    	s.pop();
    }

    return ans;


}

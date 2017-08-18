int Solution::isValid(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	stack<char> s;

	for (int i = 0; i < A.length()-1; ++i)
	{
		if(A[i]=='{' || A[i]=='[' || A[i]=='(')
		{
			s.push(A[i]);
		}
		else
		{
			char temp=s.top();

			if((A[i]==')' && temp=='(') || (A[i]=='}' && temp=='{') || A[i]==']' && temp=='[')
			{
				s.pop();
			}
			else
			{
				return 0;
			}
		}
	}

	if(s.empty())
	{
		return 1;
	}
	else
	{
		return 0;
	}


}

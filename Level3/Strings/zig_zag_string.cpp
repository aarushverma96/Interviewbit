string Solution::convert(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	if(B==1)
	{
		return A;
	}


	std::vector<string> v(B);
	bool down=1;
	int row=0;

	for (int i = 0; i < A.length(); ++i)
	{
		v[row].push_back(A[i]);
		if(row==B-1)
		{
			down=false;
		}
		else if(row==0)
		{
			down=true;
		}
		if(down)
		{
			row++;
		}
		else
		{
			row--;
		}
	}

	

	string ans;

	for (int i = 0; i < B; ++i)
	{
		ans += v[i];
	}

	return ans;

}

vector<string> Solution::prettyJSON(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	std::vector<string> ans;

	stack<char> s;

	string row;

	for (int i = 0; i < A.length()-1; ++i)
	{
		if(A[i]=='{' || A[i]=='[')
		{
			for(int j=0;j<s.size();j++)
			{
				row += '\t';
			}
			s.push(A[i]);
			row+=A[i];
			ans.push_back(row);
			row="";	
			continue;
		}
		else if(A[i]=='}' || A[i]==']')
		{
			s.pop();
			for(int j=0;j<s.size();j++)
			{
				row += '\t';
			}
			row += A[i];
			ans.push_back(row);
			row="";	
			continue;
		}

		for(int j=0;j<s.size();j++)
			{
				row += '\t';
			}

		while(A[i]!=',' && A[i]!='{' && A[i]!='[' && i<A.length()-1)
		{
			row+=A[i];
			i++;
		}
		if(A[i]==',')
		{
			row+=A[i];
		}
		else
		{
			row="";
			continue;
		}

		ans.push_back(row);
		row="";	
	}

	row=A[A.length()-1];

	ans.push_back(row);

	return ans;

}

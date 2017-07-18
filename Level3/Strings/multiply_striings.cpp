string Solution::multiply(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	string ans;
	string prev="0";
	int s1=0,s2=0;
	std::vector<int> res((A.length()+B.length()),0);

	for (int i = B.length()-1 ; i >= 0; --i)
	{
		
		int carry=0;
		int n1=B[i]-'0';
		
		
		for(int j=A.length()-1; j >= 0; --j )
		{
			int num2=A[j]-'0';

			int mul=n1*num2 + carry + res[s1+s2];

			carry=mul/10;

			res[s1+s2]=mul%10;

			s2++;
		}

		if(carry>0)
		{
			res[s1+s2]+=carry;
		}
		s1++;
		
	}

	int i=res.size()-1;
	
	while(i>=0&&res[i]==0)
	{
		i--;
	}

	while(i>=0)
	{
		ans+= to_string(res[i--]);
	}
	return ans;


}

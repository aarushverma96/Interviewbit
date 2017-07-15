
string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	string ans="";

	if(A==1)
	{
		return "1";
	}
	else if(A==2)
	{
		return "11";
	}
	else
	{
		string res=countAndSay(A-1);
		int i=0;                           
		while(i<res.size()-1)
		{
			int count=1;
			char say=res[i];
			while(res[i]==res[i+1])
			{
				count++;
				i++;
			}
			ans.append(to_string(count));
			ans.push_back(say);
			i++;
		}
	}
	return ans;
}
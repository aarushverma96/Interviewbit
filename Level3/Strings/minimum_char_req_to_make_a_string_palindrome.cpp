
vector<int> computeLPSArray(string A)
{
	int M=A.length();
	vector<int> lps(M);

	int len=0;
	int i=1;
	lps[0]=0;

	while(i<M)
	{
		if(A[len]==A[i])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=len;
				i++;
			}
		}
	}

	return lps;
}


int Solution::solve(string A) {

	string concate;
	concate.append(A);
	concate.append("$");
	reverse(A.begin(), A.end());
	concate.append(A);

	std::vector<int> lps = computeLPSArray(concate);

	return (A.length()-lps.back());



}

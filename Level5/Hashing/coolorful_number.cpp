int Solution::colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	unorderedmap<long long ,bool>umap;
	char ct[20];
	sprintf(ct,"%d",A);

	for (int i = 0; i < strlen(ct); ++i)
	{
		long long mul=1;

		for (int j = i; j < strlen(ct); ++j)
		{
			mul *= (long long)(ct[j]-'0');
			if(umap.find(mul)!=umap.end())
			{
				return 0;
			}
			umap[mul]=true;
		}
	}

	return 1;



}

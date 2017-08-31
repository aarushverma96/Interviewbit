vector<vector<int> > Solution::anagrams(const vector<string> &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	std::vector<vector<int>> ans;
	unordered_map< string , vector<int> > hm;

	for (int i = 0; i < A.size(); ++i)
	{
		string temp=A[i];
		sort(temp.begin(), temp.end());
		hm[temp].push_back(i+1);
	}

	auto it=hm.begin();

	while(it!=hm.end())
	{
		ans.push_back(it->second);
		it++;
	}

	return ans;


}

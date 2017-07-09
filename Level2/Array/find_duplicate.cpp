int Solution::repeatedNumber(const vector<int> &A) {
    
	int i;
	std::vector<int> count(A.size()-1);

	for(i=0;i<A.size();i++)
	{
		count[A[i]-1]++;
	}

	for(i=0;i<count.size();i++)
	{
		if(count[i]>1)
		{
			return i+1;
		}
	}

	return -1;

}

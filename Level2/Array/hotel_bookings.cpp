bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

	sort(arrive.begin(),arrive.end());
	sort(depart.begin(),depart.end());

	int i=1,j=0,room=1;

	

	while(i<arrive.size() && j<depart.size())
	{
		if(arrive[i]<depart[j])
		{
			room++;
			i++;
			if(room>K)
			{
				return false;
			}
		}
		else
		{
			room--;
			j++;
		}
	}

	return true;

 }

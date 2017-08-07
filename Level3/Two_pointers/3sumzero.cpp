vector<vector<int> > Solution::threeSum(vector<int> &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	sort(A.begin(),A.end());

	std::vector<std::vector<int>> ans;

	if(A.size() < 2)
    {
        return ans;
    }

	long long int i,j,k;

	

	for (i=0;i<A.size()-2;i++)
	{
		j=i+1;
		k=A.size()-1;
		while(j<k)
		{
			if(A[i]+A[j]+A[k]==0)
			{
				std::vector<int> temp;

				temp.push_back(A[i]);
				temp.push_back(A[j]);
				temp.push_back(A[k]);

				ans.push_back(temp);

				while(A[j] == A[j+1])
				{
					j++;

					if(j == A.size())
					{

						break;
					}
				}

				j++;
			}
			else
			{
				if(A[i]+A[j]+A[k]<0)
				{
					 while(A[j] == A[j+1])
					{
						j++;
						if(j == A.size())
						{
							break;
						}
					}
					j++;
				}
				else
				{
					while(A[k] == A[k-1])
					{
						k--;
						if(k == 0)
						{
						 break;
						}
					}
					k--;
				}
			}
		}

		 while(A[i+1] == A[i])
        {
            i++;
            if(i == A.size()-1)
            {
                return ans;
            }
        }
       

	}


	return ans;

}

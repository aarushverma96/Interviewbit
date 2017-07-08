vector<int> Solution::maxset(vector<int> &A) 
{
	 long long int left=0, right=0, leftfinal=0, length=0, lengthfinal=0, rightfinal=-1, sum = INT_MIN, sumfinal=INT_MIN;
	 int i=0;
	 
	 while(i<A.size())
	 {
			 if(A[i]>=0)
			 {
						left = i;
						sum =0;
						length =0;
						
						while(A[i]>=0 && i<A.size())
						{
								sum +=A[i];
								i++;   
						}
						right = i-1;
						
					 if( ( sum>sumfinal ) || ( sum==sumfinal && right - left +1 < lengthfinal ) )
					 {
							 leftfinal = left;
							 rightfinal = right;
							 leftfinal = left + right -1 ;
							 sumfinal = sum;
						}
			 }
			 i++;
			 
		}
			 vector <int> ans;
			 for(int i=leftfinal; i<=rightfinal;i++)
			 {
					 ans.push_back(A[i]);
			 }
			 
			 return ans;
	
}
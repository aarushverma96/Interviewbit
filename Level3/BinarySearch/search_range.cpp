
int sfl(const vector<int>& A,int B,bool sf)
{
	int l=0,h=A.size()-1,result=-1;


	while(l<=h)
	{

		int mid=l+(h-l)/2;
		if(A[mid]==B)
		{
			result=mid;
			if(sf)
			{
				h=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		else if(B<A[mid])
		{
			h =mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return result;
}


vector<int> Solution::searchRange(const vector<int> &A, int B) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	vector<int> ans;
	int firstocc=sfl(A,B,true);
	int secondocc=sfl(A,B,false);
	ans.push_back(firstocc);
	ans.push_back(secondocc);

	return ans;



}

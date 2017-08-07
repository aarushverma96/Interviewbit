int max3(int a,int b,int c)
{
	int max=a;

	if(b>max)
	{
		max=b;
	}

	if(c>max)
	{
		max=c;
	}

	return max;
}

int min3(int a,int b,int c)
{
	int min=a;

	if(b<min)
	{
		min=b;
	}

	if(c<min)
	{
		min=c;
	}

	return min;
}





int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

	int a,b,c;
	int ans=0,ansf=INT_MAX;

	int len=max3(A.size(),B.size(),C.size());

	

	int i=A.size()-1,j=B.size()-1,k=C.size()-1;

	while(len--)
	{

		a=A[i];
		b=B[j];
		c=C[k];

		ans=abs( max3(a,b,c) - min3(a,b,c) );

		if(ans<ansf)
		{
			ansf=ans;
		}

		if(a>b && a>c)
		{
			i--;
		}
		else if(b>a && b>c)
		{
			j--;
		}
		else if(c>a && c>b)
		{
			k--;
		}


	}


	return ansf;



}

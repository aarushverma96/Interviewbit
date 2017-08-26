int Solution::largestRectangleArea(vector<int> &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	if(A.size()==1)
	{
		return A[0];
	}

	stack <int> s;

	int max_area=0;
	int area;
	int tp;


	for (int i = 0; i < A.size(); ++i)
	{
		if(s.empty() || A[s.top()] <= A[i])
		{
			s.push(i);
		}
		else
		{
			 tp=s.top();
			s.pop();
			bool flag=false;
			
			if(s.empty())
			{
				area=A[tp]*i;
			}
			else
			{
				area=A[tp]*(i-s.top()-1);
			}

			if(max_area<area)
			{
				max_area=area;
			}

			
		}

			while (s.empty() == false)
	{
		tp = s.top();
		s.pop();
		area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1);

		if (max_area < area)
			max_area = area;
	}


		return max_area;


}
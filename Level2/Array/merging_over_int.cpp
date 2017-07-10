/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */





bool mycomp(Interval i,Interval j)
{
	return i.start<j.start;
}



vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i;

	std::vector<Interval> ans;

	stack<Interval> s;

	sort(A.begin(), A.end(),mycomp);

	s.push(A[0]);

	for(i=1;i<A.size();i++)
	{
		Interval top =s.top();

		if(top.end>A[i].start&&top.end<A[i].end)
		{
			top.start=min(top.start,A[i].start);
			top.end=max(top.end,A[i].end);
			s.pop();
			s.push(top);
		}
		else if(top.end<A[i].start)
		{
			s.push(A[i]);
		}
	}


	while(!s.empty())
	{
		ans.push_back(s.top());
		s.pop();
	}

	reverse(ans.begin(), ans.end());
	

	return ans;


}

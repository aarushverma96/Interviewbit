/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	std::vector<Interval> ans;

	auto it =intervals.begin();

	for(;it!=intervals.end();++it)
	{
		if(newInterval.end<(*it).start)
		{
			break;
		}
		else if(newInterval.start>(*it).end)
		{
			ans.push_back(*it);
		}
		else
		{
			newInterval.start=min(newInterval.start,(*it).start);
			newInterval.end=max(newInterval.end,(*it).end);
		}
	}

	ans.push_back(newInterval);
	for(;it!=intervals.end();++it)
	{
		ans.push_back(*it);
	}

	return ans;

}

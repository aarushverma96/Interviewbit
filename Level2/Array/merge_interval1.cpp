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

	int i;
	int left=-1,right=-1;
	int nis=newInterval.start,nie=newInterval.end;
	bool lm=false,rm=false;

	for(i=0;i<intervals.size();i++)
	{
		if(nis>intervals[i].start && nis<intervals[i].end)
		{
			left=i;
			lm=true;
		}
		if(nie>intervals[i].start && nie<intervals[i].end)
		{
			right=i;
			rm=true;
		}
		if(lm==false && nis>intervals[i].start && nis>intervals[i].end)
		{
			left=i;
		}
		if(rm==false && nie>intervals[i].start && nie>intervals[i].end)
		{
			right=i;
		}
	}

	


}

int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    std::vector<int> copy(A.size());

    int i;
    
    if(A.size()<2)
    {
        return 0;
    }

    for(i=0;i<A.size();i++)
    {
    	copy[i]=A[i];
    }

    sort(copy.begin(),copy.end());

    int diff = INT_MIN;

    for(i=0;i<copy.size()-1;i++)
    {
    	diff=max(diff,copy[i+1]-copy[i]);
    }

    return diff;
    
    
    
}

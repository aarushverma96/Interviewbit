int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int maxDiff;
    int i,j;

    std::vector<int> Lmin(A.size());
    std::vector<int> Rmax(A.size());

    Lmin[0]=A[0];

    for(i=1;i<A.size();i++)
    {
    	Lmin[i]=min(A[i],Lmin[i-1]);
    }

    Rmax[A.size()-1]=A[A.size()-1];

    for(j<A.size()-2;j>=0;j--)
    {
    	Rmax[j]=max(A[j],Rmax[j-1]);
    }

    i = 0, j = 0, maxDiff = -1;
    while (j < A.size() && i < A.size())
    {
        if (Lmin[i] < Rmax[j])
        {
            maxDiff = max(maxDiff, j-i);
            j = j + 1;
        }
        else
            i = i+1;
    }
 
    return maxDiff;

}

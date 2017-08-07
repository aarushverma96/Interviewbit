
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

	 int diff = INT_MAX;  // Initialize min diff
 
    // Initialize result
    
 
    // Traverse arrays
    int i=0,j=0,k=0;
    while (i < A.size() && j < B.size() && k < C.size())
    {
        // Find minimum and maximum of current three elements
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
 
        // Update result if current diff is less than the min
        // diff so far
        if (maximum-minimum < diff)
        {
            
             diff = maximum - minimum;
        }
 
        // We can't get less than 0 as values are absolute
        if (diff == 0) break;
 
        // Increment index of array with smallest value
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
    }
    
    return diff;


}
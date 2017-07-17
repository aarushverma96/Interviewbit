int makelengtheq(string& A,string& B)
{
	int len1=A.length();
	int len2=B.length();

	if(len1<len2)
	{
		for(int i=0;i<len2-len1;i++)
		{
			A ='0'+A;
			
		}
		return len2;
	}
	else if (len2<len1)
	{
		for (int i = 0; i < len1-len2; ++i)
		{
			B = '0'+B;
		}
	}
	return len1;
}



string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int length=makelengtheq(A,B);

	int sum,carry=0;
	string ans;

	for (int i = length-1; i >= 0; --i)
	{
		int fb=A[i]-'0';
		int sb=B[i]-'0';

		sum=(fb^sb^carry)+'0';
		ans = char(sum)+ans;
		carry=((fb & sb) | (sb & carry) | (carry & fb));
	}

	if(carry)
	{
		ans='1'+ans;
	}


	return ans;


}

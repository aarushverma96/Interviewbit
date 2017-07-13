
int gcd(int A, int B) {
    

	 while ( B != 0) {
        unsigned r = A % B;
        A = B;
        B = r;
    }
    return A;
}





int Solution::cpFact(int A, int B) {





	for (int i = max(A,B); i >= 2; --i)
	{
		if(A%i==0&&gcd(i,B)==1)
		{
			return i;
		}
	}

	return 1;

}

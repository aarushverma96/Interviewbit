bool Solution::isPower(int A) {

	int x,y;

	if(A==1)
	{
		return true;
	}

	for(x=2;x<=sqrt(A);x++)
	{
		y=2;
		int p =pow(x,y);
		while(p<=A&&p>0)
		{
			if(p==A)
			{
				return true;
			}
			y++;
			p=pow(x,y);
		}
	}

	return false;

}

vector<string> Solution::fizzBuzz(int A) {

	int i;

	std::vector<string> ans(A);

	for(i=1;i<=A;i++)
	{
		if(i%3==0&&i%5==0)
		{
			ans[i-1]="FizzBuzz";
			
		}
		else if(i%5==0)
		{
			ans[i-1]="Buzz";
		}
		else if(i%3==0)
		{
			ans[i-1]="Fizz";
		}
		
		else
		{
			ans[i-1]=to_string(i);
			

		}
		
	}

	return ans;

}

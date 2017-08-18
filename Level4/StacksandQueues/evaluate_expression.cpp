


int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	stack<int> s;

	for (int i = 0; i < A.size(); ++i)
	{
		if(A[i]=="+" || A[i]=="-" || A[i]=="/" || A[i]=="*")
		{
			int top1=s.top();
			s.pop();
			int top2=s.top();
			s.pop();
			string sign=A[i];
			if(sign=="+")
			{
				s.push(top2+top1);
			}
			else if(sign=="-")
			{
				s.push(top2-top1);
			}
			else if(sign=="*")
			{
				s.push(top2 * top1);
			}
			else if(sign=="/")
			{
				s.push(top2/top1);
			}
		}
		else
		{
		    int temp = atoi(A[i].c_str()));
			s.push(temp);
		}
	}

	return s.top();





}

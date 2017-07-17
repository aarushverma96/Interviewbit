/*string combination(int n)
{
	if(n==1)
		return "I";
	if(n==2)
		return "II";
	if(n==3)
		return "III";
	if(n==4)
		return "IV";
	if(n==5)
		return "V";
	if(n==6)
		return "VI";
	if(n==7)
		return "VII";
	if(n==8)
		return "VIII";
	if(n==9)
		return "IX";
	if(n==10)
		return "X";
	if(n==20)
		return "XX";
	if(n==30)
		return "XXX";
	if(n==40)
		return "XL";
	if(n==50)
		return "L";
	if(n==60)
		return "LX";
	if(n==70)
		return "LXX";
	if(n==80)
		return "LXXX";
	if(n==90)
		return "XC";
	if(n==100)
		return "I";
	if(n==200)
		return "I";
	if(n==300)
		return "I";
	if(n==400)
		return "I";
	if(n==500)
		return "I";
	if(n==600)
		return "I";
	if(n==700)
		return "I";
	if(n==800)
		return "I";
	if(n==900)
		return "I";
	if(n==1000)
		return "I";
	if(n==2000)
		return "I";
	if(n==3000)
		return "I";

}
*/

string app(char ch,int n)
{
	string a;
	for (int i = 0; i < n; ++i)
	{
		a += ch;
	}
	return a;
}

string app2(char ch,char ch1 ,int n)
{
	string a;
	for (int i = 0; i < n; ++i)
	{
		a += ch;
		a += ch1;
	}
	return a;
}

string Solution::intToRoman(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details\

    string ans;

    while(A!=0)
    {
    	if(A>=1000)
		{
			ans += app('M',A/1000);
			A=A%1000;
		}
		else if(A>=900)
		{
			ans += app2('C','M',A/900);
			A=A%900;
		}
		else if(A>=500)
		{
			ans += app('D',A/500);
			A=A%500;
		}
		else if(A>=400)
		{
			ans += app2('C','D',A/400);
			A=A%400;
		}
		else if(A>=100)
		{
			ans += app('C',A/100);
			A=A%100;
		}
		else if(A>=90)
		{
			ans += app2('X','C',A/90);
			A=A%90;
		}
		else if(A>=50)
		{
			ans += app('L',A/50);
			A=A%50;
		}
		else if(A>=40)
		{
			ans += app2('X','L',A/40);
			A=A%40;
		}
		else if(A>=10)
		{
			ans += app('X',A/10);
			A=A%10;
		}
		else if(A>=9)
		{
			ans += app2('I','X',A/9);
			A=A%9;
		}
		else if(A>=5)
		{
			ans += app('V',A/5);
			A=A%5;
		}
		else if(A>=4)
		{
			ans += app2('I','V',A/4);
			A=A%4;
		}
		else if(A>=1)
		{
			ans += app('I',A/1);
			A=A%1;
		}
    }


    return ans;

	



}

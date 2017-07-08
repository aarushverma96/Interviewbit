#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> X;
	vector<int> Y;


	int i,x1,y1,m,count=0,countt=0;

	X.push_back(-7);
	X.push_back(-13);
	Y.push_back(1);
	Y.push_back(-5);

	vector<int>::iterator it;
    
    if(X.size()!=Y.size()||X.size()<2||Y.size()<2)
    {
        cout<<0;
    }
    
    for(i=0;i<=X.size();i++)
    {
        x1=(X[i+1]-X[i]);
        y1=(Y[i+1]-Y[i]);
        cout<<x1+"  ";
       // cout<<y1;
        if(x1>=y1)
        {
            count=x1;
        }
        else
        {
            count=y1;
        }
        
        countt+=count;
    }

    cout<<countt;
}
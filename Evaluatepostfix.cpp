#include<bits/stdc++.h>
using namespace std;
int stac[1000],top=-1;
void push(int x)
{
	top++;
	stac[top]=x;
	
}
int pop()
{	
	return stac[top--];
}
int main()
{
	string x;
	int len,i,a,b,oper,p;
	cin>>x;
	len=x.size();
	//cout<<len<<endl;
	for(i=0;i<len;i++)
	{
		if(isdigit(x[i]))
		{
			p=x[i]-'0';
			push(p);
		}
		else if(x[i]=='+')
		{
			a=pop();
			b=pop();
			oper=b+a;
			push(oper);
		}
		else if(x[i]=='-')
		{
			a=pop();
			b=pop();
			oper=b-a;
			push(oper);
		}
		else if(x[i]=='*')
		{
			a=pop();
			b=pop();
			oper=b*a;
			push(oper);
		}
		else if(x[i]=='/')
		{
			a=pop();
			b=pop();
			oper=b/a;
			push(oper);
		}
		else if(x[i]=='^')
		{
			a=pop();
			b=pop();
			oper=pow(b,a);
			push(oper);
		}
		else if(x[i]==')')
		{
			cout<<pop()<<endl;
			break;
		}
	}
	return 0;
}



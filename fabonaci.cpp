#include<bits/stdc++.h>
using namespace std;
int s[100];
int c=2,n;
void push(int x,int y)
{
	
	s[c]=x+y;
	c++;
}
int pop()
{
	return s[--c];
	return s[--c];
}
int x,y,m=0;
int fab()
{
	if(c==n)
	{
		x=pop();
		y=pop();
		push(y,m);
		push(m,x);
		push(x,y);
		return 0;
	}
	else
	{
		x=pop();
		y=pop();
		push(y,m);
		push(m,x);
		push(x,y);
		return fab();
	}
}
main()
{
	int i,j;
	s[0]=0;
	s[1]=1;
	cin>>n;
	fab();
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<" ";
		
		
	}
}


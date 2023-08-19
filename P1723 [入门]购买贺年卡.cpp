#include<bits/stdc++.h>
using namespace std;
struct node{
	int a,b;
}t[1005];
int cmp(node a,node b)
{
	return a.a>b.a;
}
int main()
{
	int n,m;int sum=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>t[i].a>>t[i].b;
	}
	sort(t+1,t+1+m,cmp);
	for(int i=m;i>=1;i--)
	{
		if(n>=t[i].b)
		{
			n=n-t[i].b;
			sum=sum+t[i].a*t[i].b;
		}
		else 
		{
			sum=sum+n*t[i].a;
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}

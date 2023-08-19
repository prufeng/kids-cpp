#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n,t=n;
	int b[n+1][n+1];
	int k=1,s=0,p=0;
	while (t!=-1&&t!=0)
	{
		for(int i=k;i<=n-p;i++)
		{
			s++;
			b[k][i]=s;
		}
		for(int i=k+1;i<=n-p;i++)
		{
			s++;
			b[i][n-p]=s;
		}
		for(int i=n-k;i>=k;i--)
		{
			s++;
			b[n-p][i]=s;	
		}
		for(int i=n-k;i>k;i--)
		{
			s++;
			b[i][k]=s;	
		}
		p++;
		k++;
		t=t-2;
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<b[i][j];
			if(j<m)
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	int fj=n;
    for(int i=n;i>=1;i--)
    {
    	int t=n-i;
        for(int j=1;j<=t;j++)
		{
			cout<<" ";
		} 
		for(int z=1;z<=fj;z++)
		{
			cout<<"*";
		}
		cout<<endl;
		fj-=2;
	}	
	fj=3;
	int t=1;
    for(int i=3;i<=n;i+=2)
    {
        for(int j=1;j<=t;j++)
		{
			cout<<" ";
		} 
		for(int z=1;z<=fj;z++)
		{
			cout<<"*";
		}
		cout<<endl;
		fj+=2;
		t--;
	}	
}
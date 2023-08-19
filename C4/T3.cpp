#include <iostream>
#include <iomanip>
using namespace std;

int n;

int main()
{
	cin>>n;
	
	for(int i=1;i<=(n+1)/2;i++)
	{
		for(int j=1;j<=i-1;j++)
			cout<<" ";
		for(int j=1;j<=(n-2*(i-1));j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=2;i<=(n+1)/2;i++)
	{
		for(int j=1;j<=(n+1)/2-i;j++)
			cout<<" ";
		for(int j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
} 
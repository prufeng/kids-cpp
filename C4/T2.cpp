#include <iostream>

using namespace std;

int n,sum=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		if(i%3==2 && i%5==3 && i%7==2)
			sum++;
	cout<<sum<<endl;
	return 0;
} 

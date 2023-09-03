#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	a=0;
//	int i =1;
	for (int i =1;i<=n;i++;){
//		if(i>n)break;
		
		a += i*i;
//		i++;
		
	}  
	cout<<a	;
	


	return 0 ;
}

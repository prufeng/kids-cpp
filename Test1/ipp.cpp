#include<iostream>
using namespace std;
int main(){
	int i=0,j=0;
	
	i++;
	++j;
	cout<<i<<endl //1
	<<j<<endl;  //1
	
	//i#;i=i+1;
	cout<<i++<<endl //1
	//j=j+1;j#
	<<++j<<endl;  //2
	
	cout<<10+(i++)<<endl //12	
	<<10+(++j)<<endl;  //13
	
	 return 0;
}

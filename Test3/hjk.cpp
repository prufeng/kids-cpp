#include<iostream>
using namespace std;
int main(){
	float a;
	int sum;
	sum=0;
	cin >> a;
	for(int a=100.0;a>=0.5;a/2){
		sum++;
	}
	cout << sum;
	return 0;
}

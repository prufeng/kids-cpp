#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int data[105][105],i,j,r1,r2;
	for(i = 0;i < 5;i++){
		for(j = 0;j < 5;j++){
			cin >> data[i][i];
		}
	}
	cin >> r1 >> r2;
	for(i = 0;i< 5;i++)
		swap(data[r1-1][i],data[r2-1][i]);
	for(i = 0;i< 5;i++){
		for(j = 0;j< 5;j++){
			cout << data[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int n, m, a[13][13];
int main() {
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	
	return 0;
}

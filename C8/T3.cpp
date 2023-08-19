#include<iostream>
using namespace std;
int n,m,a[110][110],sum;
int main() {
	cin >> n >>m;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            if (i == 1 || i == n || j == 1 || j == m){
                sum += a[i][j];
            }
        }
    }
    cout << sum;
     return 0;
}
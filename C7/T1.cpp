#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[200][200];
    int i,j,n,m,t;
    
    cin >> n >> m;
    
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    
    for(i = 1;i < n - 1;i++){
        for(j = 1;j < m - 1;j++){
            t = a[i][j];
            if(t > a[i - 1][j] && t > a[i + 1][j] && t > a[i][j - 1] && t > a[i][j + 1]){
                cout << t << endl;
            }
        }
    }
}

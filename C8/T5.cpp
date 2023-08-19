#include<iostream>
using namespace std;
int a[43][43],n,S;
int main() {
    cin >> n >> S;
    
    for(int j = 1; j <= n; j++){
        for(int i = 1; i <= j; i++){
            a[i][j] = S;
            S++;
            if(S == 10){
                S = 1;
            }
        }
    }
    for(int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j++){
            if(a[i][j] == 0){
                cout << " ";
            }
            else cout << a[i][j];
        }
        cout << endl;
    }

     return 0;
}
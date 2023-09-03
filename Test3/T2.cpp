#include <iostream>
using namespace std;
int n, k, a[55][55], ans;
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for(int i = k; i <= n - k + 1; i++) {
        for(int j = k; j <= n - k + 1; j++) {
            //计算右臂和
            int sum = 0;
            for(int c = j; c <= j + k - 1; c++)
                sum += a[i][c];
            if(sum % 2 == 0 || sum % 3 != 0)
                continue;
            //计算左臂和
            sum = 0;
            for(int c = j; c >= j - k + 1; c--)
                sum += a[i][c];
            if(sum % 2 == 0 || sum % 3 != 0)
                continue;
            //计算上臂和
            sum = 0;
            for(int c = i; c >= i - k + 1; c--)
                sum += a[c][j];
            if(sum % 2 == 0 || sum % 3 != 0)
                continue;
            //计算下臂和
            sum = 0;
            for(int c = i; c <= i + k - 1; c++)
                sum += a[c][j];
            if(sum % 2 == 0 || sum % 3 != 0)
                continue;
            
            ans++;
        }
    }
    cout << ans;
}


#include<bits/stdC++,h>
using namespace std;
int main() {
    double s = 0;
    int n,sign = 1;
    cin >> n;
    for (int i = 1;i <= n; i++){
        s += (double)sign * 1 / i;
        sign + - sign;
        
    }
    cout << fixed << setprecision(4) << s;

     return 0;
}
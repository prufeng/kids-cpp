#include <iostream>
using namespace std;
int n, m, q, a[100010], b[100010];

int cnt(int a[], int L, int R, int x) { //a[l..r]中<=x的数有几个
    int l = L - 1, r = R;
    while(l < r) {
        int mid = l + r + 1 >> 1;
        if(a[mid] <= x) l = mid;
        else r = mid - 1;
    }
    return l - L + 1;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= m; i++)
        cin >> b[i];
    cin >> q;
    for(int i = 1; i <= q; i++) {
        int l1, r1, l2, r2, k;
        cin >> l1 >> r1 >> l2 >> r2 >> k;
        int l = 0, r = 1e8;
        while(l < r) {
            int mid = l + r >> 1;
            if(cnt(a, l1, r1, mid) + cnt(b, l2, r2, mid) >= k)
                r = mid;
            else l = mid + 1;
        }
        cout << l << endl;
    }
}


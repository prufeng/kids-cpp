#include <iostream>
#include <cstdio>
using namespace std;
int n, q;
int a[100005];
int main () {
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= q; i++) {
		int x;
		scanf("%d", &x);
		int l = 1, r = n;
		while (l < r) {
			int mid = l + (r - l) / 2;
			if (x > a[mid]) {
				l = mid + 1;
			} else if (x <= a[mid]) {
				r = mid;
			}
		}
		if (a[r]==x) printf("%d", r);
		else printf("-1");
		printf(" ");
		l = 1, r = n;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (x >= a[mid]) {
				l = mid + 1;
			} else if (x < a[mid]) {
				r = mid - 1;
			}
		}
		
	}
	return 0;
}

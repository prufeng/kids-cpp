#include <bits/stdc++.h>

using namespace std;

long long n, q, m, h[100010], sum[100010], R = INT_MIN;
bool check(int x) {
	int l = 1, r = n + 1;
	while (l <= r) {
		int mid = (l + r) >> 1;
		if (h[mid] > x)
			r = mid - 1;
		else
			l = mid + 1;
	}
	if (l == n + 1)
		return false;
	return sum[n] - sum[l - 1] - (n - l + 1) * x >= m;
}

int main() {
	scanf("%lld%lld", &n, &q);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld", &h[i]);
		R = max(R, h[i]);
	}
	sort(h + 1, h + n + 1);	
	for (int i = 1; i <= n; ++i)
		sum[i] = sum[i - 1] + h[i];
	for (int i = 1; i <= q; ++i) {
		scanf("%lld", &m);
		long long l = 0, r = R;
		while (l <= r) {
			long long mid = (l + r) >> 1;
			if (check(mid))
				l = mid + 1;
			else
				r = mid - 1;
		}
		printf("%lld\n", l - 1);
	}
}


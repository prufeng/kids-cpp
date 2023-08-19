#include<iostream>
#include<algorithm>
using namespace std;

struct point{
	int x, y;
} p[10010];

int n;

bool cmp(point a, point b) {
	if(a.x != b.x) 
	return a.x < b.x;
	return a.y < b.y;
}

int main() {
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> p[i].x >> p[i].y;
	sort(p+1,p+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout << p[i].x << ' ' << p[i].y << endl;
	return 0;
}

#include <iostream>
using namespace std;
int h[1100], n, a, b;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    cin >> a >> b;

    int cnt = 0;
    for (int i = a && a >= 1; i <= b && b <= n; i++)
    {
        if (h[i] % 3 == 0 && h[i] % 7 == 2)
            cnt++;
    }

    cout << cnt;

    return 0;
}

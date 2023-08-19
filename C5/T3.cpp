#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    float f = (float)n;
    float t = (f+f-1+4)/(f*f);
//    cout << f<<endl;
//    cout << t;
    cout << fixed << setprecision(1) << t*100 << "%" << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float x;
    cin >> x;
    cout << x*3 << endl;
    cout << x*3-8 << endl;
    cout << fixed << setprecision(1);
    cout << (x+x*3+(x*3-8))/3 << endl;
    
     return 0;
}

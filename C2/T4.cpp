#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    int x,y,z,a;
    cin>> x >> y >> z;
    a=x+y+z;
    cout << a << endl;
    cout << fixed << setprecision(1) << (float)a/3 << endl;
    
	return 0;
}

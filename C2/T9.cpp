#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    float r1,r2;
    cin>> r1 >> r2;
    cout << fixed << setprecision(2) << r1*r1*3.14-r2*r2*3.14 << endl;
    
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float x,y,z;
    cin>> x >> y >> z; 
    cout << fixed << setprecision(1) << x*8.5+y*5.6+z*6.2 << endl;
    
	return 0;
}

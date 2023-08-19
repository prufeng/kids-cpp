#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    float n;
    cin >> n;
    cout << fixed << setprecision(1) <<((n-2)*180)/n;
    

     return 0;
}

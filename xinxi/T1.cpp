#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float r,x;
    x = 3.14159;
    cin >> r;
    cout << fixed << setprecision(2);
    cout <<  r * r * x;

     return 0;
}

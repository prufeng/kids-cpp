#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    
    cout << fixed << setprecision(1);
    cout << (a-1)*2.5+b*1.5 <<endl; 
    
    return 0;
}

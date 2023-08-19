#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float t,x,y;
    cin >> t >> x >> y;
    cout << fixed << setprecision(2);
    if(t==1)
        cout << fixed << setprecision(2) << x+y;
    
    if(t==2)
        cout << x-y;
    
    if(t==3)
        cout << x*y;
    
    if(t==4)
        cout << x/y;
    
    return 0;
}

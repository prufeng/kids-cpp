#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    switch(n){
        case 1:
            cout << "swim";
            break;
        case 3:
            cout << "program";
            break;
        case 5:
            cout << "read";
            break;
        case 6:
            cout << "math";
            break;
        default:
            cout << "rest";
    }

     return 0;
}
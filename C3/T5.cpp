#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    n<101;
    if (n>=90){
        cout << n*3;
    }
     if(n>=80 && n<90){
         cout << n;
    }
     if(n>=70 && n<80){
        cout << n;
    }
    else  if(n<70){
        cout << 50;
    }
     return 0;
}    
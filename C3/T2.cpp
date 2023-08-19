#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    if(n>=10 && n <=99 && n%2==0){
        cout << "Yes"；   
    }
    else {
        cout <<"No";
    }

     return 0;
}
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a<60 && b>=60){
        cout<<1;
    }
    else if (b<60 && a>=60){
        cout<<1;
    }
    else {
        cout<<0;
    }
}
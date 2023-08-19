#include<iostream>
using namespace std;
int a,b,c,d;
int main() {
    cin>>a>>b>>c>>d;
    int x= (c*60+d)-(a*60+b);
    cout<<x/60<<' '<<x%60<<endl;
    return 0;
}
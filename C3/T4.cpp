#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a%b==0)
        cout<<a/b<<endl;
    else
    {
        c=a/b+1;
        cout<<c<<endl;
    }

     return 0;
}



#include<iostream>
using namespace std;
int main() {
	int n,sum=1,m=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=m;j++){
            cout<<sum;
            sum++;
        }
        cout<<endl;
        m+=2;
        sum=1;
    }
    return 0;
}



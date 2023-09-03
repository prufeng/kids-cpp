#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n;
//	n=123;
	i=1;
    while(i<=n){
        cout << n/i%10 << " ";
        i=i*10;
    }

//	cout<<123/1%10<<' '<<123/10%10<<' '<<123/100%10; 
    return 0;
}

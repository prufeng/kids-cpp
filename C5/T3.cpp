#include<iostream>
using namespace std;
int main() {
    int n;
//    cin >> n;
    
    int cnt = 0;
    while(cnt<10) {
//        n /= 2;		
        cnt++;
        if(cnt==5)continue; 
        if(cnt==9)break;
        cout<<cnt<<endl;
        
    }
//    cout << cnt;

     return 0;
}


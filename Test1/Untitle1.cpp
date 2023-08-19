#include <iostream>
#include <stdio.h>
#include <algorithm>
#include<string.h>

using namespace std;

int main( ){
	int k,ans=0;
	int dp[21][21];
	memset(dp,0,sizeof(dp));     
	cin>>k;
	int i,j,x;
	for(i=2;i<=k;i++){
        for(j=2;j<=i;j++) 
            if(j == 2){
                dp[i][j] = i * (i - 1);     
            }
            else if(j == i){
                dp[i][j] = 2;
            }
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        for(x=2;x<=k;x++){
        ans+=dp[k][x];	
    }
    cout << ans;			
	return 0;
}
    
    

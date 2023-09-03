#include<bits/stdc++.h>
using namespace std;
bool cmp(int n){
	return (n%2!=0)&&(n%3==0);
}
int main(){
	int n,a[50][50],k,tot=0;
	scanf("%d%d",&n,&k);
	for(int xh1=0;xh1<n;xh1++)
	    for(int xh2=0;xh2<n;xh2++)
	        scanf("%d",a[xh1]+xh2);
	for(int xh1=k-1;xh1<n-k;xh1++){
		for(int xh2=k-1;xh2<n-k;xh2++){
			bool s=0; int ans[4]={};
			for(int i=xh1-k+1;i<=xh1;i++)
				ans[0]+=a[i][xh2];
			for(int i=xh1;i<xh1+k-1;i++)
			    ans[1]+=a[i][xh2];
			for(int j=xh2-k+1;j<xh2;j++)
				ans[2]+=a[xh1][j];
			for(int j=xh2;j<xh2+k-1;j++)
			    ans[3]+=a[xh1][j];
			if(cmp(ans[0])&&cmp(ans[1])&&cmp(ans[2])&&cmp(ans[3])) tot++;
		}
	}
	printf("%d",tot);
	return 0;
}

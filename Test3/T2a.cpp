#include<iostream>
#include<iomanip>
using namespace std;
bool isPerfect(int h){
//	cout<<':'<<h<<endl;
	if(h%2!=0&&h%3==0){
		return true; 
	}
	return false;
}
int main() {
    int n,k;   
    cin >> n >> k;
    int a[n][n];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin >> a[i][j];
//	n=4;
//	k=2;
//	int a[n][n]={{1,2,1,2}, {2,1,2,1}, {1,2,1,2},{2,4,1,1}};
	int count=0;
	for(int i=0;i<4;i++){
//	cout<<endl;
		for(int j=0;j<n;j++){	
//			cout<<a[i][j]<<" "; 	
			if(i>=k-1&&(i<=n-1-(k-1))&&j>=k-1&&(j<=n-1-(k-1))){
				int sbh=0,xbh=0,zbh=0,ybh=0;
				for(int m=0;m<k;m++){ //0,1
					sbh=sbh+a[i-m][j];
					xbh=xbh+a[i+m][j];
					zbh=zbh+a[i][j-m];
					ybh=ybh+a[i][j+m];
				}
				if(isPerfect(sbh)&&isPerfect(xbh)&&isPerfect(zbh)&&isPerfect(ybh)){
//					cout<<"["<<i<<j<<"]-"<<a[i][j]<<" "; 
					count++;
				}
				
			} 
		}
//		cout<<endl;
	}
	cout<<count<<endl;
    
    return 0;
}

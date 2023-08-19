#include<iostream>
using namespace std;

int main() {
    int q,n,x,y;
    n=5;
    q=3;
    int a[5]={1,2,3,4,5};
    
    //2 3
    int z=2;
    x=3;
    int j=0;
    for(int i=0;i<n-1;i++){
        if(i>=z){
            a[j]=a[i+1];       
		}else{
            a[j]=a[j];
        }
        j++;
    }
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }    
    
    // 1 2 3
    x=2;
    y=3;
    for(int i=0;i<n-1;i++){
        if(i==x-1){
            a[i]=y;       
		}else{
            a[i]=a[i];
        }
    }
   cout<<"================"<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }    
    
    //3 2 4
    int l=2, r=4;
    for(int i=l-1;i<n-1;i++){
        if(l<r){
            int l1=a[l-1];
            a[l-1]=a[r-1];  
            a[r-1]=l1;
		}
        l++;
        r--;
    }
    cout<<"================3"<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }  
    cout<<sizeof(a)/sizeof(a[0])<<"================4"<<endl;
}

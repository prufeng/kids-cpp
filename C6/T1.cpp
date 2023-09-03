#include<iostream>//ɳ© 

using namespace std;
int main() {
	int n;
	cin >> n;
	
    for(int i = n - 1, j = i; i >= 0; i--,j += 2) {
    	for(int k = 1;k <= i; k++) {
    		cout << ' ';
    		
		}
		for(int k = 1;k <= j; k++){
			cout << '*';
			 
		}
    	cout << endl;
	}
    
    

     return 0;
}

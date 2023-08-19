#include<iostream>
#include <string>
using namespace std;

string s, ans;

int main(){
	while(cin >> s){
		if(s.length() > ans.length())
		    ans = s; 
	}
	cout << ans;
	
	return 0;
}

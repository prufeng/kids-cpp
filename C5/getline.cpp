#include <iostream>
#include <string>
using namespace std;
double area(int a,int b){
	return a*b;
}
void getl(){
	string str1,str2;
	cout << "ÊäÈë×Ö·û´®1£º" << endl;
	getline(cin,str1);
	cout << "ÊäÈë×Ö·û´®2£º" << endl;
	getline(cin,str2);
	cout << "Á¬¸ö×Ö·û´®·Ö±ğÎª£º" << endl;
	cout << str1 << endl;       
	cout << str2 << endl;  	
}
int main (){  
//	getl();
	cout<<area(2,3)<<endl
	<<area(3,4);
	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
double area(int a,int b){
	return a*b;
}
void getl(){
	string str1,str2;
	cout << "�����ַ���1��" << endl;
	getline(cin,str1);
	cout << "�����ַ���2��" << endl;
	getline(cin,str2);
	cout << "�����ַ����ֱ�Ϊ��" << endl;
	cout << str1 << endl;       
	cout << str2 << endl;  	
}
int main (){  
//	getl();
	cout<<area(2,3)<<endl
	<<area(3,4);
	
	return 0;
}

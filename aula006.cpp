#include <iostream>
using namespace std;

int n1,n2;//var global

int main(){
	
	int n3,n4; //var local
	int res;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res= n1+n2+n3+n4;
	
	cout << "A soma é: "<< res <<"\n\n";
	
	system("pause");
	return 0;
}

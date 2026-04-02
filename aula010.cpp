#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int n1,n2,res;
	char opc;
	
	inicio:
	 
	system("cls"); 
	
	cout<< "Digite o valor da primeira nota: \n";
	cin >> n1;
	cout << "Digite o valor da segunda nota: \n";
	cin >> n2;
	
	res = n1+n2;
	
	
	/*
	>=60 aprovado 
	
	>=40 e <60 recuperação
	
	<40 reprovado
	*/
	
	if (res >= 60){
		cout<< "Aprovado \n";
	}else if(res >= 40 ){
		cout<<"Recuperacao \n";
	}else{
		cout << "Reprovado \n";
	}
	
	cout<<"\n Digitar outras notas? (s/n): \n";
	cin>> opc;
	
	if (opc == 's' or opc == 'S'){
		goto inicio;
	}
	
	return 0;
}

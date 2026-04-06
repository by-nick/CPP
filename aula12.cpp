#include <iostream>
using namespace std;

int main(){
	
	//(Expressão) ? valor1 : valor2;
	
	/*
	se o resultado da expressão for verdadeiro, ela vai retornar valor 1,
	caso contrário, retornará valor 2
	*/
	
	int n1,n2,nota;
	string res;
	char opc;
	
	inicio:
		
	cout<<"\nDigite a primeira nota: \n";
	cin >> n1;
	cout<< "\nDigite a segunda nota: \n";
	cin >> n2;
	
	nota = n1+n2;
	
	//nota>=60 -> aprovado
	//nota<60 -> reprovado
	
	(nota>=60) ? res="Aprovado" : res="Reprovado";
	
	cout <<"\nSituacao do aluno: "<< res<< "\n";
	
	cout << "Digitar novamente? (s/n)";
	cin >> opc;
	
	if (opc == 's' or opc == 'S'){
		goto inicio;
	}
	
	return 0;
}

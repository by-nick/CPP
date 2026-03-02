#include <iostream>
using namespace std;

int main(){
	//tipo nome;
	//tipo nome = valor;
	
	int vidas = 5; //inteiro
	char letra = 'N'; //caractere 'A'
	double decimal = 4.2; //0.49999
	float decimal2 = 4.2; //0.5
	bool vivo = true; //true or false
	string nome = "Nick Brito"; //texto "oie, como vai?"
	
	cout << "Digite o número de vidas: ";
	cin >> vidas;
	
	cout<< "Digite uma letra: ";
	cin>> letra;
	
	cout << "Dinheiro: ";
	cin>> decimal;
	
	cout<< "Digite seu nome: ";
	cin>> nome;
	
	
	cout << vidas<< "\n";
	cout << letra<< "\n";
	cout << decimal<< "\n";
	cout << nome<< "\n";
	
	return 0;
}

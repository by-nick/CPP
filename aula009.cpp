#include <iostream>
using namespace std;

int main(){
	
	int vida;
	cout << "Digite o valor da sua vida: ";
	cin >> vida;
	
	if (vida == 0){
		cout << "Voce Morreu\n";
	}else{
		cout << "Continue sua jornada aventureiro!\n";
	};
	
	
	system("Pause");
	return 0;
}

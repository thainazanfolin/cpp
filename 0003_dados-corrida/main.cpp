#include <iostream>

using namespace std;

// Corrida de automóveis da prova 1 

int main() {
	
	int tempo=0, soma=0, melhortempo=9999, piortempo=0, volta, qtdadevoltas;
	float media=0;
	
	cout<<"Quantas voltas a corrida teve?  \n";
	cin>>  qtdadevoltas;
	
	for(int v=1; v<=qtdadevoltas; v++){
				
		cout<<"Informe o tempo da volta " << v << endl;
		cin >> tempo;
		
		soma = soma + tempo;
				
		if(tempo<melhortempo){
			melhortempo = tempo;
			volta = v;
		}
		
		if(tempo>piortempo){
			piortempo = tempo;	
		}
	}

	media = soma/qtdadevoltas;
	
	cout << "Total dos tempos: " << soma << endl;
	cout << "Média dos tempos: " << media << endl;
	cout << "Melhor tempo: " << melhortempo << endl;
	cout << "Volta de melhor tempo: " << volta << endl; 
	cout << "Pior tempo: " << piortempo << endl;
	
		
	return 0;
}

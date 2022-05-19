#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float notas[3], media;
	 /* posição final é o tamanho total - 1, pq começa no zero. entao o indice final é o 2 */
	
	cout << "Informe a primeira nota \n";
	cin >> notas[0];
	cout << "Informe a segunda nota \n";
	cin >> notas[1];
	cout << "Informe a terceira nota \n";
	cin >> notas[2]; 
	
	media = ()notas[0] + notas [1] + notas [2])/3
	
	cout << "Sua média é de " << media;
		
	
	return 0;
}

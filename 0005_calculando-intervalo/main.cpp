#include <iostream>
using namespace std;


/* intervalo */

int main() {
	int n1, n2;
	
	cout << "Vamos ver o intervalo entre 2 n�meros? Informe o primeiro n�mero \n";
	cin >> n1; 
	
	cout << "Informe o pr�ximo n�mero";
	cin >> n2; 
	
	for (int i=n1; i<=n2; i++){
		cout << i;		
	}
		
	
	return 0;
}

#include <iostream>
using namespace std;


/* intervalo */

int main() {
	int n1, n2;
	
	cout << "Vamos ver o intervalo entre 2 números? Informe o primeiro número \n";
	cin >> n1; 
	
	cout << "Informe o próximo número";
	cin >> n2; 
	
	for (int i=n1; i<=n2; i++){
		cout << i;		
	}
		
	
	return 0;
}

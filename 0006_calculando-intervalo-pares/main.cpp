#include <iostream>
using namespace std;

/* intervalos pares*/

int main(int argc, char** argv) {
	
	int n1, n2;
	
	cout << "Vamos ver os n�meros pares do intervalo entre 2 n�meros? Informe o primeiro n�mero \n";
	cin >> n1; 
	
	cout << "Informe o segundo n�mero";
	cin >> n2; 
	
	

	for (int i=n1; i<=n2; i++){
		if(i%2==0){
			cout << i <<endl;
		}	
					
	}
		
	
	
	
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

/*tabuada */

int main() {
	int n, tab;
	
	
	cout << "Vamos calcular a tabuada? \n";
	cout << "Informe o número que deseja conferir a tabuada \n";
	cin >> n;
	
	
	for (int tab=1; tab<=10; tab++){
		cout << n << "x" << tab << " = " << n*tab << endl;	
	
}
	
	return 0;
}

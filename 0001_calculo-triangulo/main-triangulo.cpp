#include <iostream>
#include <locale>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	char resp='S';
	
	while(resp=='S'|| resp=='s'){
		
		cout << "Vamos montar tri�ngulos?" << endl;
		
		cout << "Por favor, informe o primeiro n�mero" << endl; 
		cin>>num1;
		cout << "Agora, coloque o segundo n�mero"<<endl;
		cin>>num2;
		cout<< "Por �ltimo, informe o terceiro n�mero"<<endl;
		cin>>num3;
	 /*	
		if ((num1 == num2) && (num1 == num3) && (num2 == num3)){
			cout<< "O tri�ngulo formado � EQUIL�TERO, com os 3 lados iguais";
			
		} else if ((num1 != num2) && (num1 != num3) && (num2 != num3)){
			cout<< "O tri�ngulo formado � ESCALENO, com os 3 lados diferentes"; 
			
		} else if ((num1 == num2) && (num1 != num3) && (num1 != num3)) {
			cout<< "O tri�ngulo formado � IS�SCELES, com os 2 lados iguais e 1 diferente";	
				
		} else if ((num1 == num3) && (num1 != num2) && (num2 != num3)) {
			cout<< "O tri�ngulo formado � IS�SCELES, com os 2 lados iguais e 1 diferente";	
			
		} else if ((num2 == num3) && (num1 != num2) && (num1 != num3)) {
			cout<< "O tri�ngulo formado � IS�SCELES, com os 2 lados iguais e 1 diferente";	
					
		} else if ((num2 == num1) && (num1 != num3) && (num2 != num3)) {
			cout<< "O tri�ngulo formado � IS�SCELES, com os 2 lados iguais e 1 diferente";		
		}
	*/
		
		if (num1>=num2+num3 || num2 >= num1+num3 || num3>= num1+num2) {
			cout << "N�meros inv�lidos. N�o formam um tri�ngulo. Tente inserir outros n�meros.";
		}else{
			if (num1 == num2 && num2==num3) {
			cout << "Tri�ngulo Equil�tero" <<endl	;
			} else if (num1==num2 || num1==num3 || num2==num3) {
			cout << "Tri�ngulo Is�sceles"<<endl;
			} else{
			cout << "Tri�ngulo Escaleno" <<endl;
			}
		}
		
		cout << "Deseja come�ar novamente? S/N";
		cin >> resp;	
	}

	return 0;
}

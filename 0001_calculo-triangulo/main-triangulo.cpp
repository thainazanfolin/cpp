#include <iostream>
#include <locale>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	char resp='S';
	
	while(resp=='S'|| resp=='s'){
		
		cout << "Vamos montar triângulos?" << endl;
		
		cout << "Por favor, informe o primeiro número" << endl; 
		cin>>num1;
		cout << "Agora, coloque o segundo número"<<endl;
		cin>>num2;
		cout<< "Por último, informe o terceiro número"<<endl;
		cin>>num3;
	 /*	
		if ((num1 == num2) && (num1 == num3) && (num2 == num3)){
			cout<< "O triângulo formado é EQUILÁTERO, com os 3 lados iguais";
			
		} else if ((num1 != num2) && (num1 != num3) && (num2 != num3)){
			cout<< "O triângulo formado é ESCALENO, com os 3 lados diferentes"; 
			
		} else if ((num1 == num2) && (num1 != num3) && (num1 != num3)) {
			cout<< "O triângulo formado é ISÓSCELES, com os 2 lados iguais e 1 diferente";	
				
		} else if ((num1 == num3) && (num1 != num2) && (num2 != num3)) {
			cout<< "O triângulo formado é ISÓSCELES, com os 2 lados iguais e 1 diferente";	
			
		} else if ((num2 == num3) && (num1 != num2) && (num1 != num3)) {
			cout<< "O triângulo formado é ISÓSCELES, com os 2 lados iguais e 1 diferente";	
					
		} else if ((num2 == num1) && (num1 != num3) && (num2 != num3)) {
			cout<< "O triângulo formado é ISÓSCELES, com os 2 lados iguais e 1 diferente";		
		}
	*/
		
		if (num1>=num2+num3 || num2 >= num1+num3 || num3>= num1+num2) {
			cout << "Números inválidos. Não formam um triângulo. Tente inserir outros números.";
		}else{
			if (num1 == num2 && num2==num3) {
			cout << "Triângulo Equilátero" <<endl	;
			} else if (num1==num2 || num1==num3 || num2==num3) {
			cout << "Triângulo Isósceles"<<endl;
			} else{
			cout << "Triângulo Escaleno" <<endl;
			}
		}
		
		cout << "Deseja começar novamente? S/N";
		cin >> resp;	
	}

	return 0;
}

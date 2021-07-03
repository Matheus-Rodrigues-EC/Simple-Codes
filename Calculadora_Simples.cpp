#include <iostream>

using namespace std;

int main(void){
	
	float A, B;
	char C;
	
	cout << "Digite o primeiro numero: ";
	cin >> A;
	cout << "Digite a operacao desejada: ";
	cin >> C;
	cout << "Digite o segundo numero: ";
	cin >> B;
	
	if(C == '+') cout << "O resultado eh: " << A + B;
	if(C == '-') cout << "O resultado eh: "  << A - B;
	if(C == '*' || C == 'x' || C == 'X') cout << "O resultado eh: "  << A * B;
	if(C == '/' and B!=0){
		cout << "O resultado eh: "  << A / B;
	}else if(C == '/' and B == 0){
		cout << "Indeterminado.";
	}
	
	return 0;
}

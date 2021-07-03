#include <iostream>
#include <math.h>

using namespace std;

float potencia(float A, float B){
	
	float result = 1;
	for(int i = 1; i <= B; i++){
		result = result * A;
	}
	return result;
}

float raizQ(float A){
	float result = sqrt(A);
	
	return result;
}


int main(void){
	
	float A, B, aux;
	char C;
	
	cout << "Digite o primeiro numero: ";
	cin >> A;
	cout << "Digite a operacao desejada: ";
	cin >> C;
	
	if(C == 'R' || C == 'r'){
		cout << raizQ(A) << endl;
		exit;	
	}else{
		cout << "Digite o segundo numero: ";
	cin >> B;
	}
	
	if(C == '+') cout << "O resultado eh: " << A + B;
	
	if(C == '-') cout << "O resultado eh: "  << A - B;
	
	if(C == '*' || C == 'x' || C == 'X') cout << "O resultado eh: "  << A * B;
	
	if(C == '/' and B!=0){
		cout << "O resultado eh: "  << A / B;
	}else if(C == '/' and B == 0){
		cout << "Indeterminado.";
	}
	
	if(C == '^') cout << potencia(A, B) << endl;
	
	
	
	return 0;
}

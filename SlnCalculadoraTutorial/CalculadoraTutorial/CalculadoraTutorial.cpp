#include "pch.h"
#include <iostream>
#include "Calculadora.h"


using namespace std;

int main()
{
	double valor1 = 0;
	double valor2 = 0;
	double  valor3 = 0;
	char operacion = '\0';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"<< endl;
	cin >> valor1;
	cin >> operacion;
	cin >> valor2;
	Calculadora calcular;
	valor3 = calcular.Calculate(valor1, operacion, valor2);
	cout <<valor3;
	return 0;
}


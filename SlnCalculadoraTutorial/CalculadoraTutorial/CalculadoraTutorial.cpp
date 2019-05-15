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
	cout << "Porfavor ingrese la operacion en este formato a+b | a-b | a*b | a/b"<< endl;
	while (true)
	{
		cin >> valor1;
		cin >> operacion;
		cin >> valor2;
		Calculadora calcular;
		valor3 = calcular.Calculate(valor1, operacion, valor2);
		cout << "el resultado es :"<<valor3<<endl;
	}
	return 0;
}


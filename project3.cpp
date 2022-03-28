
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

//funcao para calcular area e perimetro
void calcula_hexa(float L, float* A, float* P) {
	*A = 3 * pow(L, 2) * sqrt(3) / 2;
	*P = 6 * L;
}

int main()
{
	float L, P, A;
	std::cout << "Digite o lado: ";
	std::cin >> L;

	if (L <= -1) {
		std::cout << "Somente numeros positivos:\n ";
		system("pause");
		exit(1);
	}

	else {
		calcula_hexa(L, &A, &P);
		std::cout << "area: \n";
		std::cout << A;
		std::cout << "perimetro: \n";
		std::cout << P;
	}

	system("pause");
	return 0;


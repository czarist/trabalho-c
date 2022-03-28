
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
		//valida se o número é positivo
		std::cout << "Somente numeros positivos:\n ";
		system("pause");
		exit(1);
	} else if (std::cin.fail()) {
		//valida se foi digitado alguma letra
		std::cout << "Somente numeros:\n ";
		system("pause");
		exit(1);
	} else {
		calcula_hexa(L, &A, &P);
		std::cout << "area: ";
		std::cout << A;
		std::cout << "\n";
		std::cout << "perimetro: ";
		std::cout << P;
		std::cout << "\n";
	}

	return 0;
}

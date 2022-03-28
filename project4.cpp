#include <iostream>
#include <math.h>

float digito;

int main()

{
	std::cout << "Digite um numero: ";
	std::cin >> digito;
	if (std::cin.fail()) {
		//valida se foi digitado alguma letra
		std::cout << "Somente numeros:\n ";
		system("pause");
		exit(1);
	} else {
		std::cout << digito;
		printf(" ^ 3 = %f\n", pow(digito, 3.0));
	}
	return 0;
}

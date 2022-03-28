
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <array>

typedef std::vector< int > ints_t;
int n, digit, temp;

using namespace std;

int main()
{
    std::cout << "Insira a Matricula: ";
    std::cout << "\n";
    std::cin >> n;
    //  n = 3779539;
    std::vector< int > arr;
    std::cout << "Matricula: ";
    std::cout << n;
    std::cout << "\n";
    std::cout << "Matricula ordenada: ";

    //laço que ordena numeros e gera um array de integers
    for (digit = 0; digit < 10; digit++) {
        for (temp = n; temp > 0; temp /= 10) {
            if (temp % 10 == digit) {
                std::cout << digit;
                arr.push_back(digit);
            }
        }
    }

    //resgata o primeiro e ultimo elementos do array
    std::cout << "\n";
    std::cout << "Menor Numero: ";
    std::cout << arr[0];
    std::cout << "\n";
    std::cout << "Maior Numero: ";
    std::cout << arr.back();
    std::cout << "\n";

    return 0;
}

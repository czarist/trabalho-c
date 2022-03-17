#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
    char nome[200];
    char sobrenome[200];
    int ur;
    int i, j, tamanho, tamanho2;

    printf("insira seu primeiro nome: ");
    std::cin >> nome;
    printf("insira sobrenome: ");
    std::cin >> sobrenome;
    printf("insira sua ur: ");
    std::cin >> ur;
    printf("%s %s %d\n", nome, sobrenome, ur);

    if (ur % 2 == 0) {
        printf("ur numero par \n");
    } else {
        printf("ur numero impar \n");
    }

    tamanho = strlen(nome);
    printf("Nome Invertido : \n");
  
    tamanho2 = strlen(sobrenome);
    for (j = tamanho2; j >= 0; j--)
    {
        printf("%c", sobrenome[j]);
    }
    printf(" ");
    for (i = tamanho; i >= 0; i--)
    {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}

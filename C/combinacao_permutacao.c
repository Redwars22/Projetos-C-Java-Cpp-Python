#include <stdio.h>
#include <stdlib.h>

int option;

void mainMenu();
void combinacao();
void permutacao();

int main(int argc, char const *argv[])
{
    printf("CALCULADORA - COMBINAÇÃO/PERMUTAÇÃO");
    printf("Escolha uma opção: ");
    printf("\n1-COMBINAÇÃO SIMPLES\n2-COMBINAÇÃO COMPOSTA\n3-PERMUTAÇÃO");
    scanf("%d", &option);
    return 0;
}

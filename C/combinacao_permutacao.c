#include <stdio.h>
#include <stdlib.h>

int option, value;

void mainMenu();
void combinacao();
void permutacao();

int main(int argc, char const *argv[])
{
    printf("CALCULADORA - COMBINAÇÃO/PERMUTAÇÃO");
    printf("Escolha uma opção: ");
    printf("\n1-COMBINAÇÃO SIMPLES\n2-COMBINAÇÃO COMPOSTA\n3-PERMUTAÇÃO");
    scanf("%d", &option);
    permutacao();
    return 0;
}

void permutacao(){
    system("clear");
    printf("PERMUTAÇÃO: Insira a quantidade de elementos:");
    scanf("%d", &value);
    int result = 1;
    for(int i = value; i > 0; i--){
        result *= i;
    }
    printf("%d", result);
}

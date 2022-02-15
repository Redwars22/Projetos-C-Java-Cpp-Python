#include <stdio.h>
#include <stdlib.h>

int option, n;

void mainMenu();
void combinacao();
void permutacao();

int main()
{
    printf("CALCULADORA - COMBINAÇÃO/PERMUTAÇÃO");
    printf("\nEscolha uma opção: ");
    printf("\n1-COMBINAÇÃO SIMPLES\n2-COMBINAÇÃO COMPOSTA"); 
    printf("(\n3-PERMUTAÇÃO\n4-SAIR\n\n -->");
    scanf("%d", &option);
    system("clear");

    switch(option){
        case 1:
            break;
        case 2:
            break;
        case 3:
            permutacao();
        default:
            return 0;
            break;
    }

    return 0;
}

void permutacao(){
    printf("PERMUTAÇÃO: Insira a quantidade de elementos:");
    scanf("%d", &n);
    int result = 1;
    for(int i = n; i > 0; i--){
        result *= i;
    }
    printf("Pode ser permutado de %d formas! \n\n", result);
    main();
}

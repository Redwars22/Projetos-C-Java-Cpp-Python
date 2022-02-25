/*Conversor de Dólar para Roblux, uma moeda fictícia
cuja cotação é 1.53;*/

#include <stdio.h>
#include <stdlib.h>

#define CURRENCY 1.53

float robluxValue, dollarValue, result;
int option;
char key;
void DollarToRoblux();
void RobluxToDollar();

int main(int argc, char const *argv[])
{
    do {
        printf("\n-------------------------------\n");
        printf("CONVERSOR DE MOEDAS\n");
        printf("1-RBX para USD\n2-USD para RBX\n3-SAIR\n->");
        scanf("%d", &option);

        switch(option){
            case 1:
                RobluxToDollar();
                break;
            case 2:
                DollarToRoblux();
                break;
            case 3:
                break;
        }
    } while(option != 3);

    return 0;
}

void DollarToRoblux(){
    printf("Insira o valor em dólar: $");
    scanf("%f", &dollarValue);
    robluxValue = (dollarValue / CURRENCY);
    printf("Valor em Roblux: RBX: %.2f\n", robluxValue);
}

void RobluxToDollar(){
    printf("Insira o valor em roblux: RBX ");
    scanf("%f", &robluxValue);
    dollarValue = (robluxValue * CURRENCY);
    printf("Valor em dólar: $: %.2f\n", dollarValue);
}
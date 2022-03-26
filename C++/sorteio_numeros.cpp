#include <iostream>
#include <time.h>

int amount, range_min, range_max, randnum;
void getRandomNumbers(int, int, int);

int main(int argc, char const *argv[])
{
    system("clear");
    srand(time(0));
    printf("##########<SORTEIO DE NÚMEROS ALEATÓRIOS>##########");
    printf("\n\nQUANTIDADE DE NÚMEROS: ");
    scanf("%d", &amount);
    printf("MENOR VALOR POSSÍVEL: ");
    scanf("%d", &range_min);
    printf("MAIOR VALOR POSSÍVEL: ");
    scanf("%d", &range_max);
    printf("\n");
    getRandomNumbers(amount, range_min, range_max);
    return 0;
}

void getRandomNumbers(int amount, int range_min, int range_max)
{
    //Gerar números até o valor informado
    for(int i = 0; i < amount; i++){
        randnum = rand() % range_max;
        //Verifica se o número gerado é maior que o mínimo
        while(randnum < range_min){
            randnum = rand() % range_max;
        }
        printf("%d ", randnum);
    }

    printf("\n");
}
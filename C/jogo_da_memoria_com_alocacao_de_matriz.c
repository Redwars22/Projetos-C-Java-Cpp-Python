//ANDRÉ PEREIRA JUSTINIANO - ENGENHARIA DE SOFTWARE 1º ANO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constantes
#define EASY_MODE 4
#define HARD_MODE 8

//Variáveis
int choice, **M = NULL, n = 0, m = 0, score = 0, argument = 0, upper, lower, index_i, index_j, value;
char gameMode;

//n = linhas, m = colunas

void game(int, int);
void easyMode(int, int);
void hardMode(int, int);
void setGameMode();
void getScore(int, int);

int main()
{
    printf("JOGO DA MEMÓRIA\n\nESCOLHA O NÍVEL DE DIFICULDADE:\n");
    printf("1-EASY(4x4)\n2-HARD(8x8)\nEscolha->");
    scanf("%d", &choice);

    //Caso um número inválido seja inserido, o jogo considerará como 2
    if(choice != 1 && choice != 2)
        choice = 2;

    switch(choice){
        case 1:
            n = EASY_MODE;
            m = EASY_MODE;
            gameMode = 'E';
            game(n, m);
            break;
        case 2:
            n = HARD_MODE;
            m = HARD_MODE;
            gameMode = 'H';
            game(n, m);
            break;
        default:
            break;
    }

    return 0;
}

void game(int rows, int columns){
    system("clear");

    M = (int**) malloc(rows * sizeof(int*));

    for(int i = 0; i < rows; i++){
        M[i] = (int*) malloc(columns * sizeof(int*));
    }

    //Preenche a matriz com valores
    if(gameMode == 'E'){
        for (int j = 0; j < rows; j++){
            for(int k = 0; k < columns; k++){
                //Se o índice é par, então o valor de M[j][k] é 1, do contrário é 0
                if((j % 2) == 0 && (k % 2) == 0){
                    M[j][k] = 1;
                } else {
                    M[j][k] = 0;
                }
            }
        }
    } else {
        for (int j = 0; j < rows; j++){
            for(int k = 0; k < columns; k++){
                //Se o índice é par, então o valor de M[j][k] é 1, do contrário é 0
                if((j % 2) == 0 && (k % 2) == 0){
                    M[j][k] = 1 * j;
                } else if(j == k) {
                    M[j][k] = j + k;
                } else {
                    M[j][k] = j * k;
                }
            }
        }
    }

    printf("Esta é a matriz. Memorize-a e pressione qualquer tecla para continuar!\n\n");
    setGameMode();
}

void setGameMode(){
    if(gameMode == 'E'){
        easyMode(EASY_MODE, EASY_MODE);
    } else {
        hardMode(HARD_MODE, HARD_MODE);
    }
}

void easyMode(int rows, int columns){
    //Printa a matriz
    for(int l = 0; l < rows; l++){
        for(int p = 0; p < columns; p++){
            printf("%d  ", M[l][p]);
            if(p == (columns - 1))
                printf("\n");
        }
    }

    //Espera o usuário memorizar a matriz e decidir continuar
    do {
        printf("\nDigite 1 para continuar... \n->");
        scanf("%d", &argument);
    } while(argument != 1);

    if(argument == 1)
        system("clear");

    //Seta o mínimo e o máximo do índice da matriz
    upper = (EASY_MODE - 1);
    lower = 0;

    //A parte do jogo em si
    for(int arg = 0; arg < 16; arg++){
        index_i = (rand() % (upper - lower + 1)) + lower;
        index_j = (rand() % (upper - lower + 1)) + lower;

        printf("\nValor de M[%d][%d]: ", index_i, index_j);
        scanf("%d", &value);
        if(value == M[index_i][index_j]){
            printf("CORRETO!!! +5 pontos");
            score += 5;
        } else {
            printf("ERRADO!!!");
        }
    }

    //Exibe a pontuação total e espera o usuário digitar algo para retornar ao menu principal
    system("clear");
    printf("\nPONTUAÇÃO TOTAL: %d", score);
    do {
        printf("\nDigite 1 para continuar... \n->");
        scanf("%d", &argument);
    } while(argument != 1);

    if(argument == 1){
        system("clear");
        main();
    }
}

void hardMode(int rows, int columns){
    //Printa a matriz
    for(int l = 0; l < rows; l++){
        for(int p = 0; p < columns; p++){
            printf("%d  ", M[l][p]);
            if(p == (columns - 1))
                printf("\n");
        }
    }

    //Espera o usuário memorizar a matriz e decidir continuar
    do {
        printf("\nDigite 1 para continuar... \n->");
        scanf("%d", &argument);
    } while(argument != 1);

    if(argument == 1)
        system("clear");

    //Seta o mínimo e o máximo do índice da matriz
    upper = (HARD_MODE - 1);
    lower = 0;

    //A parte do jogo em si
    for(int arg = 0; arg < 16; arg++){
        index_i = (rand() % (upper - lower + 1)) + lower;
        index_j = (rand() % (upper - lower + 1)) + lower;

        printf("\nValor de M[%d][%d]: ", index_i, index_j);
        scanf("%d", &value);
        if(value == M[index_i][index_j]){
            printf("CORRETO!!! +5 pontos");
            score += 5;
        } else {
            printf("ERRADO!!!");
        }
    }

    //Exibe a pontuação total e espera o usuário digitar algo para retornar ao menu principal
    system("clear");
    printf("\nPONTUAÇÃO TOTAL: %d", score);
    do {
        printf("\nDigite 1 para continuar... \n->");
        scanf("%d", &argument);
    } while(argument != 1);

    if(argument == 1){
        system("clear");
        main();
    }
}

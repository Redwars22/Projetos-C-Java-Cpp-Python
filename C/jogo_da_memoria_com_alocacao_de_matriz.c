//ANDRÉ PEREIRA JUSTINIANO - ENGENHARIA DE SOFTWARE 1º ANO

#include <stdio.h>
#include <stdlib.h>

int choice, **M = NULL, n = 0, m = 0;

//n = linhas, m = colunas

void game(int, int);

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
            n = 4;
            m = 4;
            game(n, m);
        case 2:
            break;
        default:
            break;
    }
    
    
    return 0;
}

void game(int rows, int columns){
    M = (int**) malloc(rows * sizeof(int*));
    
    for(int i = 0; i < rows; i++){
        M[i] = (int*) malloc(columns * sizeof(int*));
    }
    
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
    
    /*for(int l = 0; l < rows; l++){
        for(int p = 0; p < columns; p++){
            printf("%d", M[l][p]);
        }
    }*/
}

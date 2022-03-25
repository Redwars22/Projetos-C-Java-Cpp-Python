//ANDRÉ PEREIRA JUSTINIANO - ENGENHARIA DE SOFTWARE, 1º ANO, UEPG

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char cartas[] = {'A', 'X', 'J', 'Q', 'K', '2', '4', '5', '6', '7', '8', '9', 'M', 'N', 'P', 'R', '0', 'Y'}; 
char **tab = NULL;
int aux = 0, level;

void generateGame(int, int);
void saveBoard();
void game();

int main(int argc, char const *argv[])
{
    printf("JOGO DA MEMÓRIA\n");
    printf("NÍVEL DE DIFICULDADE: ");
    printf("\n1-FÁCIL (2x2)\n2-MÉDIO (4x4)\n3-DIFÍCIL (6x6)\n->");
    scanf("%d", &level);

    switch(level){
        case 1:
            generateGame(2, 2);
            break;
        case 2:
            generateGame(8, 4);
            break;
        case 3:
            generateGame(18, 6);
            break;
        default:
            break;
    }
    return 0;
}

void generateGame(int cards, int size){
    system("clear");
    printf("TABULEIRO (%dx%d)\n\n", size, size);

    tab = (char**) malloc(size * sizeof(char*));
    for(int i = 0; i < size; i++){
        tab[i] = (char*) malloc(size * sizeof(char*));
    }

    for(int m = 0; m < size; m++){
        for(int n = 0; n < size; n++){
            tab[m][n] = ' ';
        }
    }

    for(int i = 0; i < cards; i++){
        int carta = i;
        aux = 0;
        for(int m = 0; m < size; m++){
            for(int n = 0; n < size; n++){
                if(tab[m][n] != cartas[carta] && tab[m][n] == ' ' && aux < 2){
                    tab[m][n] = cartas[carta];
                    aux++;
                }
            }
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
    
    free(tab);
}
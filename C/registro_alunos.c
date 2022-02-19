#include <stdio.h>
#include <stdlib.h>

#define N 1
#define NOTAS 4

typedef struct Estudantes
{
    int codigo;
    char nome[20];
    char CPF[11];
    int notas[NOTAS];
} estudante;

estudante aluno[N];
float somaNotas = 0;
void mostrarItens();
void organizarItens();

int main(int argc, char const *argv[])
{
    for (int i = 0; i < N; i++)
    {
        printf("ALUNO %d: \n", i + 1);
        printf("Código(CGM):");
        scanf("%d", &aluno[i].codigo);
        fflush(stdin);
        printf("Nome: ");
        scanf("%s", &aluno[i].nome);
        fflush(stdin);
        /*printf("");
        scanf("", &);*/
        printf("NOTAS: \n");
        for (int j = 0; j < NOTAS; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%d", &aluno[i].notas[j]);
        }

        for (int k = 0; k < 35; k++)
            printf("-");

        printf("\n");
    }

    organizarItens();
    mostrarItens();

    return 0;
}

void checarCPF() {}

void organizarItens()
{   
    estudante aux;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < 5; j++){
            if(aluno[i].codigo < aluno[j].codigo){
                aux = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = aux;
            }
        }
    }
}

void mostrarItens()
{
    system("clear");
    printf("LISTA DE ALUNOS CADASTRADOS:\n");
    printf("Codigo --- Nome --- CPF --- Notas --- Média\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < NOTAS; j++)
            somaNotas += aluno[i].notas[j];
        printf("%d --- %s --- 000.000.000-13 --- [%d, %d, %d, %d] --- %.2f\n",
               aluno[i].codigo,
               aluno[i].nome,
               aluno[i].notas[0],
               aluno[i].notas[1],
               aluno[i].notas[2],
               aluno[i].notas[3],
               (somaNotas/NOTAS));
    }
}
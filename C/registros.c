#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Materiais {
    int codigo;
    char descricao[255];
    int quantidade;
    float valor;
} Material;

Material material[5];
void sortItems();
void showItems();

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 5; i++){
        printf("\nMATERIAL %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &material[i].codigo);
        printf("Descrição: ");
        scanf("%s", &material[i].descricao);
        printf("Quantidade: ");
        scanf("%d", &material[i].quantidade);
        printf("Valor: ");
        scanf("%f", &material[i].valor);
    }
    sortItems();
    showItems();
    return 0;
}

void sortItems(){
    int i, j;
    Material aux;

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(material[i].descricao > material[j].descricao){
                aux = material[i];
                material[i] = material[j];
                material[j] = aux;
            }
        }
    }
}

void showItems(){
    printf("\n\nCódigo --- Descrição --- Quantidade --- Valor\n");
    for(int i = 0; i < 5; i++){
        printf("%d --- ", material[i].codigo);
        printf("%s --- ", material[i].descricao);
        printf("%d --- ", material[i].quantidade);
        printf("%f\n", material[i].valor);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char text[2000];

int main()
{
    system("clear");
    printf("##########[ EDITOR DE TEXTO EM C ]##########\n");
    printf("Ao terminar de digitar, pressione ENTER para salvar.\n");
    drawLine(50);
    writeToFile();
    return 0;
}

void writeToFile(){
    FILE *file;
    gets(text, 2000, file);
    drawLine(50);
    printf("Digite o nome do arquivo:");
    char filename[100];
    scanf("%s", filename);
    file = fopen(filename, "w");
    fprintf(file, "%s", text);
    fclose(file);
}

void drawLine(int arg){
    for(int i = 0; i < arg; i++){
        printf("-");
    }
    printf("\n");
}
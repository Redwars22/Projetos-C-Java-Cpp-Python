#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int total, sum, aux, result;

int main()
{
    printf("#####[ CALCULADORA DE MÉDIA EM C ]#####");
    while (true)
    {
        printf("\nQuantidade de elementos: ");
        scanf("%d", &total);

        if (total == 0)
            break;

        for (int i = 0; i < total; i++)
        {
            printf("x%d:", i + 1);
            scanf("%d", &aux);
            sum += aux;
        }

        result = (sum / total);
        printf("Média: %d\n", result);
    }
    return 0;
}

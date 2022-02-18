#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int divisor, dividendo;

int main()
{
    printf("");

    while(true){
        printf("DIVIDENDO: ");
        scanf("%d", &dividendo);
        printf("DIVISOR: ");
        scanf("%d", &divisor);
        
        if(dividendo % divisor == 0) printf("É divisível!");
        if(dividendo % divisor != 0) printf("Não é divisível!");
        printf("\n------------------------------\n");
    }
    
    return 0;
}

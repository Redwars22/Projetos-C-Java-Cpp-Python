#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int max = 7;
    /*O valor máximo... 
    Será gerado um valor entre 0 e 7.*/

    int number = (rand() % max) + 1;
    printf("%d", number);

    return 0;
}

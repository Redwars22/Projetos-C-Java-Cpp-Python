#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI  3.14159265

double value, inRadians, sine, cosin, tang;

int main()
{
    printf("#####[ TRIGONOMETRIA EM C ]#####\n");
    while(true){
        printf("INSIRA UM VALOR EM GRAUS: ");
        scanf("%lf", &value);
        inRadians = value * (PI/180);
        printf("\nSENO: %lf\n", sin(inRadians));
        printf("COSSENO: %lf\n", cos(inRadians));
        printf("TANGENTE: %lf\n\n", tan(inRadians));
        for(int i = 0; i < 12; i++) printf("#-#");
        printf("\n");
    }
    return 0;
}

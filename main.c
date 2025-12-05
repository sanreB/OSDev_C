#include <stdio.h>
#include <math.h>
int main(){
    
    float coordenadax1;
    float coordenadax2;
    float coordenaday1;
    float coordenaday2;

    printf("Escreva a posição x do primeiro ponto\n ");
    scanf("%f", &coordenadax1);
    printf("Escreva a posição y do primeiro ponto\n ");
    scanf("%f", &coordenaday1);
    printf("Escreva a posição x do ponto final\n ");
    scanf("%f", &coordenadax2);
    printf("Escreva a posição y do ponto final\n ");
    scanf("%f", &coordenaday2);

    float operacao = (sqrt(pow((coordenadax2 - coordenadax1), 2.0) + pow((coordenaday2 - coordenaday1), 2.0)));
    printf("A distância é %.2f\n", operacao);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //bitToAchieve é o valor binário que queremos ao final do processo e o binaryGenerator é o gerador de bits aleatórios
    //que está sendo usado pra testes.

    int bitToAchieve = 0b101;
    int binaryGenerator;
    
    srand(time(NULL));
    binaryGenerator = rand() % 16;
    
    //if statement pra checar se ao passar o filtro do operador AND o número gerado vai ter os bits necessários ligados,
    //caso não tenha ele liga os bits necessários e mostra o número gerado e o alcançado.

    if((binaryGenerator & bitToAchieve) == bitToAchieve){
        printf("%d\n", binaryGenerator);
        return 0;
    }
    else{
        printf("%d\n", binaryGenerator);
        binaryGenerator |= bitToAchieve;
        printf("%d\n", binaryGenerator);
        return 0;
    }
    
    return 0;
}

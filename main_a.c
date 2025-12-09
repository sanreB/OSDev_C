#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    
    int binaryNumber = 0b101;
    int binaryGenerator;

    srand(time(NULL));
    binaryGenerator = rand() % 16;

    if((binaryGenerator & binaryNumber == binaryNumber))
        printf("%d\n", binaryGenerator);







return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

    for(int i; i<5; i++){
        printf("digite os numeros: ");
        scanf("%d", &array[i]);
    }


    printf("numeros digitados: ");
    for(int i; i<5; i++){
        printf("%d", array[i]);
    }

    printf("%p", &array[0]);
    printf("\n%p", &array[0]);
    printf("\n%p", &array[0]);
    printf("\n%p", &array[0]);

    printf("Endereço de memoria: ");
    for(int i; i<5; i++){
        printf("%p", &array[i]);
        printf("\n\n");
    }

    return 0;
}
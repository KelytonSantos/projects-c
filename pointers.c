#include <stdio.h>
#include <stdlib.h>

//um ponteiro é uma variável que armazena o endereço de memória de 
//outra variável. Em outras palavras, um ponteiro "aponta para" o
//local na memória onde um valor está armazenado.

int main(){

     int num = 10;
    int *ptr = &num;


    printf("Numero de memoria da minha num: %p\n", &num);
    printf("Numero de memoria da minha num por meio do meu pointer: %p \n", ptr);
    printf("Numero de memoria do meu ptr: %p \n", &ptr);

    printf("Valor acessado pelo meu ponteiro: %d\n", *ptr);
    printf("Valor da minha num: %d\n", num);
    return 0;
}
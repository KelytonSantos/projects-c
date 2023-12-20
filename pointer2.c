#include <stdio.h>
#include <stdlib.h>


//Alocação dinamica de memoria
int main() {
    
    int *p; 

    p = (int*) malloc(sizeof(int)); /*aqui eu estou dizendo que é do tipo int e mais na
    frente eu digo que o tamanho que eu quero é do tipo int ou seja 4 bytes ou 32bits*/


    printf("Digite o valor do seu ponteiro alocado por malloc: \n");
    scanf("%d", p); /*Aqui no scanf espera um endereço de memoria pra salvar aquele valor
    logo o endereço de memoria é meu p que dentro dele armazena meu malloc*/

    /*  Quando você usa scanf("%d", p);, o valor digitado 
    pelo usuário é armazenado no local de memória para o qual p aponta, ou seja, malloc.*/
    
    printf("Valor de malloc: %d\n", *p);

    return 0;
}

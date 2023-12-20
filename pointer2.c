#include <stdio.h>
#include <stdlib.h>


//Alocação dinamica de memoria
int main() {
    /*função malloc é usado para alocar um bloco de memória de tamanho especifico
    Ela retorna um ponteiro para a área de memoria alocada*/

    int *m;

    m = (int*) malloc(4); /*o int* esta identificando o tipo de memoria(casting pro tipo integer);
    ele retorna o endereço inicial desses 4 bytes de memoria//endereço pra um inteiro*/

    /*o malloc é tipo como se fosse uma variavel na qual meu ponteiro aponta pra ela
    porém em vez de ser uma variavel é um espaço de memória "sem nome" com tamanho especifico*/

    *m = 5; //perceba que aqui eu estou salvando no endereço dado por malloc; *p é o VALOR ACESSADO PELO PONTEIRO

    free(m); //libera o espaço apontado por m;
    /*Obs: malloc reserba um espaço de memoria mas ela não zera o que tem dentro 
    desse espaço de memoria, ou seja, se tiver lixo naquele espaço, vai continuar la*/
    /*O calloc zera esse espaço de memoria*/

    int *c;
    c = (int*) calloc(1,4); /*o calloc recebe dois argumentos: o primeiro é a quantidade
    de elementos que eu quero alocar e o segundo é o tamanho de bytes que esse elemento ocupa*/
    *c = 7000;

    printf("Valor de malloc: %d\n", *m);
    printf("Valor de calloc: %d\n", *c);

    return 0;
}

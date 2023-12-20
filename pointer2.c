#include <stdio.h>

int main() {
    /*esse tamanho aqui é só por conta do for, porque se 
    não ele não consegue percorrer os itens que meu array tem*/
    int tamanho = 5;

    /*aqui meu array com tamanho definido*/
    int numeros[] = {5, 10, 15, 20, 30};

    /*aqui eu, alem de criar um ponteiro, eu associo ele ao meu array.
    Como meu ponteiro é do tipo int, ele so vai conseguir salvar nele o
    valor da primeira posição do meu array(lembrando que eu estou salvando como
    numeros e não *numeros. Ou seja não é o endereço de memoria que to salvando)*/
    int *ponteiro = numeros;

   /*nosso for pra percorrer o array com uma variavel int i e um tamanho do tamanho
   do array*/

    for (int i = 0; i < tamanho; i++) {
        // aqui ele apenas imprime o primeiro valor do array
        printf("Número %d: %d\n", i + 1, *ponteiro);

        /*aqui ele incrementa o ponteiro partindo, então, para outra posição de
        do array.
        Perceba que se eu colocar em vez de ponteiro++ por *ponteiro++ eu altero 
        meu array e não a posição de memoria*/


        ponteiro++;
    }

    return 0;
}

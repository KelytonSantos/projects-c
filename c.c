//resumo de tudo estudado ate aqui com alguns comentarios

#include <stdio.h> // inclui func de entrada e saida.
#include <stdlib.h> // utilizado para incluir func de alocação de memoria
#include <stdbool.h> //inclui o tipo booleano

int main(){ //função principal

    int age = 1; //para inteiro
    float heigh = 2.21; //para ponto flutuante até 4 bytes
    double weight = 70.89; //para ponto flutuante até 8 bytes
    char letter = 'A'; //para caracteres
    bool t = true; //para boolean
    char name[38]; // sequencia de caracteres
    char operador = '+';


    /*captura de teclado e impressão
    %d para inteiro
    %f para ponto flutuante
    %s para formatar ou interpretar strings (char name[x])
    %c para caracteres
    %lf para ponto flutuante de precisão dupla(duas casas)
    %p para interpretar ponteiros

    O & comercial é chamado de operador de endereço
     pois quando adicionado no scanf na frente da variavel ele retorna o
      endereço de memoria onde aquele valor deve ser armazenado    
    */

    printf("imprime algo \n");// \n é pra quebra de linha
    scanf("%d", &age);// a lógica é simples %d para indicar o tipo de variavel e o &age para 
    //indicar onde salvar na memoria

    //estrutura de controle de fluxo

    if(age >0){ //if else
        //faça algo
    } else {
        //faça outra coisa
    }

    switch (operador){ //switch case
        case '+':
            //faça algo
            break;
        case '-':
            //faça algo
            break;
        default:
            //faça algo
    }


    while(/* condition */){ //loop
        //faça algo enquanto a cond for verdadeira
    }

    do //do-while
    {
        //código a ser repetido pelo menos uma vez enquanto a cond for verdadeira
    } while (/* condition */);
    
    for(int i; i<=5; i++){
        //faça algo enquanto o contador não passar pelo numero max
    }
    //adição de break e continue; Break: sai imediatamente de loops(while, do-while, for) e switch
    //continue: é usado para pular o restante do corpo do loop e ir para a próxima ieteração
    //operador ternário

    int a = 10;
    int b = 20;
    int resultado = (a>b) ? a:b; //expressão condicional ? valor se verdadeiro : valor se falso

/*expressão condicional: expressão cujo resultado pode ser falso ou verdadeiro
valor se verdadeiro: valor retornado se expressão for verdadeira
valor se falso: valor retornado se expressão for falsa
*/
    return 0;
}
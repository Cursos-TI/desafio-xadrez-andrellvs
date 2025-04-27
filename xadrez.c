#include <stdio.h> 
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Neste exercício simulamos movimentos através de textos. Cinco casas a direita, por exemplo, basta imprimir a palavra direita cinco vezes.

int main() { //Iniciar
    // Variáveis para definir o número de casas
    int casasTorre = 5; //Cinco casas para frente
    int casasBispo = 5; //Cinco casas a direita+cima diagonal
    int casasRainha = 8; //Oito casas para esquerda

    //Estrutura FOR
    printf("Movimentando a Torre:\n"); //Escrever isto na tela "movimento da torre"
    for (int i = 0; i < casasTorre; i++) { // Condição enquanto "i igual a zero e menor que cinco(casasBispo=5)"
        printf("Direita\n"); //Escreva direita,pular linha.
    }
    
    //Estrutura WHILE
    printf("\nMovimentando o Bispo:\n"); //Escrever movimentando o Bispo
    int i = 0; // i igual a zero
    while (i < casasBispo) { //Quando i for menor 5(casastorre=5)
        printf("Cima Direita\n"); //Escrever cima direita,pular linha
        i++; //Incremento mais 1 a i
    }

    //Estrutura DO-WHILE 
    printf("\nMovimentando a Rainha:\n");//Escrever movimentando a rainha
    int j = 0; //Inteiro J igual a zero
    do { //Faça
        printf("Esquerda\n"); //Escrever esquerda,pule uma linha.
        j++; //Incremente mais um a J
    } while (j < casasRainha); //quando J menor que 8(casasRainha=8)

    // Agora adicionando o movimento do Cavalo, usando FOR e WHILE
    printf("\nMovimentando o Cavalo:\n"); //Escrever movimentando o cavalo

    int movimentosBaixo = 2; //Declara valor de variável para baixo
    int movimentosEsquerda = 1;//Declara valor de variável para esquerda

     //Estrutura for para movimentos para baixo
     for (int k = 0; k < movimentosBaixo; k++) { 
        printf("Baixo\n"); //Escrever baixo
    }
    //Estrutura while para movimentos para esquerda
    int l = 0; //Inteiro l igual 0
    while (l < movimentosEsquerda) {
        printf("Esquerda\n"); //Escrever esquerda
        l++; //Acrescimo em l
    }

    return 0; //Terminar
}
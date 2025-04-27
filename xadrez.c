#include <stdio.h> // Biblioteca padrão de entrada e saída

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) // Caso base: se não há mais casas para mover, termina a função
        return;
    printf("Direita\n"); // Imprime a direção do movimento
    moverTorre(casas - 1); // Chama a função novamente, diminuindo o número de casas
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) // Caso base: quando terminar as casas, para a função
        return;
    printf("Esquerda\n"); // Imprime a direção do movimento
    moverRainha(casas - 1); // Chama a função de forma recursiva
}

// Função recursiva para mover o Bispo com loop aninhado
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) // Caso base: para se uma direção acabar
        return;

    // Loop externo para o movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno para o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n"); // Movimenta na diagonal (cima e direita ao mesmo tempo)
        }
    }

    moverBispo(casasVerticais - 1, casasHorizontais - 1); // Recursão: reduz uma casa vertical e uma horizontal
}

// Função para mover o Cavalo com loops aninhados, usando continue e break
void moverCavalo(int movimentos) {
    printf("\nMovimentando o Cavalo:\n"); // Imprime título da seção do Cavalo

    // Loop externo para a quantidade de movimentos em "L"
    for (int i = 0; i < movimentos; i++) {
        // Loop interno para cada parte do "L"
        for (int j = 0; j < 3; j++) {
            if (j < 2) { // Primeiros dois passos para cima
                printf("Cima\n");
                continue; // Continua para o próximo passo no mesmo loop
            }
            if (j == 2) { // Terceiro passo é para a direita
                printf("Direita\n");
                break; // Encerra o loop interno após completar o "L"
            }
        }
    }
}

// Função principal
int main() {
    int casasTorre = 5;    // Quantidade de casas que a Torre deve andar
    int casasBispo = 5;    // Quantidade de casas que o Bispo deve andar (em diagonal)
    int casasRainha = 8;   // Quantidade de casas que a Rainha deve andar
    int movimentosCavalo = 1; // Quantidade de movimentos "L" do Cavalo

    printf("Movimentando a Torre:\n"); // Inicia o movimento da Torre
    moverTorre(casasTorre); // Chama a função da Torre

    printf("\nMovimentando o Bispo:\n"); // Inicia o movimento do Bispo
    moverBispo(casasBispo, casasBispo); // Chama a função do Bispo

    printf("\nMovimentando a Rainha:\n"); // Inicia o movimento da Rainha
    moverRainha(casasRainha); // Chama a função da Rainha

    moverCavalo(movimentosCavalo); // Chama a função do Cavalo

    return 0; // Encerra o programa
}
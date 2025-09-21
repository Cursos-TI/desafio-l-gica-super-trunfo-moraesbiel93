#include <stdio.h>

int main() {
    // --- Desafio Nível Novato: Movimentando Peças de Xadrez ---
    // Este programa simula o movimento de três peças de xadrez,
    // cada uma utilizando uma estrutura de repetição diferente.

    // --- 1. Movimento da Torre (usando o laço 'for') ---
    // A Torre se move em linha reta. Vamos simular seu movimento
    // por 5 casas para a direita. O laço 'for' é ideal para
    // um número predefinido de iterações.
    printf("--- Movimento da Torre ---\n");
    
    int casas_torre = 5; // Número de casas que a Torre irá se mover.
    
    for (int i = 0; i < casas_torre; i++) {
        // A cada iteração, imprimimos a direção do movimento.
        printf("Direita\n");
    }

    // Adiciona uma linha em branco para melhor legibilidade da saída.
    printf("\n");


    // --- 2. Movimento do Bispo (usando o laço 'while') ---
    // O Bispo se move na diagonal. Vamos simular seu movimento por
    // 5 casas na diagonal para cima e à direita. O laço 'while'
    // verifica a condição antes de cada iteração.
    printf("--- Movimento do Bispo ---\n");
    
    int casas_bispo = 5;      // Número de casas para o movimento.
    int contador_bispo = 0; // Variável de controle inicializada fora do laço.
    
    while (contador_bispo < casas_bispo) {
        // Imprime a combinação de direções para o movimento diagonal.
        printf("Cima, Direita\n");
        contador_bispo++; // Incrementa o contador dentro do laço.
    }

    printf("\n");


    // --- 3. Movimento da Rainha (usando o laço 'do-while') ---
    // A Rainha tem o movimento mais livre. Vamos simular seu movimento
    // por 8 casas para a esquerda. O laço 'do-while' garante que o
    // bloco de código seja executado pelo menos uma vez.
    printf("--- Movimento da Rainha ---\n");
    
    int casas_rainha = 8;     // Número de casas para o movimento.
    int contador_rainha = 0; // Variável de controle.
    
    do {
        // Imprime a direção do movimento.
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador.
    } while (contador_rainha < casas_rainha); // A condição é verificada no final.


    return 0; // Indica que o programa foi concluído com sucesso.
}
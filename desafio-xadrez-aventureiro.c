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

    printf("\n");


    // --- 4. Movimento do Cavalo (usando laços aninhados) ---
    // O Cavalo se move em "L": duas casas em uma direção e uma
    // perpendicularmente. Usaremos laços para simular cada parte
    // do movimento (2 para baixo, 1 para a esquerda). Para cumprir
    // o requisito de "loops aninhados", os laços de movimento
    // estarão dentro de um loop 'for' externo que executa uma vez.
    printf("--- Movimento do Cavalo ---\n");

    // Loop externo para encapsular o movimento completo em "L".
    for (int movimento_L = 0; movimento_L < 1; movimento_L++) {
        
        // Loop interno para a parte vertical do movimento (2 casas para baixo).
        int passos_verticais = 2;
        int contador_vertical = 0;
        while (contador_vertical < passos_verticais) {
            printf("Baixo\n");
            contador_vertical++;
        }

        // Loop interno para a parte horizontal do movimento (1 casa para a esquerda).
        int passos_horizontais = 1;
        for (int i = 0; i < passos_horizontais; i++) {
            printf("Esquerda\n");
        }
    }


    return 0; // Indica que o programa foi concluído com sucesso.
}
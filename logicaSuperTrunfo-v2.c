#include <stdio.h>

// A struct foi mantida para organizar os dados de cada carta
typedef struct {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    unsigned long int populacao; // Modificado para unsigned long int
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    // Declaração das duas cartas que serão comparadas
    Carta carta1, carta2;

    // Variáveis para armazenar os atributos calculados da Carta 1
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis para armazenar os atributos calculados da Carta 2
    float densidade2, pibPerCapita2, superPoder2;
    
    // Variáveis para armazenar o resultado (1 ou 0) de cada comparação
    int compPop, compArea, compPib, compPontos, compDens, compPibPerCapita, compSuperPoder;


    // --- Leitura dos dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (um caractere): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta: ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade/Estado: ");
    scanf(" %[^\n]s", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao); // %lu para unsigned long int

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (um caractere): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta: ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade/Estado: ");
    scanf(" %[^\n]s", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao); // %lu para unsigned long int

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // --- Cálculos para a Carta 1 ---
    densidade1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    superPoder1 = (float)carta1.populacao + carta1.area + carta1.pib + 
                  (float)carta1.pontosTuristicos + pibPerCapita1 + (1.0f / densidade1);

    // --- Cálculos para a Carta 2 ---
    densidade2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;
    superPoder2 = (float)carta2.populacao + carta2.area + carta2.pib + 
                  (float)carta2.pontosTuristicos + pibPerCapita2 + (1.0f / densidade2);

    // --- Comparações ---
    // Para a maioria, o maior valor vence (resultado é 1 se carta1 > carta2)
    compPop = carta1.populacao > carta2.populacao;
    compArea = carta1.area > carta2.area;
    compPib = carta1.pib > carta2.pib;
    compPontos = carta1.pontosTuristicos > carta2.pontosTuristicos;
    compPibPerCapita = pibPerCapita1 > pibPerCapita2;
    compSuperPoder = superPoder1 > superPoder2;
    
    // Para densidade, o MENOR valor vence (resultado é 1 se carta1 < carta2)
    compDens = densidade1 < densidade2;


    // --- Exibição dos Resultados das Comparações ---
    printf("\n\n==============================\n");
    printf("    Comparação de Cartas\n");
    printf("==============================\n");

    // Exibe qual carta venceu e o resultado booleano (1 ou 0)
    printf("População: Carta %d venceu (%d)\n", compPop ? 1 : 2, compPop);
    printf("Área: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPib ? 1 : 2, compPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", compPontos ? 1 : 2, compPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDens ? 1 : 2, compDens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPibPerCapita ? 1 : 2, compPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", compSuperPoder ? 1 : 2, compSuperPoder);

    return 0;
}
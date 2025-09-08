#include <stdio.h>
#include <string.h>

// A struct Carta para organizar os dados
typedef struct {
    char estado;              // Letra de A a H
    char codigo[10];          // Código da carta
    char cidade[30];          // Nome da cidade/estado
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // PIB em bilhões
    int pontosTuristicos;     // Quantidade de pontos turísticos
} Carta;

int main() {
    // Cartas fixas (Bahia e Ceará)
    Carta carta1, carta2, cartaExtra;
    
    // Variáveis para os cálculos
    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;
    float densidadeExtra, pibPerCapitaExtra;

    // --- Carta 1: Bahia ---
    carta1.estado = 'A';
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "Bahia");
    carta1.populacao = 14985284;
    carta1.area = 564733.0;
    carta1.pib = 321.0;
    carta1.pontosTuristicos = 15;

    // --- Carta 2: Ceará ---
    carta2.estado = 'B';
    strcpy(carta2.codigo, "B01");
    strcpy(carta2.cidade, "Ceara");
    carta2.populacao = 9240580;
    carta2.area = 148920.0;
    carta2.pib = 168.0;
    carta2.pontosTuristicos = 12;
    
    // --- Cálculos para as cartas fixas ---
    // Cálculo para a Bahia
    densidade1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    
    // Cálculo para o Ceará
    densidade2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;


    printf("=== Super Trunfo - Cartas Preenchidas ===\n\n");

    // --- Exibindo Bahia com os novos dados ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // --- Exibindo Ceará com os novos dados ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // Perguntar se o usuário quer cadastrar mais uma carta
    char opcao;
    printf("Deseja cadastrar uma nova carta? (s/n): ");
    scanf(" %c", &opcao);

    if (opcao == 's' || opcao == 'S') {
        printf("\n=== Cadastro da nova carta ===\n");

        printf("Estado (A-H): ");
        scanf(" %c", &cartaExtra.estado);

        printf("Código: ");
        scanf("%s", cartaExtra.codigo);

        // Permite ler nomes com espaços
        printf("Cidade: ");
        scanf(" %[^\n]s", cartaExtra.cidade);

        printf("População: ");
        scanf("%d", &cartaExtra.populacao);

        printf("Área (km²): ");
        scanf("%f", &cartaExtra.area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartaExtra.pib);

        printf("Pontos turísticos: ");
        scanf("%d", &cartaExtra.pontosTuristicos);
        
        // --- Cálculo para a carta extra ---
        densidadeExtra = (float)cartaExtra.populacao / cartaExtra.area;
        pibPerCapitaExtra = (cartaExtra.pib * 1000000000) / cartaExtra.populacao;

        // --- Exibir a nova carta com os cálculos ---
        printf("\n=== Nova Carta Cadastrada ===\n");
        printf("Estado: %c\n", cartaExtra.estado);
        printf("Código: %s\n", cartaExtra.codigo);
        printf("Cidade: %s\n", cartaExtra.cidade);
        printf("População: %d\n", cartaExtra.populacao);
        printf("Área: %.2f km²\n", cartaExtra.area);
        printf("PIB: %.2f bilhões\n", cartaExtra.pib);
        printf("Pontos turísticos: %d\n", cartaExtra.pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadeExtra);
        printf("PIB per Capita: %.2f reais\n", pibPerCapitaExtra);
    }

    printf("\nPrograma finalizado!\n");
    return 0;
}
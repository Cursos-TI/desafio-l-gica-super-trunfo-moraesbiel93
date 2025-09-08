#include <stdio.h>

typedef struct {
    char estado;            // Letra de A a H
    char codigo[10];        // Código da carta
    char cidade[30];        // Nome da cidade
    int populacao;          // População
    float area;             // Área em km²
    float pib;              // PIB em bilhões
    int pontosTuristicos;   // Quantidade de pontos turísticos
} Carta;

int main() {
    // Carta 1 - Bahia
    Carta carta1 = {
        'A',                // Estado
        "A01",              // Código
        "Bahia",            // Cidade
        14985284,           // População (IBGE 2022)
        564733.0,           // Área em km²
        321.0,              // PIB em bilhões (aprox.)
        15                  // Pontos turísticos (exemplo)
    };

    // Carta 2 - Ceará
    Carta carta2 = {
        'B',
        "B01",
        "Ceara",
        9240580,
        148920.0,
        168.0,
        12
    };

    // Exibindo as informações
    printf("=== Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n\n", carta1.pontosTuristicos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
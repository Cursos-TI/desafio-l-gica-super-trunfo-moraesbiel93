#include <stdio.h>
#include <string.h>

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
    // Cartas fixas (Bahia e Ceará)
    Carta carta1, carta2, cartaExtra;

    // Bahia
    carta1.estado = 'A';
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "Bahia");
    carta1.populacao = 14985284;
    carta1.area = 564733.0;
    carta1.pib = 321.0;
    carta1.pontosTuristicos = 15;

    // Ceará
    carta2.estado = 'B';
    strcpy(carta2.codigo, "B01");
    strcpy(carta2.cidade, "Ceara");
    carta2.populacao = 9240580;
    carta2.area = 148920.0;
    carta2.pib = 168.0;
    carta2.pontosTuristicos = 12;

    printf("=== Super Trunfo - Cartas Preenchidas ===\n\n");

    // Exibindo Bahia
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n\n", carta1.pontosTuristicos);

    // Exibindo Ceará
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n\n", carta2.pontosTuristicos);

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

        printf("Cidade: ");
        scanf("%s", cartaExtra.cidade);

        printf("População: ");
        scanf("%d", &cartaExtra.populacao);

        printf("Área (km²): ");
        scanf("%f", &cartaExtra.area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartaExtra.pib);

        printf("Pontos turísticos: ");
        scanf("%d", &cartaExtra.pontosTuristicos);

        // Exibir a nova carta
        printf("\n=== Nova Carta Cadastrada ===\n");
        printf("Estado: %c\n", cartaExtra.estado);
        printf("Código: %s\n", cartaExtra.codigo);
        printf("Cidade: %s\n", cartaExtra.cidade);
        printf("População: %d\n", cartaExtra.populacao);
        printf("Área: %.2f km²\n", cartaExtra.area);
        printf("PIB: %.2f bilhões\n", cartaExtra.pib);
        printf("Pontos turísticos: %d\n", cartaExtra.pontosTuristicos);
    }

    printf("\nPrograma finalizado!\n");
    return 0;
}
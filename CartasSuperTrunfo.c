#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- CARTA 2 ---
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- PEGANDO DADOS DA CARTA 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê texto com espaço
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- PEGANDO DADOS DA CARTA 2 ---
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CALCULANDO A DENSIDADE DEMOGRÁFICA ---
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    // --- MENU PARA O JOGADOR ESCOLHER O ATRIBUTO ---
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção (1 a 5): ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n");

    // --- USANDO SWITCH PARA COMPARAR ---
    switch(opcao) {
        case 1: // POPULAÇÃO
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // ÁREA
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE (AQUI MENOR VENCE)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedora: %s\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default: // SE O JOGADOR ERRAR O NÚMERO
            printf("Opção inválida! Escolha entre 1 e 5.\n");
    }

    return 0;
}

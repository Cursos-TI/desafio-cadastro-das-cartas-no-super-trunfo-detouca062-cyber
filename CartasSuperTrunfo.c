#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões
    int pontosTuristicos2;

    // Entrada de dados da carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos adicionais da carta 1
    float densidade1 = (float) populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos adicionais da carta 2
    float densidade2 = (float) populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Saída de dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Saída de dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\n--- Comparacao de Cartas ---\n");
    printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu? %d\n", superPoder1 > superPoder2);

    return 0;
}

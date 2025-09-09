#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões
    int pontosTuristicos1;

    // --- CARTA 2 ---
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões
    int pontosTuristicos2;

    // --- PEGANDO DADOS DA CARTA 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
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

    // --- CALCULOS CARTA 1 ---
    float densidade1 = (float) populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1; // convertendo PIB em reais
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // --- CALCULOS CARTA 2 ---
    float densidade2 = (float) populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // --- MOSTRANDO CARTA 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // --- MOSTRANDO CARTA 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- COMPARAÇÃO AUTOMÁTICA ---
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade1 < densidade2); // aqui vence a menor densidade
    printf("PIB per Capita: Carta 1 venceu? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu? %d\n", superPoder1 > superPoder2);

    // --- MENU INTERATIVO ---
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO MANUAL ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n");

    switch(opcao) {
        case 1:
            printf("População -> %s: %lu | %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("Área -> %s: %.2f km² | %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("PIB -> %s: %.2f bilhões | %s: %.2f bilhões\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos -> %s: %d | %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("Densidade -> %s: %.2f | %s: %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedora: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 6:
            printf("PIB per Capita -> %s: %.2f | %s: %.2f\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder -> %s: %.2f | %s: %.2f\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2) printf("Vencedora: %s\n", nomeCidade1);
            else if (superPoder2 > superPoder1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

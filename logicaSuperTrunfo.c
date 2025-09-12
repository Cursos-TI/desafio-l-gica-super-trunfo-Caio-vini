#include <stdio.h>

int main() {
// ----- CARTA 1 -----
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões
    int PontosTuristicos1;
    float Densidade1;
    float PibPerCapita1;
    float SuperPoder1;

// ----- CARTA 2 -----
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões
    int PontosTuristicos2;
    float Densidade2;
    float PibPerCapita2;
    float SuperPoder2;

// Entrada de dados Carta 1
    printf("Cadastro da carta 1 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (EX: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

// Calculando propriedades da carta 1
    Densidade1 = populacao1 / area1;
    PibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões
    SuperPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) +
                  PontosTuristicos1 + PibPerCapita1 + (1 / Densidade1);

// Entrada de dados Carta 2
    printf("\nCadastro da carta 2 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (EX: B02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

// Calculando propriedades da carta 2
    Densidade2 = populacao2 / area2;
    PibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB está em bilhões
    SuperPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) +
                  PontosTuristicos2 + PibPerCapita2 + (1 / Densidade2);

// Exibir dados das cartas
    printf("\n=====================================================\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per capita: %.2f reais\n", PibPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n=====================================================\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: %.2f reais\n", PibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

// Comparações
    printf("\n=============== Comparação de Cartas ===============\n");

    // População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("População: Carta 2 venceu!\n");
    } else {
        printf("População: Empate!\n");
    }

    // Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu!\n");
    } else if (area2 > area1) {
        printf("Área: Carta 2 venceu!\n");
    } else {
        printf("Área: Empate!\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu!\n");
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 venceu!\n");
    } else {
        printf("PIB: Empate!\n");
    }

    // Pontos turísticos
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else if (PontosTuristicos2 > PontosTuristicos1) {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    } else {
        printf("Pontos Turísticos: Empate!\n");
    }

    // Densidade populacional (menor vence)
    if (Densidade1 < Densidade2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else if (Densidade2 < Densidade1) {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    } else {
        printf("Densidade Populacional: Empate!\n");
    }

    // PIB per capita
    if (PibPerCapita1 > PibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu!\n");
    } else if (PibPerCapita2 > PibPerCapita1) {
        printf("PIB per Capita: Carta 2 venceu!\n");
    } else {
        printf("PIB per Capita: Empate!\n");
    }

    // Super Poder
    if (SuperPoder1 > SuperPoder2) {
        printf("Super Poder: Carta 1 venceu!\n");
    } else if (SuperPoder2 > SuperPoder1) {
        printf("Super Poder: Carta 2 venceu!\n");
    } else {
        printf("Super Poder: Empate!\n");
    }

    printf("\n=====================================================\n");

    return 0;
}

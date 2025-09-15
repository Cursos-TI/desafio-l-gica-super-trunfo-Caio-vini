#include <stdio.h>

int main() {
    // ----- CARTA 1 -----
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // ----- CARTA 2 -----
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao;

    // Entrada de dados Carta 1
    printf("Cadastro da carta 1 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (EX: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // Entrada de dados Carta 2
    printf("\nCadastro da carta 2 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (EX: A02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // Menu de comparação
    printf("\n======= SUPER TRUNFO - COMPARAÇÃO =======\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("=========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", cidade1, cidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu! (menor densidade)\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 5.\n");
    }

    return 0;
}

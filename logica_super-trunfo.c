// Super Trunfo - Comparação Interativa de Cartas de Países
#include <stdio.h>
#include <string.h>

int main() {
    // Dados da carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2.055;
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1; // densidade demográfica

    // Dados da carta 2
    char nomePais2[50] = "Argentina";
    int populacao2 = 45376763;
    float area2 = 2780400.0;
    float pib2 = 0.491;
    int pontosTuristicos2 = 20;
    float densidade2 = populacao2 / area2; // densidade demográfica

    int opcao;

    // Exibição do menu interativo
    printf("Bem-vindo ao Super Trunfo - Comparação de Países!\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Exibição inicial dos nomes das cartas
    printf("\nComparando %s e %s...\n\n", nomePais1, nomePais2);

    // Comparação de acordo com a escolha do usuário
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", nomePais1, populacao1);
            printf("%s: %d\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.3f trilhões de USD\n", nomePais1, pib1);
            printf("%s: %.3f trilhões de USD\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomePais1, pontosTuristicos1);
            printf("%s: %d\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            // Para densidade demográfica, o menor valor vence
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

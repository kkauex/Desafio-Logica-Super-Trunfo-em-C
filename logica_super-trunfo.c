// Super Trunfo - Comparação Interativa de Cartas de Países
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Dados da carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2.055;
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1;

    // Dados da carta 2
    char nomePais2[50] = "Argentina";
    int populacao2 = 45376763;
    float area2 = 2780400.0;
    float pib2 = 0.491;
    int pontosTuristicos2 = 20;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];

    // Menu interativo
    printf("Bem-vindo ao Super Trunfo - Comparação Avançada de Países!\n\n");

    // Escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Validação para impedir seleção duplicada
    if (opcao1 == opcao2) {
        printf("Erro: Os dois atributos devem ser diferentes.\n");
        return 1;
    }

    // Atribuição dos valores e nomes do primeiro atributo
    switch(opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; strcpy(nomeAtributo1, "População"); break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; strcpy(nomeAtributo1, "Área"); break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; strcpy(nomeAtributo1, "PIB"); break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; strcpy(nomeAtributo1, "Pontos Turísticos"); break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; strcpy(nomeAtributo1, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Atribuição dos valores e nomes do segundo atributo
    switch(opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; strcpy(nomeAtributo2, "População"); break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; strcpy(nomeAtributo2, "Área"); break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; strcpy(nomeAtributo2, "PIB"); break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; strcpy(nomeAtributo2, "Pontos Turísticos"); break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; strcpy(nomeAtributo2, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Exibição da comparação
    printf("\nComparando %s e %s...\n\n", nomePais1, nomePais2);

    // Exibir valores e fazer comparações
    printf("%s:\n  %s: %.2f\n  %s: %.2f\n", nomePais1, nomeAtributo1, valor1_carta1, nomeAtributo2, valor2_carta1);
    printf("%s:\n  %s: %.2f\n  %s: %.2f\n", nomePais2, nomeAtributo1, valor1_carta2, nomeAtributo2, valor2_carta2);

    // Comparações individuais (com ternário e regra da densidade invertida)
    int vitorias1 = 0, vitorias2 = 0;
    vitorias1 += (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    vitorias2 += (opcao1 == 5) ? (valor1_carta2 < valor1_carta1) : (valor1_carta2 > valor1_carta1);

    vitorias1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    vitorias2 += (opcao2 == 5) ? (valor2_carta2 < valor2_carta1) : (valor2_carta2 > valor2_carta1);

    // Soma total dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", nomePais1, soma1, nomePais2, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nResultado: %s venceu!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("\nResultado: %s venceu!\n", nomePais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}

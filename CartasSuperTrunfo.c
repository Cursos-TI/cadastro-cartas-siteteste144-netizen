#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    char linha[100];

    // Entrada da Carta 1
    printf("=== Carta 1 ===\n");

    printf("Estado: ");
    fgets(linha, sizeof(linha), stdin);
    estado1 = linha[0];

    printf("Codigo: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &populacao1);

    printf("Area: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%f", &area1);

    printf("PIB: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &pontos1);

    // Entrada da Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    fgets(linha, sizeof(linha), stdin);
    estado2 = linha[0];

    printf("Codigo: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &populacao2);

    printf("Area: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%f", &area2);

    printf("PIB: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &pontos2);

    // Exibição Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    // Exibição Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}


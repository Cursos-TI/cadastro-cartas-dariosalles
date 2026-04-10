#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// funções para calcular a densidade populacional e o PIB per capita
float calcularDensidade(int populacao, float area) {
    if (area == 0) return 0; // evita divisão por zero
    return populacao / area;
}

float calcularPIBPerCapita(float pib, int populacao) {
    if (populacao == 0) return 0; // evita divisão por zero
    return pib / populacao;
}

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    struct Carta {
        char estado[50];
        int codigo_carta;
        char nome_cidade[100];
        int populacao;
        float area;
        float pib;
        int numero_pontos_turisticos;
    };
  
    struct Carta carta1, carta2;

    // Área para entrada de dados
    // Entrada de dados - Carta 1
  
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (UF): ");
    scanf(" %[^\n]", carta1.estado);

    printf("Codigo da carta (Somente números): ");
    scanf("%d", &carta1.codigo_carta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    // Entrada de dados - Carta 2
  
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (UF): ");
    scanf(" %[^\n]", carta2.estado);

    printf("Codigo da carta (Somente números): ");
    scanf("%d", &carta2.codigo_carta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.numero_pontos_turisticos);

    // funções para calcular a densidade populacional e o PIB per capita
    float densidade1 = calcularDensidade(carta1.populacao, carta1.area);
    float pibPerCapita1 = calcularPIBPerCapita(carta1.pib, carta1.populacao);

    float densidade2 = calcularDensidade(carta2.populacao, carta2.area);
    float pibPerCapita2 = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Área para exibição dos dados da cidade
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %d\n", carta1.codigo_carta);
    printf("Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %d\n", carta2.codigo_carta);
    printf("Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    return 0;
}
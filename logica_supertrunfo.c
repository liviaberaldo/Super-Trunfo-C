#include <stdio.h>

// Definição de estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};
    
    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = carta1.populacao / carta1.area;
    float pibPerCapita1 = carta1.pib * 1000000000 / carta1.populacao; // PIB convertido de bilhões para reais
    
    float densidade2 = carta2.populacao / carta2.area;
    float pibPerCapita2 = carta2.pib * 1000000000 / carta2.populacao; // PIB convertido de bilhões para reais
    
    printf("Cadastro das Cartas do Super Trunfo\n\n");
    
    // Exibição das informações das cartas cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}

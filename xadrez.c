#include <stdio.h>

// Definindo a estrutura para armazenar as informações de cada cidade
typedef struct {
    char estado[3];           // Código do estado (ex: "A", "B")
    char codigo[4];           // Código da cidade (ex: "A01", "B02")
    char nomeCidade[50];      // Nome da cidade
    int populacao;            // População da cidade
    float area;               // Área da cidade em km²
    float pib;                // PIB da cidade em bilhões de reais
    int pontosTuristicos;     // Número de pontos turísticos
} Cidade;

int main() {
    // Criando duas instâncias de Cidade para armazenar os dados das duas cartas
    Cidade cidade1 = {"A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    Cidade cidade2 = {"B", "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    // Exibindo os dados das cidades
    printf("Informações sobre a cidade 1:\n");
    printf("Estado: %s\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nomeCidade);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.pontosTuristicos);
    printf("\n");

    printf("Informações sobre a cidade 2:\n");
    printf("Estado: %s\n", cidade2.estado);
    printf("Código: %s\n", cidade2.codigo);
    printf("Nome da Cidade: %s\n", cidade2.nomeCidade);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f bilhões de reais\n", cidade2.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade2.pontosTuristicos);

    return 0;
}
#include <stdio.h>

// Definindo a estrutura para armazenar as informações da cidade
struct Cidade {
    char estado[3];           // Estado (2 letras + terminador nulo)
    char codigo[5];           // Código (4 caracteres + terminador nulo)
    char nome[100];           // Nome da cidade
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // PIB em bilhões de reais
    int numPontosTuristicos;  // Número de pontos turísticos
};

int main() {
    // Criando uma instância da estrutura e atribuindo valores
    struct Cidade cidade1 = {
        "A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50
    };

    // Exibindo as informações
    printf("Cidade: %s\n", cidade1.nome);
    printf("Estado: %s\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.numPontosTuristicos);

    return 0;
}
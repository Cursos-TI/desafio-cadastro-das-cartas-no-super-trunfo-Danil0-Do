#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'R'; 
    char codigo1[4] = "R01";
    char nomeCidade1[50] = "Rio de Janeiro";
    int populacao1 = 6748000;
    float area1 = 1182.3;
    float pib1 = 632.3;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'S';
    char codigo2[4] = "S02";
    char nomeCidade2[50] = "São Paulo";
    int populacao2 = 12325232;
    float area2 = 1521.11;
    float pib2 = 699.9;
    int pontosTuristicos2 = 60;

    // Exibição
    printf("Super Trunfo - Cartas de Cidades Brasileiras\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
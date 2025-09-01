#include <stdio.h>

int main() {

    // Declaração de variáveis para a Carta 1
    char estado1[3]; // Para armazenar o estado + o terminador nulo '\0'
    char codigoCarta1[4]; // Ex: "A01"
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2[3]; // Para armazenar o estado + o terminador nulo '\0'
    char codigoCarta2[4]; // Ex: "B02"
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da carta 1
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (ex: BA): ");
    scanf(" %3s", estado1);
    
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigoCarta1);
    
    printf("Digite o Nome da Cidade (sem espaços): ");
    scanf(" %49s", nomeCidade1);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cadastro da carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Digite o Estado (ex: BA): ");
    scanf(" %3s", estado2);
    
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigoCarta2);
    
    printf("Digite o Nome da Cidade (sem espaços): ");
    scanf(" %49s", nomeCidade2);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);ba
        
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe a Carta 1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n ", area1);
    printf("PIB: %.2f R$\n ", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    
    // Exibe a Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n ", area2);
    printf("PIB: %.2f R$\n ", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    
    return 0;
    
}
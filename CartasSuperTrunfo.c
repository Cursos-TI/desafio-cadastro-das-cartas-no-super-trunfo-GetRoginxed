#include <stdio.h>

int main() {

    char estado = "A"; // Letra de 'A' a 'H' para identificar o estado da cidade
    char codigo[3] = "01"; // Código da cidade, composto por 2 dígitos (inicia-se em '01',)
    char nome[50] = "a";// Nome da cidade (nome único, sem espaços)
    int populacao = 1; // População da cidade
    float area = 1.0; // Área da cidade em km²
    float pib = 1.0; // PIB da cidade em bilhões de reais
    int pontos_turisticos = 1; // Número de pontos turísticos da cidade

    // Cadastro da 1ª cidade
    // Cadastro do estado
    printf("Digite uma letra de 'A' a 'H' para identificar o estado da 1ª cidade: ");
    scanf(" %c", &estado);

    // Cadastro do código identificador da cidade
    printf("Digite o código de 2 dígitos da 1ª cidade, indo de '01' até '04': ");
    scanf("%2s", codigo);

    // Cadastro do nome da cidade
    printf("Digite o nome da 1ª cidade (nome único, sem espaços): ");
    scanf("%s", nome);

    // Cadastro da população total da cidade, número completo
    printf("Digite a população da 1ª cidade: ");
    scanf("%i", &populacao);

    // Cadastro da área em km²
    printf("Digite a área da 1ª cidade em km²: ");
    scanf("%f", &area);

    // Cadastro do PIB da cidade em bilhões de reais
    printf("Digite o PIB da 1ª cidade em bilhões de reais: ");
    scanf("%f", &pib);

    // Cadastro do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos da 1ª cidade: ");
    scanf("%i", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %i\n", 
           estado, estado, codigo, nome, populacao, area, pib, pontos_turisticos);

    // Cadastro da 2ª cidade
    // Cadastro do estado
    printf("\nDigite uma letra de 'A' a 'H' para identificar o estado da 2ª cidade: ");
    scanf(" %c", &estado);

    // Cadastro do código identificador da cidade
    printf("Digite o código de 2 dígitos da 2ª cidade, indo de '01' até '04': ");
    scanf("%2s", codigo);

    // Cadastro do nome da cidade
    printf("Digite o nome da 2ª cidade (nome único, sem espaços): ");
    scanf("%s", nome);

    // Cadastro da população total da cidade, número completo
    printf("Digite a população da 2ª cidade: ");
    scanf("%i", &populacao);

    // Cadastro da área em km²
    printf("Digite a área da 2ª cidade em km²: ");
    scanf("%f", &area);

    // Cadastro do PIB da cidade em bilhões de reais
    printf("Digite o PIB da 2ª cidade em bilhões de reais: ");
    scanf("%f", &pib);

    // Cadastro do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos da 2ª cidade: ");
    scanf("%i", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %i\n", 
           estado, estado, codigo, nome, populacao, area, pib, pontos_turisticos);
    return 0;
}

#include <stdio.h>

int main() {

    char estado1 = "A", estado2 = "B"; // Letra de 'A' a 'H' para identificar o estado da cidade
    char codigo1[3] = "01", codigo2[3] = "02"; // Código da cidade, composto por 2 dígitos (inicia-se em '01',)
    char nome1[50] = "a", nome2[50] = "b";// Nome da cidade (nome único, sem espaços)

    unsigned int populacao1 = 1, populacao2 = 2; // População da cidade
    int pontosTuristicos1 = 1, pontosTuristicos2 = 2; // Número de pontos turísticos da cidade
    
    float area1 = 1.0, area2 = 2.0; // Área da cidade em km²
    float pib1 = 1.0, pib2 = 2.0; // PIB da cidade em bilhões de reais
    float densidadePopulacional1 = 1.0, densidadePopulacional2 = 2.0; // Valor da população dividio pela área
    float pibPerCapita1 = 1.0, pibPerCapita2 = 2.0; // Valor do PIB dividido pela população
    float superPoder1 = 1.0, superPoder2 = 2.0;

    // Cadastro da 1ª cidade
    // Cadastro do estado
    printf("Digite uma letra de 'A' a 'H' para identificar o estado da 1ª cidade: ");
    scanf(" %c", &estado1);

    // Cadastro do código identificador da cidade
    printf("Digite o código de 2 dígitos da 1ª cidade, indo de '01' até '04': ");
    scanf("%2s", codigo1);

    // Cadastro do nome da cidade
    printf("Digite o nome da 1ª cidade (nome único, sem espaços): ");
    scanf("%s", nome1);

    // Cadastro da população total da cidade, número completo
    printf("Digite a população da 1ª cidade: ");
    scanf("%i", &populacao1);

    // Cadastro da área em km²
    printf("Digite a área da 1ª cidade em km²: ");
    scanf("%f", &area1);

    // Cadastro do PIB da cidade em bilhões de reais
    printf("Digite o PIB da 1ª cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    // Cadastro do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos da 1ª cidade: ");
    scanf("%i", &pontosTuristicos1);

    // Calcula a densidade populacional e PIB per capita com os dados fornecidos da cidade 1
    densidadePopulacional1 = (float) populacao1 / area1; // Divide a população pela área
    float pibEmReais1 = (float) pib1 * 1000000000;
    pibPerCapita1 = pibEmReais1/ populacao1; // Converte o PIB de bilhões de reais para reais e divide pela população


    // Calcula o super poder da carta 1
    superPoder1 = (float) populacao1 + (float) pontosTuristicos1 + area1 + pib1 + pibPerCapita1 + ((float)1 / densidadePopulacional1);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f km²\nPIB: %.3f bilhões de reais\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f Hab/km²\nPIB per capita: R$ %.2f/Hab\nSuper Poder: %.3f\n", 
           estado1, estado1, codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1);

    // Cadastro da 2ª cidade
    // Cadastro do estado
    printf("\nDigite uma letra de 'A' a 'H' para identificar o estado da 2ª cidade: ");
    scanf(" %c", &estado2);

    // Cadastro do código identificador da cidade
    printf("Digite o código de 2 dígitos da 2ª cidade, indo de '01' até '04': ");
    scanf("%2s", codigo2);

    // Cadastro do nome da cidade
    printf("Digite o nome da 2ª cidade (nome único, sem espaços): ");
    scanf("%s", nome2);

    // Cadastro da população total da cidade, número completo
    printf("Digite a população da 2ª cidade: ");
    scanf("%i", &populacao2);

    // Cadastro da área em km²
    printf("Digite a área da 2ª cidade em km²: ");
    scanf("%f", &area2);

    // Cadastro do PIB da cidade em bilhões de reais
    printf("Digite o PIB da 2ª cidade em bilhões de reais: ");
    scanf("%f", &pib2);

    // Cadastro do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos da 2ª cidade: ");
    scanf("%i", &pontosTuristicos2);

    // Calcula a densidade populacional e PIB per capita com os dados fornecidos da cidade 1
    densidadePopulacional2 = (float) populacao2 / area2; // Divide a população pela área
    float pibEmReais2 = (float) pib2 * 1000000000;
    pibPerCapita2 = (float) pibEmReais2 / populacao2; // Converte o PIB de bilhões de reais para reais e divide pela população
        
    // Calcula o super poder da carta 2
    superPoder2 = (float) populacao2 + (float) pontosTuristicos2 + area2 + pib2 + pibPerCapita2 + ((float)1 / densidadePopulacional2);

    // Exibição dos dados cadastrados
    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f Hab/km²\nPIB per capita: R$ %.2f/Hab\nSuper Poder: %.3f\n", 
           estado2, estado2, codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);
 
    // Comparando valores
    printf("\nResultado:\nPopulação: Carta %u venceu\nÁrea: Carta %d venceu\nPIB: Carta %d venceu\nNúmero de Pontos Turísticos: Carta %d venceu\nDensidade Populacional: Carta %d venceu\nPIB per capita: Carta %d venceu\nSuper Poder: Carta %d venceu\n", 
           populacao1 > populacao2, area1 > area2, pib1 > pib2, pontosTuristicos1 > pontosTuristicos2, densidadePopulacional1 < densidadePopulacional2, pibPerCapita1 > pibPerCapita2, superPoder1 > superPoder2);


    return 0;
}

#include <stdio.h>

int main() {

   char estado1 = "A", estado2 = "B"; // Letra de 'A' a 'H' para identificar o estado da cidade
   char codigo1[3] = "01", codigo2[3] = "02"; // Código da cidade, composto por 2 dígitos (inicia-se em '01',)
   char nome1[50] = "a", nome2[50] = "b";// Nome da cidade (nome único, sem espaços)

   unsigned int populacao1 = 1, populacao2 = 2; // População da cidade
   int pontosTuristicos1 = 1, pontosTuristicos2 = 2; // Número de pontos turísticos da cidade
   int opcao = 0; // Variável usada para interação com o menu
    
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
   
   // Menu de escolha de atributo para comparar
   printf("Escolha o atributo para comparar\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade populacional\n");
   printf("6. PIB per capita\n");
   printf("7. Super poder\n");
   scanf("%d", &opcao);
      
   // Ações do menu
   switch(opcao){
      case 1: // Compara a população das duas cidades e exibe a cidade com maior população
         printf("### BATALHA DE POPULAÇÃO ###\n");
         printf("Qual cidade tem a maior população?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (populacao1 > populacao2){
            printf("### %s venceu! ###\n", nome1);
         } else if(populacao2 > populacao1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%d habitantes de %s contra %d habitantes de %s\n", populacao1, nome1, populacao2, nome2);
         break;
      case 2: // Compara a área das duas cidades e exibe a cidade com maior área
         printf("### BATALHA DE ÁREA ###\n");
         printf("Qual cidade tem a maior área em km²?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (area1 > area2){
            printf("### %s venceu! ###\n", nome1);
         } else if(area2 > area1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%.2f km² de %s contra %.2f km² de %s\n", area1, nome1, area2, nome2);
         break;
      case 3: // Compara o PIB das duas cidades e exibe a cidade com maior PIB
         printf("### BATALHA DE PIB ###\n");
         printf("Qual cidade tem o maior PIB?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (pib1 > pib2){
            printf("### %s venceu! ###\n", nome1);
         } else if(pib2 > pib1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%.2f bilhões de reais de %s contra %.2f bilhões de reais de %s\n", pib1, nome1, pib2, nome2);
         break;
      case 4: // Compara o número de pontos turísticos das duas cidades e exibe a cidade com maior número
         printf("### BATALHA DE TURISMO ###\n");
         printf("Qual cidade tem o maior número de pontos turísticos?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (pontosTuristicos1 > pontosTuristicos2){
            printf("### %s venceu! ###\n", nome1);
         } else if(pontosTuristicos2 > pontosTuristicos1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%d pontos turísticos de %s contra %d pontos turísticos de %s\n", pontosTuristicos1, nome1, pontosTuristicos2, nome2);
         break;
      case 5: // Compara a densidade populacional das duas cidades e exibe a cidade com menor valor
         printf("### BATALHA DE DENSIDADE GEOGRÁFICA ###\n");
         printf("Qual cidade tem o menor número de pessoas por km²?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (densidadePopulacional1 < densidadePopulacional2){
            printf("### %s venceu! ###\n", nome1);
         } else if(densidadePopulacional2 < densidadePopulacional1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%.2f Hab/km² de %s contra %.2f Hab/km² de %s\n", densidadePopulacional1, nome1, densidadePopulacional2, nome2);
         break;
      case 6: // Compara o PIB per capita das duas cidades e exibe a cidade com maior valor
         printf("### BATALHA DE RICOS ###\n");
         printf("Qual cidade tem o maior PIB per capita?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (pibPerCapita1 > pibPerCapita2){
            printf("### %s venceu! ###\n", nome1);
         } else if(pibPerCapita2 > pibPerCapita1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("R$ %.2f/Hab de %s contra R$ %.2f/Hab de %s\n", pibPerCapita1, nome1, pibPerCapita2, nome2);
         break;
      case 7: // Compara o super poder das duas cidades e exibe a cidade com maior valor
         printf("### SUPER BATALHA ###\n");
         printf("Qual cidade tem o maior Super Poder?\n");
         printf("%s VS %s\n", nome1, nome2);
         if (superPoder1 > superPoder2){
            printf("### %s venceu! ###\n", nome1);
         } else if(superPoder2 > superPoder1){
            printf("### %s venceu! ###\n", nome2);
         } else{
            printf("### EMPATE! ###\n");
         }
         printf("%.3f de poder de %s contra %.3f de poder de %s\n", superPoder1, nome1, superPoder2, nome2);
         break;
      default:
         printf("Opção inválida!\n");
   }

   return 0;
}

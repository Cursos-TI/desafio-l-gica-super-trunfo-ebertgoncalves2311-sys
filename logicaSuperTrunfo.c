#include <stdio.h>

int main() {
    
//Mensagem de boas vindas

printf("Seja bem vindo ao jogo de cartas Super Trunfo!\n");

//Definindo variáveis da primeira carta

char nome_cidade1[20], codigocarta1[3], estado1[20];
int populacao1, pontos_turisticos1;
float area1, pib1, densidade1,  pibpercapta1;

//Definindo variáveis da segunda carta

char nome_cidade2[20], codigocarta2[3], estado2[20];
int populacao2, pontos_turisticos2;
float area2, pib2, densidade2, pibpercapta2;

//Cadastro de primeira carta

printf("== CADASTRO DE PRIMEIRA CARTA ==\n  ");

printf("Digite o estado(A-H): ");
scanf("%s",  estado1);

printf("Digite o codigo da carta (ex A01): ");
scanf("%s",   codigocarta1);

printf("Digite o nome da cidade: ");
scanf("%s", nome_cidade1);

printf("Digite a populacao:  ");
scanf("%d",   &populacao1);

printf("Digite a area(em Km²):  ");
scanf("%f",   &area1);

printf("Digite o pib:  ");
scanf("%f",  &pib1);

printf("Digite o número de pontos turisticos:  ");
scanf("%d",   &pontos_turisticos1);

//Cadastro segunda carta

printf("== CADASTRO DE SEGUNDA CARTA ==\n  ");

printf("Digite o estado(A-H): ");
scanf("%s",  estado2);

printf("Digie o codigo da carta (ex A01): ");
scanf("%s",   codigocarta2);

printf("Digite o nome da cidade: ");
scanf("%s", nome_cidade2);

printf("Digite a populacao:  ");
scanf("%d",   &populacao2);

printf("Digite a area(em Km²):  ");
scanf("%f",   &area2);

printf("Digite o pib:  ");
scanf("%f",  &pib2);

printf("Digite o número de pontos turisticos:  ");
scanf("%d",   &pontos_turisticos2);

//Calculando densidade e pib percapita da cidade 1:

densidade1 = (float)populacao1 / area1;
pibpercapta1 = (float)pib1 / populacao1;

//Calculando densidade e pib percapita da cidade 2:

densidade2 = (float)populacao2 / area2; 
pibpercapta2 = (float)pib2 / populacao2;

//Exibindo informacoes da primeira carta

printf("== CARTA 1 ==\n");
printf("Estado: %s\n",  estado1);
printf("Codigo: %s\n", codigocarta1);
printf("Cidade: %s\n", nome_cidade1);
printf("Populaçao: %d\n",  populacao1);
printf("Área: %.f\n",  area1);
printf("Pib: %.f\n",  pib1);
printf("Pontos turísticos: %d\n",  pontos_turisticos1);
printf("A densidade é: %.2f\n", densidade1);
printf("O pib percapita é: %.2f\n", pibpercapta1);

//Exibindo informacoes da segunda carta

printf("== CARTA 2 ==\n");
printf("Estado: %s\n",  estado2);
printf("Codigo: %s\n", codigocarta2);
printf("Cidade: %s\n", nome_cidade2);
printf("Populaçao: %i\n",  populacao2);
printf("Área: %.f\n",  area2);
printf("Pib: %.f\n",  pib2);
printf("Pontos turísticos: %d\n",  pontos_turisticos2);
printf("A densidade é: %.2f\n", densidade2);
printf("O pib percapita é: %.2f\n", pibpercapta2);

//Iniciando comparação de população e definindo carta vencedora

printf("== COMPARAÇÃO DE POPULAÇÃO ==\n");
printf("Carta 1 - %s, População: %d\n", nome_cidade1, populacao1);
printf("Carta 2 - %s, População: %d\n", nome_cidade2, populacao2);

if (populacao1 > populacao2)
      {
    printf("Carta 1 - %s tem maior população e é vencedora!\n", nome_cidade1);
      } else if (populacao2 > populacao1) {
    printf("Carta 2 - %s  tem maior população e é vencedora!\n", nome_cidade2);
   } else {
    printf("As duas cartas tem a mesma população!\n");
   }

    return 0;
}

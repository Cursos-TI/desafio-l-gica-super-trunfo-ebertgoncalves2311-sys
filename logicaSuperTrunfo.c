#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

//Mensagem de boas vindas

printf("Seja bem vindo ao jogo de cartas Super Trunfo!\n");

//Definindo variáveis da primeira carta

char nome_cidade1[20], codigocarta1[3], estado1[20];
int populacao1, pontos_turisticos1;
float area1, pib1;

//Definindo variáveis da segunda carta

char nome_cidade2[20], codigocarta2[3], estado2[20];
int populacao2, pontos_turisticos2;
float area2, pib2;

//Cadastro de primeira carta

printf("== CADASTRO DE PRIMEIRA CARTA ==\n  ");

printf("Digite o estado(A-H): ");
scanf("%s",  estado1);

printf("Digie o codigo da carta (ex A01): ");
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

//Exibindo informacoes da primeira carta

printf("== CARTA 1 ==\n");
printf("Estado: %s\n",  estado1);
printf("Codigo: %s\n", codigocarta1);
printf("Cidade: %s\n", nome_cidade1);
printf("Populaçao: %d\n",  populacao1);
printf("Área: %.f\n",  area1);
printf("Pib: %.f\n",  pib1);
printf("Pontos turísticos: %d\n",  pontos_turisticos1);

//Exibindo informacoes da segunda carta

printf("== CARTA 2 ==\n");
printf("Estado: %s\n",  estado2);
printf("Codigo: %s\n", codigocarta2);
printf("Cidade: %s\n", nome_cidade2);
printf("Populaçao: %i\n",  populacao2);
printf("Área: %.f\n",  area2);
printf("Pib: %.f\n",  pib2);
printf("Pontos turísticos: %d\n",  pontos_turisticos2);

if (populacao1 > populacao2)

     {
    printf("Cidade 1 tem maior população.\n");
     } else {
    printf("Cidade 2 tem maior população.\n");
     }

     if(area1 > area2) 
     {
      printf("Cidade 1 tem a área maior\n");
     } else {
        printf("Cidade 2 tem a área maior\n");
     }


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

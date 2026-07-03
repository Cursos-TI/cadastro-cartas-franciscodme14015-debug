#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades da carta A
char estadoA;
  char codCartaA;
    char nomeCidadeA;
     int populacaoA;
      float areaA;
        float pibA;
  int pontosTuristicoA;
        float densidPopulacionalA =populacaoA/areaA;
        float pibPerCapitaA=  pibA/areaA;
   // Área para definição das variáveis para armazenar as propriedades das cidades da carta b
  char estadoB;
     char codCartaB;
       char nomeCidadeB;
        int populacaoB;
         float areaB;
         float pibB;
           int pontosTuristicoB;
             float densidPopulacionalB =populacaoB/areaB;
                float pibPerCapitaB=  pibB/areaB;
// Área para entrada de dados da carta A
printf("vamos comecar a o jogo do super trunfo, comecando pela carta A \n");
  printf("digite o estado da carta A:\n");
    scanf("%s", &estadoA);
       printf("digite o codigo da sua carta A \n");
         scanf("%d", &codCartaA);
            printf("digite nome da cidade A \n");
              scanf("%s", &nomeCidadeA);
                 printf("digite o numero de habitante da carta A\n");
                   scanf("%f", &populacaoA);
                      printf("qual o tamanho da area da carta A\n");
                         scanf("%f", &areaA);
                          printf("digite o pib da cidade A \n");
                            scanf("%f", &pibA);
                               printf("quantos pontos turistico existe na cidade A \n");
                                  scanf("%d", &pontosTuristicoA);

                                  // area para exibicao de dados da carta A
printf("dados da carta A: \n");
  printf("estado da carta A: %s \n", &estadoA); 
    printf(" codigo da carta A(o codigo deve ser de 0 a 9): %d \n", &codCartaA);//especificado a faixa de codigo que pode ser usado
      printf("cidade da carta A: %s \n", &nomeCidadeA);
        printf("a populacao da cidade A e %d \n", populacaoA);
          printf("a area da cidade A e %d \n", &areaA);
            printf(" o  bip da sua cidade A e %f \n", &pibA);
              printf("existem %d pontos turisticos na sua cidade A \n", pontosTuristicoA);

              // area para entrada de dados da carta B
 printf("vamos continuar o jogo cadastrando a carta b \n \n ");
  printf("digite o estado da carta B:\n");
    scanf("%s", &estadoB);
       printf("digite o codigo da sua carta B \n");
         scanf("%d", &codCartaB);
            printf("digite nome da cidade B \n");
              scanf("%s", &nomeCidadeB);
                 printf("digite o numero de habitante da carta B\n");
                   scanf("%f", &populacaoB);
                      printf("qual o tamanho da area da carta B\n");
                         scanf("%f", &areaB);
                          printf("digite o pib da cidade B \n");
                            scanf("%f", &pibB);
                               printf("quantos pontos turistico existe na cidade B \n");
                                  scanf("%d", &pontosTuristicoB);
                                  printf("dados da carta B: \n");


//// area para exibicao de dados da carta B
  printf("estado da carta B %s \n", &estadoB);
    printf(" codigo da carta B: %d \n", &codCartaB);
      printf("cidade da carta B: %s \n", &nomeCidadeB);
        printf("a populacao da cidade B e %d \n", populacaoB);
          printf("a area da cidade B e %d \n", &areaB);
            printf(" o  bip da sua cidade B e %d \n", &pibB);
              printf("existem %d pontos turisticos na sua cidade B \n", pontosTuristicoB);

    ///area para comparacao de dados entre as cartas A e B
  printf("a populacao da cidade A (%d)e maior que a populacao da cidade B (%d): %d\n",populacaoA, populacaoB, populacaoA>populacaoB);
    printf("a area da cidade A é %d e é maior que a area da cidade b %d, %d\n", areaA, areaB, areaA<areaB);
      printf(" o pib da cidade A e %d e o pib da cidade B e %d, a cidade A tem o pib maior que B? %d\n", pibA, pibB, pibA>pibB);
        printf("a cidade a tem mais ponttos turisticos?: %d\n",pontosTuristicoA>pontosTuristicoB);
          printf("a densidade populacional da cidade A %d e  da cidade %d,qual a maior? %d\n",densidPopulacionalA>densidPopulacionalB);
            printf("o pib per capita da cidade B e igual da cidade A? %d\n", pibB==pibA);




    












  return 0;
} 



























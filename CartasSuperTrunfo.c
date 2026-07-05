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
            printf("digite nome da cidade A \n"); //perguntando o nome da cidade
              scanf("%s", &nomeCidadeA);
                 printf("digite o numero de habitante da carta A\n"); //perguntando ao usuario a quandidade de habitantes
                   scanf("%f", &populacaoA);
                      printf("qual o tamanho da area da carta A\n"); // perguntando ao usuario o tamanho da area da sua cidade
                         scanf("%f", &areaA);
                          printf("digite o pib da cidade A ?\n"); //perguntando ao usuario o pib
                            scanf("%f", &pibA);
                               printf("quantos pontos turistico existe na cidade A ? \n"); // perguntando ao usuario os pontos turisticos
                                  scanf("%d", &pontosTuristicoA);

                                  // area para exibicao de dados da carta A
                                      printf("dados da carta A: \n");
                                        printf("estado da carta A: %s \n", &estadoA); 
                                           printf(" codigo da carta A(o codigo deve ser de 0 a 9): %d \n", &codCartaA);//especificado a faixa de codigo que pode ser usado
                                            printf("cidade da carta A: %s \n", &nomeCidadeA); //%s de string pra entrada de tesxto
                                              printf("a populacao da cidade A e %d \n", populacaoA);
                                                  printf("a area da cidade A e %d \n", &areaA);
                                                     printf(" o  bip da sua cidade A e %f \n", &pibA); //%f entrada de dados com pontos flutuantes
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
                                    
                                        //vamos comparar usando estrutura composta qual carta vence o desafio
          printf("comparando as cartas  A e B \n \n");
                   if(populacaoA>populacaoB){ //comparando populacao
                  printf("no atributo populacao a cartaA venceu  \n \n"); // carta com maior populacao vence
               }
                    else{
                  printf(" no quesito populacao a cartaB venceu \n \n");
                }
            // comparando area da cidades A B
          if(areaA> areaB){// carta com maior area vence
            printf(" no quasito area a carta A vence  \n \n");
          } else{
            printf(" no quesito area a cartaB vence\n \n");
          }
      // comparando densidade das cidades A B (carta com menor densidade vence)

  if(densidPopulacionalA<densidPopulacionalB){ //carta com menor densidade vence
      printf("no quesito densidade a cartaA vence \n \n");
    }   else{
      printf("no qusito densidade a cartaB venc \n \n");
      // comparando o pib
    }
      if(pibA>pibB){ // carta com maior pib vence
        printf("no quesito pib a cartaA vence \n  \n");
      } else{
        printf("npo quesito pib a cartaB vence \n \n");
      }
///comparando codigo de cada carta
if(codCartaA>codCartaB){ //carta com maior codigo vnce
  printf("no quesito codigo a cartaA vence \n \n");
} else{
  printf("no quesito codigo a cartaB vence  \n \n");
}
//comparando pontos turisticos
if(pontosTuristicoA>pontosTuristicoB){ //carta com maior quandidade de pontos turisticos vence
  printf("no qusito pontos turisticos a cartaA vence \n \n");
} else{
  printf("no qusito pontos turisticos a cartaB vence \n \n");
}

printf(" a carta com maior atributos ganha \n \n"); /// mensagem explicando criterios de vencedor

    






return 0;
} 



























#include <stdio.h>
#include <string.h>

int main (){
   char estadoCarta1,estadoCarta2;
   char codigoCarta1[5],codigoCarta2[5];
   char cidadeCarta1[50],cidadeCarta2[50];
   unsigned long int populacaoCidade1,populacaoCidade2;
   float areaCidade1,areaCidade2;
   float pibCidade1,pibCidade2;
   float qtdPontoTC1,qtdPontoTC2;

   printf("Carta1:\n estado, cosigo, cidade, população, area pib, pontos turisticos");
   scanf("%c", &estadoCarta1);
   scanf("%s", &codigoCarta1);
   fgets(cidadeCarta1,50,stdin);
   cidadeCarta1[strcspn(cidadeCarta1,"\n")] = 0;
   scanf("%f",&areaCidade1);
   scanf("%f",&pibCidade1);
   scanf("%d",&qtdPontoTC1);
   scanf("%u",&populacaoCidade1);

   printf("Carta2:\n estado, cosigo, cidade, população, area pib, pontos turisticos");
   scanf("%s", &estadoCarta2);
   scanf("%s", &codigoCarta2);
   fgets(cidadeCarta2,50,stdin);
   cidadeCarta2[strcspn(cidadeCarta2,"\n")] = 0;
   scanf("%f",&areaCidade2);
   scanf("%f",&pibCidade2);
   scanf("%d",&qtdPontoTC2);
   scanf("%u",&populacaoCidade2);

   float densidade1 = populacaoCidade1/areaCidade1;
   float densidade2 = populacaoCidade2/areaCidade2;
   float pib1 = pibCidade1/populacaoCidade1;
   float pib2 = pibCidade2/populacaoCidade2;
   float superPoder1 = areaCidade1  + pibCidade1 + qtdPontoTC1 + populacaoCidade1 + pib1 + 1/densidade1;
   float superPoder2 = areaCidade2  + pibCidade2 + qtdPontoTC2 + populacaoCidade2 + pib2 + 1/densidade2;


   printf("Carta1:\n");
   printf("Estado: %s\n", estadoCarta1);
   printf("Código: %s", codigoCarta1);
   printf("Nome da Cidade: %s",cidadeCarta1);
   printf("População: %u",populacaoCidade1);
   printf("Área: %.2f",areaCidade1);
   printf("PIB: %.2f",pibCidade1);
   printf("Número de Pontos Turísticos: %d",qtdPontoTC1);
   printf("densidade populacional: %.2f", densidade1);
   printf("pib per capta: %.2f",pib1);

   printf("Carta2:\n");
   printf("Estado: %c\n", estadoCarta2);
   printf("Código: %s", codigoCarta2);
   printf("Nome da Cidade: %s",cidadeCarta2);
   printf("População: %u",populacaoCidade2);
   printf("Área: %.2f",areaCidade2);
   printf("PIB: %.2f",pibCidade2);
   printf("Número de Pontos Turísticos: %d",qtdPontoTC2);
   printf("densidade populacional: %.2f", densidade2);
   printf("pib per capta: %.2f",pib2);

   printf(superPoder1 > superPoder2);

    return 0;
}

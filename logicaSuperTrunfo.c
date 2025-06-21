#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    //Carta 1

  int populacao1, pontosTuristicos1;
  float area1, pib1;
  float densidade1, pibCapital1;

    // Carta 2
  int populacao2, pontosTuristicos2;
  float area2, pib2;
  float densidade2, pibCapital2;

    
    // Cadastro das Cartas:
  
    // Dados da carta 1
  printf("Digite os dados da carta 1:\n");
  printf("População:");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB (Em reais):");
  scanf("%f", &pib1);
  printf("Número de pontos turisticos:");
  scanf("%d", &pontosTuristicos1);

  // Calculo de indicadores da Carta 1
  densidade1 = populacao1 / area1;
  pibCapital1 = pib1 / populacao1;

  // Dados Carta 2
  printf("Digite os dados da carta 2:\n");
  printf("População:");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB (Em reais):");
  scanf("%f", &pib2);
  printf("Número de pontos turisticos:");
  scanf("%d", &pontosTuristicos2);
    
   // Calculo de indicadores da Carta 2
  densidade2 = populacao2 / area2;
  pibCapital2 = pib2 / populacao2;

  //Comparação de Cartas:
  //Aqui comparamos o atributo POPULAÇÃO (mas pode trocar por outro)

  printf ("\nComparação de cartas (Atritubo: População)\n");
  printf ("Carta 1: %d habitantes\n", populacao1);
  printf ("Carta 2: %d habitantes\n", populacao2);

  //Estrutura de decisão para determinar o vencedor

  if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 venceu!\n");
  }  else if (populacao2 > populacao1) {
  printf ("\nResultado: Carta 2 venceu!\n");
  } else {
    printf("\nResultado: Empate!\n");
  }

    return 0;
}

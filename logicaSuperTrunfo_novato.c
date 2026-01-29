#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char carta1[4], carta2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float super1, super2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // CARTA 1
    printf("===Carta 1===\n");

    printf("Estado (A-H): ");
    scanf("   %c", &estado1);

    printf("Código: ");
    scanf("%s", carta1);   
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade1); //não usar espaço no nome da cidade

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

        //Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (float)PIB1 / populacao1;

    // CARTA 2
    printf("===Carta 2===\n");

    printf("Estado (A-H): ");
    scanf("   %c", &estado2);

    printf("Código: ");
    scanf("%s", carta2);   
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2); //não usar espaço no nome da cidade

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (float)PIB2 / populacao2;

    //Cálculo Super Trunfo
    super1 = (float)populacao1 + area1 + PIB1 + pontos_turisticos1 + pibpercapita1 + densidade1;
    super2 = (float)populacao2 + area2 + PIB2 + pontos_turisticos2 + pibpercapita2 + densidade2;
    
    //Resultados Carta 1
    printf("\n\nCarta1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Resultados Carta 2
    printf("\n\nCarta2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}

#include <stdio.h>

int main(){
    // Variáveis para a carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Variáveis de calculo
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // Cadastro da primeira carta
    printf("Cadastro da carta 1:\n");
    
    printf("Código da cidade (ex:A01): ");
    scanf("%s", codigo1);
    
    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    
    // Cadastro da primeira carta
    printf("Cadastro da carta 2:\n");
    
    printf("Código da cidade (ex:B01): ");
    scanf("%s", codigo2);
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Cálculo das variáveis
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1 / densidade2);

    // Mostrar os dados das cartas
    printf("\nCartas do SUPER TRUNFO\n");

    printf("\nCarta 1:\n");
    printf("código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparações das cartas
    printf("\nQuem vence quem? the game:\n");

    // população
    if (populacao1 > populacao2) {
        printf("\nPopulação: Carta 1 venceu\n");
    } else if (populacao2 > populacao1){
        printf("\nPopulação: Carta 2 venceu\n");
    } else {
        printf("\nPopulação: empate\n");
    }

    // Área
    if (area1 > area2) {
        printf("\nÁrea: Carta 1 venceu\n");
    } else if (area2 > area1){
        printf("\nÁrea: Carta 2 venceu\n");
    } else {
        printf("\nÁrea: empate\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("\nPIB: Carta 1 venceu\n");
    } else if (pib1 > pib2){
        printf("\nPIB: Carta 2 venceu\n");
    } else {
        printf("\nPIB: empate\n");
    }

    // Densidade (a menor vence aqui)
    if (densidade1 < densidade2) {
        printf("\nDensidade Populacional: Carta 1 venceu\n");
    } else if (densidade1 > densidade2){
        printf("\nDensidade Populacional: Carta 2 venceu\n");
    } else {
        printf("\nDensidade Populacional: empate\n");
    }

    // PIB per capita
    if (pibpercapita1 > pibpercapita2) {
        printf("\nPIB per Capita: Carta 1 venceu\n");
    } else if (pibpercapita1 < pibpercapita2){
        printf("\nPIB per Capita: Carta 1 venceu\n");
    } else {
        printf("\nPIB per Capita: Carta 1 venceu: empate\n");
    }

    // Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("\nPontos turísticos: Carta 1 vencel\n");
    } else if (pontos_turisticos1 < pontos_turisticos2){
        printf("\nPontos turísticos: Carta 2 venceu\n");
    } else {
        printf("\nPontos turísticos: empate\n");
    }

    // Super poder
    if (superpoder1 > superpoder2) {
        printf("\nSuper poder: Carta 1 vencel\n");
    } else if (superpoder1 < superpoder2){
        printf("\nSuper poder: Carta 2 venceu\n");
    } else {
        printf("\nSuper poder: empate\n");
    }
    
    return 0;
}

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

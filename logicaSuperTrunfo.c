#include <stdio.h>

int main(){
    // Variáveis para a carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    int escolha;

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
    
    printf("Nome do País 1: ");
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
    
    printf("Nome do País 2: ");
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
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("7 - Super Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("População: Carta 1 venceu\n");
            else if (populacao2 > populacao1)
                printf("População: Carta 2 venceu\n");
            else
                printf("População: Empate\n");
            break;

        case 2:
            if (area1 > area2)
                printf("Área: Carta 1 venceu\n");
            else if (area2 > area1)
                printf("Área: Carta 2 venceu\n");
            else
                printf("Área: Empate\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("PIB: Carta 1 venceu\n");
            else if (pib2 > pib1)
                printf("PIB: Carta 2 venceu\n");
            else
                printf("PIB: Empate\n");
            break;

        case 4:
            if (densidade1 < densidade2)
                printf("Densidade Populacional: Carta 1 venceu\n");
            else if (densidade2 < densidade1)
                printf("Densidade Populacional: Carta 2 venceu\n");
            else
                printf("Densidade Populacional: Empate\n");
            break;

        case 5:
            if (pibpercapita1 > pibpercapita2)
                printf("PIB per Capita: Carta 1 venceu\n");
            else if (pibpercapita2 > pibpercapita1)
                printf("PIB per Capita: Carta 2 venceu\n");
            else
                printf("PIB per Capita: Empate\n");
            break;

        case 6:
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Pontos Turísticos: Carta 1 venceu\n");
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Pontos Turísticos: Carta 2 venceu\n");
            else
                printf("Pontos Turísticos: Empate\n");
            break;

        case 7:
            if (superpoder1 > superpoder2)
                printf("Super Poder: Carta 1 venceu\n");
            else if (superpoder2 > superpoder1)
                printf("Super Poder: Carta 2 venceu\n");
            else
                printf("Super Poder: Empate\n");
            break;

        default:
            printf("Opção inválida.\n");
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

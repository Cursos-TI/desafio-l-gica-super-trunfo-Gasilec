#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1;                             /*tive que pesquisar pq a segunda estava dando problema no %c, vi que era uma questão de buffer estava com o caractere \n 
    int resultado2;                              e que era so dar um espaço no segundo %c que ele ignora os caracteres em branco pendentes*/ 
    char primeiroatributo;
    char segundoatributo;

    // Variáveis primeira carta
    char codigo1[20] = "Brasil";
    int populacao1 = 250000;
    float area1 = 200000;
    float pib1 = 200;
    int pontos_turisticos1 = 500;
    
    // Variaveis segunda carta
    char codigo2[20] = "Argentina";
    int populacao2 = 120000;
    float area2 = 100000;
    float pib2 = 150;
    int pontos_turisticos2 = 200;
    
    // Variáveis de calculo
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    float densidade2;
    float pibpercapita2;
    float superpoder2;

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
    printf("\nNome do País: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("\nNome do País: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparações das cartas
    printf("\nQuem vence quem? the game:\n");
    printf("\nEscolha o atributo para comparar:\n");
    printf("A - População\n");
    printf("B - Área\n");
    printf("C - PIB\n");
    printf("D - Densidade Populacional (menor vence)\n");
    printf("E - PIB per Capita\n");
    printf("F - Pontos Turísticos\n");
    printf("G - Super Poder\n");
    
    printf("\nSeu primeiro atributo: ");
    scanf("%c", &primeiroatributo);
        switch (primeiroatributo){
        case 'A': 
        case 'a':
            printf("Você escolheu população! VAMOS COMPARAR!");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu Área! VAMOS COMPARAR!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 'C':
        case 'c':
            printf("Você escolheu PIB! VAMOS COMPARAR!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;

        case 'D':
        case 'd':
            printf("Você escolheu Densidade Populacional (MENOR VENCE)! VAMOS COMPARAR!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;

        case 'E':
        case 'e':
            printf("Você escolheu PIB per Capita! VAMOS COMPARAR!\n");
            resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;

        case 'F':
        case 'f':
            printf("Você escolheu Pontos Turísticos! VAMOS COMPARAR!\n");
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;

        case 'G':
        case 'g':
            printf("Você escolheu Super Poder! VAMOS COMPARAR!\n");
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo invalida!\n");
            break;
    }

    printf("\nEscolha seu segundo atributo: ");
    printf("###Atenção: Escolha um atributo diferente!###");
    
    printf("\nQuem vence quem? the game:\n");
    printf("\nEscolha o atributo para comparar:\n");
    printf("A - População\n");
    printf("B - Área\n");
    printf("C - PIB\n");
    printf("D - Densidade Populacional (menor vence)\n");
    printf("E - PIB per Capita\n");
    printf("F - Pontos Turísticos\n");
    printf("G - Super Poder\n");
   
    printf("\nSeu segundo atributo: \n");
    scanf(" %c", &segundoatributo);
    if (primeiroatributo == segundoatributo){
        printf("Você escolheu o mesmo atributo! Sabe ler não?");
    } else {
    switch (segundoatributo){
                case 'A': 
        case 'a':
            printf("Você escolheu população! VAMOS COMPARAR!");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu Área! VAMOS COMPARAR!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;

        case 'C':
        case 'c':
            printf("Você escolheu PIB! VAMOS COMPARAR!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;

        case 'D':
        case 'd':
            printf("Você escolheu Densidade Populacional (MENOR VENCE)! VAMOS COMPARAR!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;

        case 'E':
        case 'e':
            printf("Você escolheu PIB per Capita! VAMOS COMPARAR!\n");
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;

        case 'F':
        case 'f':
            printf("Você escolheu Pontos Turísticos! VAMOS COMPARAR!\n");
            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;

        case 'G':
        case 'g':
            printf("Você escolheu Super Poder! VAMOS COMPARAR!\n");
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        }
    }
        
        if (resultado1 && resultado2)
        {
            printf("Parabéns você vence o SUPER TRUNFO! THE GAME!");
        }else if (resultado1 != resultado2)
        {
            printf("Empatou! Foi quase mano...");
        } else
        {
            printf("Vixi man! Vai tirar essa nhaca que vc ta zikado!");
        }
        
        
        

    return 0;
}

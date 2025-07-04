#include <stdio.h>

int main(){
    // Carta 1: Belo Horizonte (Minas Gerais)
    char estado1 = 'M';
    char codigo1[] = "M01";
    char nomeCidade1[] = "Belo Horizonte";
    int populacao1 = 2416339;
    float area1 = 331.354;
    float pib1 = 105.8;
    int pontosTuristicos1 = 25;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; 

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + pontosTuristicos1;

    // Carta 2: Palmas (Tocantins)
    char estado2 = 'T';
    char codigo2[] = "T01";
    char nomeCidade2[] = "Palmas";
    int populacao2 = 323625;
    float area2 = 2227.329;
    float pib2 = 10.3;
    int pontosTuristicos2 = 20;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + pontosTuristicos2;


    // Exibição da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);


    // Exibição da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\nComparação de Cartas:\n");

// População
printf("População: Carta %d venceu ( %d )\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

// Área
printf("Área: Carta %d venceu ( %d )\n", area1 > area2 ? 1 : 2, area1 > area2);

// PIB
printf("PIB: Carta %d venceu ( %d )\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);

// Pontos Turísticos
printf("Pontos Turísticos: Carta %d venceu ( %d )\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);

// Densidade Populacional (menor vence)
printf("Densidade Populacional: Carta %d venceu ( %d )\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);

// PIB per Capita
printf("PIB per Capita: Carta %d venceu ( %d )\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);

// Super Poder
printf("Super Poder: Carta %d venceu ( %d )\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);


    return 0;
}


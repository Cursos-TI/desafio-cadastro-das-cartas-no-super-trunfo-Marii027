#include <stdio.h>

int main(){
    // Carta 1: Belo Horizonte (Minas Gerais)
    char estado1 = 'M';
    char codigo1[] = "M01";
    char nomeCidade1[] = "Belo Horizonte";
    int populacao1 = 2.416339;
    float area1 = 331.354;
    float pib1 = 105.8;
    int pontosTuristicos1 = 25;
    float densidadePopulacional1;
    float pibPerCapita1;

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2: Palmas (Tocantins)
    char estado2 = 'T';
    char codigo2[] = "T01";
    char nomeCidade2[] = "Palmas";
    int populacao2 = 323.625;
    float area2 = 2227.329;
    float pib2 = 10.3;
    int pontosTuristicos2 = 20;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


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


    return 0;
}


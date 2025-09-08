#include <stdio.h>

int main() {

    //*INFORMAÇÕES DE NOMENCLATURA*
    //pop= População
    //pts= Pontos Turísticos
    //dp= Densidade Populacional
    //ppc= PIB Per Capta

    // Carta 1
    unsigned long int pop1;
    int pts1;
    char nome1[50], cod1[5], estado1[5];
    double area1, pib1, dp1, ppc1;

    // Carta 2
    unsigned long int pop2;
    int pts2;
    char nome2[50], cod2[5], estado2[5];
    double area2, pib2, dp2, ppc2;

    printf("Olá! Vamos preencher os dados das cartas uma por vez.\n");
    printf("Para começar coloque os dados referentes à PRIMEIRA carta.\n\n");

    // --- Carta 1 ---
    printf("Insira o nome do estado: ");
    scanf("%s", estado1);

    printf("Insira o código da cidade: ");
    scanf("%s", cod1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome1);

    printf("Insira a área total da cidade em KM²: ");
    scanf("%lf", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%lf", &pib1);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pts1);

    printf("Insira o número total de habitantes: ");
    scanf("%lu", &pop1);

    // --- Carta 2 ---
    printf("\nAgora vamos colocar as informações sobre a SEGUNDA carta!\n\n");

    printf("Insira o nome do estado: ");
    scanf("%s", estado2);

    printf("Insira o código da cidade: ");
    scanf("%s", cod2);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome2);

    printf("Insira a área total da cidade em KM²: ");
    scanf("%lf", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pts2);

    printf("Insira o número total de habitantes: ");
    scanf("%lu", &pop2);

    // Cálculos para densidade populacional e PIB per capita.

    dp1 = pop1 / area1;
    ppc1 = pib1 / pop1;

    dp2 = pop2 / area2;
    ppc2 = pib2 / pop2;

    //cálculos do super poder.

    double superpoder1, superpoder2;

    superpoder1 = pop1 + pts1 + pib1 + ppc1 + area1 + (1.0 / dp1);
    superpoder2 = pop2 + pts2 + pib2 + ppc2 + area2 + (1.0 / dp2);

    // --- Exibir resultados ---
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Área Total: %.2lf km²\n", area1);
    printf("PIB: %.2lf \n", pib1);
    printf("Pontos Turísticos: %d\n", pts1);
    printf("População: %lu habitantes\n", pop1);
    printf("Densidade Populacional: %.5lf hab/km²\n", dp1);
    printf("PIB per Capita: %.2lf reais\n", ppc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Área Total: %.2lf km²\n", area2);
    printf("PIB: %.2lf \n", pib2);
    printf("Pontos Turísticos: %d\n", pts2);
    printf("População: %lu habitantes\n", pop2);
    printf("Densidade Populacional: %.5lf hab/km²\n", dp2);
    printf("PIB per Capita: %.2lf reais\n", ppc2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Mostrar os vencedores em cada atributo.

    int resultadopop = pop1 > pop2;
    int resultadopts = pts1 > pts2;
    int resultadopib = pib1 > pib2;
    int resultadodp = dp1 < dp2;
    int resultadoppc = ppc1 > ppc2;
    int resultadoarea = area1 > area2;
    int resultadopoder = superpoder1 > superpoder2;

    printf("\n======RESULTADO DA BATALHA======\n");
    printf("Área Total: %d \n", resultadoarea);
    printf("PIB: %d \n", resultadopib);
    printf("Pontos Turísticos: %d \n", resultadopts);
    printf("População: %d \n", resultadopop);
    printf("Densidade Populacional: %d \n", resultadodp);
    printf("PIB per Capita: %d \n", resultadoppc);
    printf("Super Poder: %d \n", resultadopoder);

    return 0;
}

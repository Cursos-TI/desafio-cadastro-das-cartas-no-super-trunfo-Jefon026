#include <stdio.h>

int main() {
    //pop=população; pts= Pontos Turísticos
    // Carta 1
    int POP, PTS;
    char NOME[50], COD[5], ESTADO[5];
    float AREA, PIB;

    // Carta 2
    int pop, pts;
    char nome[50], cod[5], estado[5];
    float area, pib;

    printf("Olá! Vamos preencher os dados das cartas uma por vez.\n");
    printf("Para começar coloque os dados referentes à PRIMEIRA carta.\n\n");

    // --- Carta 1 ---
    printf("Insira o nome do estado: ");
    scanf("%s", ESTADO);

    printf("Insira o código da cidade: ");
    scanf("%s", COD);

    printf("Insira o nome da cidade: ");
    scanf("%s", NOME);

    printf("Insira a área total da cidade em KM²: ");
    scanf("%f", &AREA);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &PTS);

    printf("Insira o número total de habitantes: ");
    scanf("%d", &POP);

    // --- Carta 2 ---
    printf("\nAgora vamos colocar as informações sobre a SEGUNDA carta!\n\n");

    printf("Insira o nome do estado: ");
    scanf("%s", estado);

    printf("Insira o código da cidade: ");
    scanf("%s", cod);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome);

    printf("Insira a área total da cidade em KM²: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pts);

    printf("Insira o número total de habitantes: ");
    scanf("%d", &pop);



    // --- Exibir resultados ---
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", ESTADO);
    printf("Código: %s\n", COD);
    printf("Nome da Cidade: %s\n", NOME);
    printf("Área Total: %.2f km²\n", AREA);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos Turísticos: %d\n", PTS);
    printf("População: %d habitantes\n", POP);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", cod);
    printf("Nome da Cidade: %s\n", nome);
    printf("Área Total: %.2f km²\n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turísticos: %d\n", pts);
    printf("População: %d habitantes\n", pop);

    return 0;
}

#include <stdio.h>

int main(){

    int POP, pop, PTS, pts;
    char NOME[50],COD[5],ESTADO[5],nome[50],cod[5],estado[5];
    double AREA, area, PIB,pib;

    printf("olá! vamos preeencher os dados das cartas uma por vez. Para começar coloque os dados referentes á PRIMEIRA carta. \n");

    printf("Insira o nome do estado: \n");
    scanf("%s", ESTADO);

    printf("Insira o código da cidade: \n");
    scanf("%s", COD);

    printf("Insira o nome da cidade: \n");
    scanf("%s", NOME);

    printf("Insira a área da total da cidade em KM²: \n");
    scanf("%lf", &AREA);

    printf("Insira o PIB da cidade: \n");
    scanf("%lf", &PIB);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &PTS);

    printf("Insira o numero total de habitantes: \n");
    scanf("%d", &POP);
    
    //Começo da segunda carta abaixo!!

    printf("Carta1: \n");
    printf("Estado: %s \n", ESTADO);
    printf("Código: %s \n", COD);
    printf("Nome da Cidade: %s \n",NOME);
    printf("Área Total: %.2f \n",AREA);
    printf("Produto Interno Bruto: %.2f \n",PIB);
    printf("Pontos Turísticos: %d \n", PTS);
    printf("População total: %d \n", POP);


}
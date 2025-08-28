#include <stdio.h>

int main(){

    int pop1, pts1, pop2, pts2;
    float area1,area2,pib1,pib2;
    char nome1[50],codigo1[4],estado1[2],nome2[50],codigo2[4],estado2[2];


    printf("olá! vamos preeencher os dados das cartas uma por vez. Para começar coloque os dados referentes á PRIMEIRA carta. \n");

    printf("Insira o nome do estado: \n");
    scanf("%s", estado1);

    printf("Insira o código da cidade: \n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Insira a área da total da cidade em KM²: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pts1);

    printf("Insira o numero total de habitantes: \n");
    scanf("%d", &pop1);
    
    //Começo da segunda carta abaixo!!

    printf("Carta1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n",nome1);
    printf("Área Total: %f\n",&area1);
    printf("Produto Interno Bruto: %f\n",&pib1);
    printf("Pontos Turísticos: %d\n",&pts1);
    printf("População total: %d\n",&pop1);

    return 0;


}
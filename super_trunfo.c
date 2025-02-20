#include <stdio.h>

int main(){
    char estado1[2];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontotu1;

    printf("Carta 1 \n");


    printf("\nDigite o estado: \n");
    scanf("%s",estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s",cidade1);

    printf("Digite o número da população: \n");
    scanf("%d",&populacao1);

    printf("Digite a área em Km²; \n");
    scanf("%f",&area1);

    printf("Digite o PIB: \n");
    scanf("%f",&pib1);

    printf("Digite a quantidade de ponto turístico: \n");
    scanf("%d",&pontotu1);

    printf("\nDados da carta 1!.\n");

    printf("\nEstado: %s \nCódigo: %s \nCidade: %s \n",estado1,codigo1,cidade1);
    printf("População %d \nÁrea: %f\nPIB: %f \n", populacao1,area1,pib1);
    printf("Ponto turístico: %d \n",pontotu1);


    char estado2[2];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontotu2;

    printf("\nCarta 2 \n");


    printf("Digite o estado: \n");
    scanf("%s",estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n");
    scanf("%s",cidade2);

    printf("Digite o número da população: \n");
    scanf("%d",&populacao2);

    printf("Digite a área em Km²; \n");
    scanf("%f",&area2);

    printf("Digite o PIB: \n");
    scanf("%f",&pib2);

    printf("Digite a quantidade de ponto turístico: \n");
    scanf("%d",&pontotu2);

    printf("\nDados da carta 2!.\n");
    
    printf("\nEstado: %s \nCódigo: %s \nCidade: %s \n",estado2,codigo2,cidade2);
    printf("População %d \nÁrea: %f\nPIB: %f \n", populacao2,area2,pib2);
    printf("Ponto turístico: %d \n",pontotu2);


}

    
    
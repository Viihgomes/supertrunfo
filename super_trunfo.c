#include <stdio.h>

int main(){
    char estado1[100];
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
    scanf("%d", &codigo1);

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

    printf("\nEstado: %s \nCódigo: %d \nCidade: %s \n",estado1,codigo1,cidade1);
    printf("População %d \nÁrea: %f\nPIB: %f \n", populacao1,area1,pib1);
    printf("Ponto turístico: %d \n",pontotu1);


    char estado2[100];
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
    scanf("%d", &codigo2);

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
    
    printf("\nEstado: %s \nCódigo: %d \nCidade: %s \n",estado2,codigo2,cidade2);
    printf("População %d \nÁrea: %f\nPIB: %f \n", populacao2,area2,pib2);
    printf("Ponto turístico: %d \n",pontotu2);

    

    int escolha;
    printf("Escolha o atributo que deseja realizar a comparação!\n");
    printf("1. Número da população\n");
    printf("2. PIB\n");
    printf("3. Area km²\n");
    printf("4. Número de ponto turistico\n");
    while (getchar() != '\n');  
    scanf("%d",&escolha);

    printf("Opção digitada: %d\n",escolha);


    switch (escolha) {
        case 1: // População
            printf("Número da população:\n");
            printf("Estado carta um : %s\n", estado1);
            printf("Estado carta dois : %s\n", estado2);
            if (populacao1 > populacao2) {
                printf("Carta um venceu %d\n", populacao1);
                printf("Carta que perdeu %d\n", populacao2);
            } else if (populacao1 < populacao2) {
                printf("Carta dois venceu %d\n", populacao2);
                printf("Carta que perdeu %d\n", populacao1);
            } else {
                printf("O jogo empatou\n");
            }
            break;
    
        case 2: // PIB
            printf("PIB:\n");
            printf("Estado carta um : %s\n", estado1);
            printf("Estado carta dois : %s\n", estado2);
            if (pib1 > pib2) {
                printf("Carta um venceu %f\n", pib1);
                printf("Carta que perdeu %f\n", pib2);
            } else if (pib1 < pib2) {
                printf("Carta dois venceu %f\n", pib2);
                printf("Carta que perdeu %f\n", pib1);
            } else {
                printf("O jogo empatou\n");
            }
            break;
    
        case 3: // Área
            printf("Área km²:\n");
            printf("Estado carta um : %s\n", estado1);
            printf("Estado carta dois : %s\n", estado2);
            if (area1 > area2) {
                printf("Carta um venceu %f\n", area1);
                printf("Carta que perdeu %f\n", area2);
            } else if (area1 < area2) {
                printf("Carta dois venceu %f\n", area2);
                printf("Carta que perdeu %f\n", area1);
            } else {
                printf("O jogo empatou\n");
            }
            break;
    
        case 4: // Pontos turísticos
            printf("Número de pontos turísticos:\n");
            printf("Estado carta um : %s\n", estado1);
            printf("Estado carta dois : %s\n", estado2);
            if (pontotu1 > pontotu2) {
                printf("Carta um venceu %d\n", pontotu1);
                printf("Carta que perdeu %d\n", pontotu2);
            } else if (pontotu1 < pontotu2) {
                printf("Carta dois venceu %d\n", pontotu2);
                printf("Carta que perdeu %d\n", pontotu1);
            } else {
                printf("O jogo empatou\n");
            }
            break;
    
        default:
            printf("Opção inválida!\n");
            break;
            
    }
}
    

    
    
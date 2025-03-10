#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolhajogador, escolhacomputador;
    srand(time(0));

    printf("Jogo de jokenpó\n");
    printf("Escolha uma opçao\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha!");
    scanf("%d",&escolhajogador);

    escolhacomputador = rand() % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
        printf("Jogador: PEDRA\n");
        break;
    case 2:
        printf("Jogador: PAPEL\n");
        break;
    case 3:
        printf("Jogador: TESOURA\n");
        break;
    default:
       printf("Opção inválida\n");
        break;
    }
    switch (escolhacomputador)
    {
    case 1:
        printf("Computador: PEDRA\n");
        break;
    case 2:
        printf("Computador: PAPEL\n");
        break;
    case 3:
        printf("Computador: TESOURA\n");
        break;
   

}

    if(escolhacomputador == escolhajogador){
        printf("Jogo empatou!\n");
    }
    else if((escolhajogador == 1 )&&(escolhacomputador == 3)  ||
          (escolhajogador == 2) && (escolhacomputador == 1) ||
          (escolhajogador == 3) && (escolhacomputador == 2))

{
    printf("Parabéns você ganhou!..\n");
} else{
    printf("Você perdeu!...\n");
}
}
#include <stdio.h>
// #include "delay.h"

void modoDeJogo(){
    while(1) {
        int LapaPerfeito;
        delay(1);
        printf("Escolha seu modo de Jogo!!\n");
        printf("[1] - Jogo Rapido (3 personagens/campo)\n[2] - Jogo Tradicional (8 personagens/campo)\n-> ");
        scanf("%i", &LapaPerfeito);

        if (LapaPerfeito == 1) {
            modo = 2;
            printf("Pronto! Modo RAPIDO ativado!\n");
            break;
        }
        else if (LapaPerfeito == 2) {
            modo = 16;
            printf("Pronto! Modo TRADICIONAL ativado!\n");
            break;
        }
        else{
            printf("Comando Inválido! Digite novamente!\n");
        }
    }
}
#include <stdio.h>

int menu() {
    
    int item;
    
    printf("--------------------------------------------------\n");
    printf("    Sejam Bem-Vindes a Batalha da Laponia!!!!!\n");
    
    while (1) {
        printf("--------------------------------------------------\n");
        printf("> O que deseja fazer?\n    [1]Comecar jogo!\n    [2]Instrucoes\n    [3]Sair do Jogo\n\n-> ");
        scanf("%i", &item);
        
        if (item == 1){
            printf("E VAMOS DE GAMEPLAY\n");
            break;
        } 
        else if (item == 2){
            printf("Explicando o jogo\n");
            printf("Explicando o jogo\n");
            printf("Explicando o jogo\n");
            printf("Explicando o jogo\n");
            printf("Explicando o jogo\n");
            printf("Explicando o jogo\n");
            
        }
        else if (item == 3){
            printf("Okaaay encerrando!!\n");
            return 0;
        }
        else {
            printf("Você é demente??? aperta 1, 2 ou 3 caramba. >:(\n");
        }
    }
    
    return 1;
    // fim codigo
}
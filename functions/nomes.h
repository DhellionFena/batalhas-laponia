#include <stdio.h>
#include <string.h>

// recebe nome dos dois players
void players(){
    while (1) {
        printf("--------------------------------------------------\n");
        printf("Digite o nome de um dos jogadores\n ->");
        scanf(" %[^\n]s", player1);
        printf("--------------------------------------------------\n");
        printf("Digite o nome do outro jogador\n ->");
        scanf(" %[^\n]s", player2);

        if (strcmp(player1, player2) == 0){
            printf("Os nomes são os mesmos! Por favor insira nomes diferentes :) \n");
        }
        else {
            break;
        }
    }

}

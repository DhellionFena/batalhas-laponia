#include <stdio.h>
#include "variaveis.h"

// recebe nome dos dois players
void players(){
    printf("--------------------------------------------------\n");
    printf("Digite o nome de um dos jogadores\n ->");
    scanf(" %[^\n]s", player1);
    printf("--------------------------------------------------\n");
    printf("Digite o nome do outro jogador\n ->");
    scanf(" %[^\n]s", player2);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// #include "delay.h"


//sorteia um player
void sorteio() {
    int num;
    char reserva[50];

    //Escolhe numero aleatorio (0 a 100)
    srand(time(0)); 
    num = rand() % 100;

    printf("--------------------------------------------------\n");
    printf("Agora, vou escolher o PRIMEIRO jogador!!!\n");
    delay(1);
    printf(".....\n");
    delay(1);
    printf("Ja me decidi!! Quem vai comecar eh: \n");

    // Brincadeira do Par ou Impar
    if (num % 2 != 0) {
        strcpy(reserva, player1);
        strcpy(player1, player2);
        strcpy(player2, reserva);
    }

    delay(1);
    printf("-> %s!!!\n", player1);
    delay(1);
    printf("Seu campo de combate sera o Norte!\nBOM JOGO!!! :D\n");
    delay(1);

} 

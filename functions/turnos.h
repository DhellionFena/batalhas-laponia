#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "variaveis.h"  //todas as variaveis globais do jogo

//sorteia um player
void sorteio() {
    int num;
    char reserva[50];

    //Escolhe número aleatório (0 a 100)
    srand(time(0)); 
    num = rand() % 100;

    printf("--------------------------------------------------\n");
    printf("Agora, vou escolher o PRIMEIRO jogador!!!\n.....\n");

    // Brincadeira do Par ou Impar
    if (num % 2 != 0) {
        strcpy(reserva, player1);
        strcpy(player1, player2);
        strcpy(player2, reserva);
    }

    printf("Ja me decidi!! Quem vai comecar eh: \n-> %s!!!\nBOM JOGO!!! :D\n", player1);
} 
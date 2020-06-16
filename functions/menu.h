#include <stdio.h>
// #include "delay.h"
//Menu inicial do jogo
void delay(int number_of_seconds);
int menu() {
    
    int amamosLapa; // Variavel destinada a selecionar o menu
    
    printf("--------------------------------------------------\n");
    printf("    Sejam Bem-Vindes a Batalha da Laponia!!!!!\n");
    
    while (1) {
        printf("--------------------------------------------------\n");
        printf("> O que deseja fazer?\n    [1]Comecar jogo!\n    [2]Instrucoes\n    [3]Sair do Jogo\n\n-> ");
        scanf("%i", &amamosLapa);
        
        if (amamosLapa == 1){
            printf("E VAMOS DE GAMEPLAY\n");
            break;
        } 
        else if (amamosLapa == 2){
            printf("O jogo consiste em um tabuleiro 12x12, que conta\ncom 8 guerreiros de cada lado, representados pelos\nnumeros 1 e 2, alem de um unico guerreiro especial.\n\n");
            delay(1);
            printf("Em cada jogada, o jogador tem o poder de escolher\nentre atacar ou movimentar seus guerreiros, as\npossiveis movimentacoes sao: uma casa para norte,\nsul, leste ou oeste. Nao havendo a possibilidade\nde um movimento na diagonal. Tal movimentacao\nocorre em torno de coordenadas (x, y).\n\n");
            delay(1);
            printf("Ao movimentar-se, deve-se informar para qual casa\nse deseja ir, com a restricao de que nao podera\nhaver movimentacao pela cordilheira nem pelo lago.\n\n");
            delay(1);
            printf("Ao atacar, deve-se analisar o numero do guerreiro,\nhavendo distincoes entre eles; O guerreiro de numero\n1 so ha a possibilidade de ataque frontal, ja o\nguerreiro de numero 2, o ataque eh na diagonal,\ntanto para leste, quanto para o oeste.\n\n");
            delay(1);
            printf("Os guerreiros especiais possuem uma habilidade\nchamada Bola de Fogo, responsavel por lancar uma\nbola flamejante no oponente a sua frente, que ao\ncolidir, o fogo se alastraria e atingiria todas as\ncasas adjacentes do local colidido. O ataque ao\nser utilizado, deve-se esperar 3 turnos do jogo para\npoder reutilizar tal habilidade.\n\n");
            delay(1);
        }
        else if (amamosLapa == 3){
            printf("Okaaay encerrando!!\n");
            return 0;
        }
        else {
            printf("Opcao invalida! Selecionar entre 1, 2 ou 3. >:(\n");
        }
    }
    
    return 1;
    // fim codigo
}

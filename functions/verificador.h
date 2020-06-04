#include <stdio.h>

int verificaCasa(int x, int y) {
    if (tabuleiro[x][y] != ' ') {
        return 1;  //existe personagem
    } else {
        return 0;
    }
}
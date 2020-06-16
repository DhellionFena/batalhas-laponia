#include <stdio.h>

int verificaCasa(int x, int y) {
    if (tabuleiro[x][y] == ' ') {
        return 0;  // nao existe personagem
    } else if (tabuleiro[x][y] == '*') {
        return 1;
    } else if (tabuleiro[x][y] == '~') {
    	return 3;
	}
    else {
    	return 2; //existe personagem
	}
}

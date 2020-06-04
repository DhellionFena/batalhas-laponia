#include <stdio.h>
#include <locale.h>
#include "functions/variaveis.h"
#include "functions/nomes.h"
#include "functions/sorteio.h"
#include "functions/menu.h"
#include "functions/tabuleiro.h"
#include "functions/colocarPersonagem.h"



int main(){
    setlocale(LC_ALL, "Portuguese");
    int start_game;
    start_game = menu();
    if (start_game == 0) {
        return 0;
    }
    players();
    sorteio();
    printf("--------------------------------------------------\n");
    tabuleirobl();
    //colocarPersonagem();

    return 0;
}

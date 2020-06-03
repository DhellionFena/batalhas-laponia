#include <stdio.h>
#include <locale.h>
#include "functions/variaveis.h"
#include "functions/nomes.h"
#include "functions/turnos.h"
#include "functions/menu.h"
#include "functions/tabuleiro.h"


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

    return 0;
}
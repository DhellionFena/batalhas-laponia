#include <stdio.h>
#include <locale.h>
#include "functions/variaveis.h"
#include "functions/nomes.h"
#include "functions/delay.h"
#include "functions/sorteio.h"
#include "functions/menu.h"
#include "functions/tabuleiro.h"
#include "functions/colocarPersonagem.h"
#include "functions/verificador.h"
#include "functions/controlarTurnos.h"
#include "functions/modoDeJogo.h"




int main(){
    int vencedor;
    //setlocale(LC_ALL, "Portuguese");
    int start_game;
    start_game = menu();
    if (start_game == 0) {
        return 0;
    }
    printf("--------------------------------------------------\n");
    modoDeJogo();
    players();
    sorteio();
    printf("--------------------------------------------------\n");
    tabuleirobl();
    colocarPersonagem();
    while(quant_norte > 0 && quant_sul > 0)
	{
		turnos();
		//system("cls");
		tabuleirobl();
		// printf ("                         Narrador falou algo\n");
	}//jogo finalizado
    printf("--------------------FIM DE JOGO--------------------\n");
    printf(">PARABENS %s!!!!!!!\nVOCE VENCEU\n", quant_norte > 0 ? player1 : player2);
    system("pause");
    return 0;
}

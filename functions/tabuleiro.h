#include <stdio.h>


//gera o tabuleiro
void tabuleirobl()  
{
        int i, j;
        //system("cls"); // Limpa tela
		printf ("> %s \n", player1);
		printf("------------------------------------------------------------------------------\n");
        for (i=0; i<13; i++)
        {
            for (j=0; j<13; j++)
            {
                printf ("  %c  |", tabuleiro[i][j]);
        
            }
        printf("\n------------------------------------------------------------------------------");
        printf("\n");
        }
        printf ("> %s \n\n", player2);
}

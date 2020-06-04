#include <stdio.h>


int colocarPersonagem()
{
    int m1, m2, m3, m4, l1, c1, l2, c2, cont, i;
    char tipo;
    cont = 1;
    
    // m é o valor da matriz do PC
    // c e l são variaveis da linha e coluna do jogador
	//tipo é o tipo de guerreiro
	
    
    for ( i=0; i<=16; i++)
    {
   	
	   cont++;

        if (cont % 2 == 0) //turnos
        {
         	while (1)
         	{
			 
			    printf(" %s diga sua posição [L] [C]", player1);
	            scanf(" %d %d", &l1, &c1);
	            m1= l1 + 2;
	            m2= c1 + 2;
	            							
	                if ((0 <= l1) && (l1 < 4) && (0 <= c1) && (c1 <=9)) 
	                {
	                    printf ("Escolha o guerreiro");
	                    scanf (" %c", &tipo);
						tabuleiro[m1][m2] = tipo;
						tabuleirobl();
						break;
	                }
	            	else
					{ 
						printf ("Posição invalida! Digite Novamente \n");
						
					}    
	        }
        }
        else
        {
            while (1)
            {
			
				printf(" %s diga sua posição [L] [C]", player2);
	            scanf(" %d %d", &l2, &c2);
	            m3= l2 + 2;
	            m4= c2 + 2;
	                if ((6<= l2) && (l2 <10 ) && (0 <= c2) && (c2 <=9))
	                {
	                    printf ("Escolha o guerreiro");
	                    scanf (" %c", &tipo);
						tabuleiro[m3][m4] = tipo;
						tabuleirobl();
						break;
	                }
	                else
	                {
	                	printf ("Posição invalida! Digite Novamente \n");
					}
	    	}
	    }
	}
return 0;       
}

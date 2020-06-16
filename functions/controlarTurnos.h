#include <stdio.h>
#include "atacar.h"
#include "movimentar.h"

// Alem de controlar turnos, identifica casa invalida, tipo de guerreiro e atacar ou mover
int turnos()
{
	
	int l1, c1, m1, m2, acao, tipo;
	char qg;

	
	if(trocaturno == 0)
	{
		printf("> %s sua vez!\n", player1);
		while(7)
		{
			printf("> Onde esta o guerreira que sera usado nessa rodada?\n");
	 		printf("[L] -> ");
            scanf("%d", &l1);
            printf("[C] -> ");
            scanf("%d", &c1);
            m1= l1 + 2; // Converter para nossa matriz
	        m2= c1 + 2;
	        
	        if ((0 <= m1) && (m1 < 4) && (0 <= m2) && (m2 <=9)) // Limitar a selecao de guerreiros
	        {
		        tipo = verificaCasa(m1, m2);  // Identificador se h� personagem e qual tipo
		        if (tipo == 2 )
				{
					qg = tabuleiro[m1][m2]; // Atribuir valor a qg e identifica-lo
					break;
				}
				else 
				{
					printf("> Local escolhido invalido!\n> Tente novamente.\n");
				}
			}
			else
			{
				printf ("> Guerreiro invalido!\n");
			}
		      
		}
		
		printf("> Qual a acao desse guerreiro?\n");
		printf(" [1] - Atacar\n [2] - Mover\n [3] - Escolher outra guerreira\n ");
		scanf("%d", &acao);
		
		if (acao == 1){
			if(qg == '1')
			{
				atacarVerticalNorte( m1, m2 );
			}
			else if ( qg == '2')
			{
				atacarDiagonalNorte( m1, m2 );
			}
			else 
			{
				guerreiroEspecialNorte( m1, m2 );
			}
			
		}
		else if (acao == 2)
		{
			movimentarNorte(m1, m2);
		}
		else if (acao == 3)
		{
			return 0;
		}
		
		
		
		trocaturno = 1;
	}

	else
	{
		
		printf("> %s sua vez!\n", player2);
		while(7)
		{
			printf("> Onde esta o guerreira que sera usado nessa rodada?\n");
	 		printf("[L] -> ");
            scanf("%d", &l1);
            printf("[C] -> ");
            scanf("%d", &c1);
            m1= l1 + 2;
	        m2= c1 + 2;
	        
	        if ((6<= m1) && (m1 <10 ) && (0 <= m2) && (m2 <=9))
	        {
		        tipo = verificaCasa(m1, m2);  // Identificador se ha personagem e qual tipo
		        if (tipo == 2 )
				{
					qg = tabuleiro[m1][m2]; 
					break;
				}
				else 
				{
					printf("> Local escolhido invalido!\n Tente novamente.\n");
				}
			}
			else
			{
				printf ("> Guerreira invalido!\n");
			}
		      
		}
		
		printf("> Qual a acao dessa guerreira?\n");
		printf(" [1] - Atacar\n [2] - Mover\n [3] - Escolher outra guerreira\n ");
		scanf("%d", &acao);
		
		if (acao == 1)
		{
			if(qg == '1')
			{
				atacarVerticalSul( m1, m2 );
			}
			else if ( qg == '2')
			{
				atacarDiagonalSul( m1 , m2 );
			}
			else
			{
				guerreiroEspecialSul( m1 , m2 );
			}
			
		}
		else if (acao == 2)
		{
			movimentarSul(m1, m2);
		}
		else if (acao == 3)
		{
			return 0 ;
		}
		
		
		trocaturno = 0;
	}
		 
	
}

#include <stdio.h>
void movimentarSul(int x, int y)
{
	int batata;
	while(7)
	{
		printf("> Qual direcao deseja movimentar?\n");
		printf("[1] - Direita\n[2] - Esquerda\n[3] - Frente\n[4] - Tras\n-> ");
		scanf("%d", &batata);
		
		if(batata == 1)
		{
			if( verificaCasa(x ,y+1) ==0 )
			{
				tabuleiro[x][y+1] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else if (batata == 2)
		{
			if( verificaCasa(x ,y-1) ==0 )
			{
				tabuleiro[x][y-1] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else if (batata == 3)
		{
			if( verificaCasa(x +1 ,y) ==0 )
			{
				tabuleiro[x+1][y] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}			
		else if (batata == 4)
		{
			if( verificaCasa(x-1 ,y) ==0 )
			{
				tabuleiro[x-1][y] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else
		{
			printf("> Opcao Invalida!\n> Tente Novamente.\n");
		}
	
	}
}



void movimentarNorte(int x, int y)
{
	int batata;
	while(7)
	{
		printf("> Qual direcao deseja movimentar?\n");
		printf("[1] - Direita\n[2] - Esquerda\n[3] - Frente\n[4] - Tras\n-> ");
		scanf("%d", &batata);
		
		if(batata == 1)
		{
			if( verificaCasa(x ,y-1) ==0 )
			{
				tabuleiro[x][y-1] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else if (batata == 2)
		{
			if( verificaCasa(x ,y+1) ==0 )
			{
				tabuleiro[x][y+1] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else if (batata == 3)
		{
			if( verificaCasa(x+1 ,y) ==0 )
			{
				tabuleiro[x+1][y] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}			
		else if (batata == 4)
		{
			if( verificaCasa(x-1 ,y) ==0 )
			{
				tabuleiro[x-1][y] = tabuleiro [x][y];
				tabuleiro[x][y] = ' ';
				break;
			}
			else
			{
				printf("> Movimento Invalido!\n> Tente Novamente.\n");
			}
		}
		else
		{
			printf("> Opcao Invalida!\n> Tente Novamente.\n");
		}
	
	}
}

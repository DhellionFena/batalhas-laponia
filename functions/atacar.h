#include <stdio.h>

// aqui tem todas as funcoes de ataque dos guerreiros


void atacarDiagonalNorte( int x, int y )
{
	int m1, m2, col, dir;
	
	printf ("Qual a sua direcao de ataque? \n[1] - Esquerda\n[2] - Direita\n-> ");
	scanf (" %i", &dir);
	
	m1 = x ; //transforma��o para nossa matriz
	m2 = y ;
	
	// codi��o para a dire��o
	
	if (dir == 1)
	{
		col =  1; // esquerda
	}
	else if (dir == 2)
	{
		col = - 1; // direita
	}

	
	while (1)
	{
	m1 = m1 + 1;
	m2 = m2 + col; // aumenta a coluna
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((8 <= m1) && (m1 < 11 ) && (2 <= m2) && (m2 <= 11)) // para eliminar apenas no espaco do openente
				{
					printf ("> Guerreira eliminada! Voce ganhou 1 big big :)\n");
					tabuleiro[m1][m2] = ' ';
					quant_sul--;
					break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}


void atacarDiagonalSul( int x, int y )
{
	int m1, m2, col, dir;
	
	printf ("Qual a sua direcao de ataque? \n[1] - Esquerda\n[2] - Direita\n-> ");
	scanf (" %i", &dir);
	
	
	m1 = x ; //transforma��o para nossa matriz
	m2 = y ;
	
	// codi��o para a dire��o
	
	if (dir == 1)
	{
		col = - 1; // esquerda
	}
	else if (dir == 2)
	{
		col = 1; // direita
	}


	while (1)
	{
	m1 = m1 - 1;
	m2 = m2 + col; // diminui a coluna
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((0 <= m1) && (m1 < 6) && (0 <= m2) && (m2 <=11)) // para eliminar apenas no espaco do openente
				{
				printf ("> Guerreira eliminada! Voce ganhou 1 big big :)\n");
				tabuleiro[m1][m2] = ' ';
				quant_norte--;
				break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}  


void atacarVerticalNorte( int x, int y )
{
	int m1, m2, col, dir;
	
	m1 = x ; //transforma��o para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 + 1;
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((8 <= m1) && (m1 < 11 ) && (2 <= m2) && (m2 <= 11)) //// para eliminar apenas no espaco do openente
				{
				printf ("> Guerreira eliminada! Voce ganhou 1 big big :)\n");
				tabuleiro[m1][m2] = ' ';
				quant_sul--;
				break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}


void atacarVerticalSul( int x, int y )
{
	int m1, m2, col, dir;
	
	m1 = x ; //transformacao para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 - 1; 
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((0 <= m1) && (m1 < 6) && (0 <= m2) && (m2 <= 11)) // para eliminar apenas no espaco do openente
				{
				printf ("> Guerreira eliminada! Voce ganhou 1 big big :)\n");
				tabuleiro[m1][m2] = ' ';
				quant_norte--;
				break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}

void guerreiroEspecialSul( int x, int y )
{
	int m1, m2, col, dir;
	m1 = x ; //transformacao para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 - 1; 
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((0 <= m1) && (m1 < 6) && (0 <= m2) && (m2 <= 11)) // para eliminar apenas no espaco do openente
				{
				printf ("Guerreira(s) eliminada(s)! Voce ganhou 1 big big :)\n");
				tabuleiro[m1][m2] = ' ';
					if (verificaCasa(m1-1,m2-1) == 2)	
					{
						tabuleiro[m1-1][m2-1] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1-1,m2) == 2)	
					{
						tabuleiro[m1-1][m2] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1-1,m2+1) == 2)	
					{
						tabuleiro[m1-1][m2+1] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1,m2-1) == 2)	
					{
						tabuleiro[m1][m2-1] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1,m2+1) == 2)	
					{
						tabuleiro[m1][m2+1] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1+1,m2-1) == 2)	
					{
						tabuleiro[m1+1][m2-1] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1+1,m2) == 2)	
					{
						tabuleiro[m1+1][m2] = ' ';
						quant_norte--;
					}
					if (verificaCasa(m1+1,m2+1) == 2)	
					{
						tabuleiro[m1+1][m2+1] = ' ';
						quant_norte--;
					}
										
				quant_norte--;
				break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}

void guerreiroEspecialNorte( int x, int y )
{
	int m1, m2, col, dir;
	m1 = x ; //transformacao para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 + 1; 
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((8 <= m1) && (m1 < 11 ) && (2 <= m2) && (m2 <= 11)) // para eliminar apenas no espaco do openente
				{
				printf ("Guerreira(s) eliminada(s)! Voce ganhou 1 big big :)\n");
				tabuleiro[m1][m2] = ' ';
					if (verificaCasa(m1-1,m2-1) == 2)	
					{
						tabuleiro[m1-1][m2-1] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1-1,m2) == 2)	
					{
						tabuleiro[m1-1][m2] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1-1,m2+1) == 2)	
					{
						tabuleiro[m1-1][m2+1] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1,m2-1) == 2)	
					{
						tabuleiro[m1][m2-1] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1,m2+1) == 2)	
					{
						tabuleiro[m1][m2+1] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1+1,m2-1) == 2)	
					{
						tabuleiro[m1+1][m2-1] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1+1,m2) == 2)	
					{
						tabuleiro[m1+1][m2] = ' ';
						quant_sul--;
					}
					if (verificaCasa(m1+1,m2+1) == 2)	
					{
						tabuleiro[m1+1][m2+1] = ' ';
						quant_sul--;
					}
										
				quant_sul--;
				break;
				}
			}
			else if (verificaCasa(m1,m2) == 1) // caso encontre "*"
			{
				printf ("> Nao acertou niguem!\n> Desperdicou sua vez!\n");
				break;
			}
	}
	
}

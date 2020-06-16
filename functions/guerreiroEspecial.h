#include <stdio.h>


void guerreiroEspecialSul( int x, int y )
{
	int m1, m2, col, dir;
	m1 = x ; //transformação para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 - 1; 
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((0 <= m1) && (m1 < 4) && (0 <= m2) && (m2 <=9)) // para eliminar apenas no espaco do openente
				{
				printf ("Guerreiras eliminadas! Você ganhou 1 big big :)\n");
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
	m1 = x ; //transformação para nossa matriz
	m2 = y ;
	
		
	while (1)
	{
	m1 = m1 + 1; 
		
			if (verificaCasa(m1,m2) == 2)	// caso encotre presonagem
			{
				if ((0 <= m1) && (m1 < 4) && (0 <= m2) && (m2 <=9)) // para eliminar apenas no espaco do openente
				{
				printf ("Guerreiras eliminadas! Você ganhou 1 big big :)\n");
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

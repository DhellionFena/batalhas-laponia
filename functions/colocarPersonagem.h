#include <stdio.h>


int colocarPersonagem()
{
    int m1, m2, m3, m4, l1, c1, l2, c2, cont, i;
    char tipo;
    cont = 1;
	int contN = 0, contS = 0; //variaveis guerreiro especial

	
    // m eh o valor da matriz do PC
    // c e l sao variaveis da linha e coluna do jogador
	//tipo eh o tipo de guerreiro
	
    
    for ( i=0; i < modo; i++)
    {
   	
	   cont++;

        if (cont % 2 == 0) // Turnos
        {
         	while (1)
         	{
			 	// Player um colocando personagens no tabuleiro
			    printf("> %s diga a posicao que deseja colocar sua guerreira.\n[LINHA] -> ", player1);
	            scanf("%d", &l1);
	            printf("[COLUNA] -> ");
	            scanf("%d", &c1);
	            m1= l1 + 2;
	            m2= c1 + 2;
	            							
	                if ((0 <= l1) && (l1 < 4) && (0 <= c1) && (c1 <=9)) //Restricao das posicoes norte
	                {
	                    if (verificaCasa(m1, m2) == 0) // Verificando se tem personagem
						{
							while (1)
							{
								printf ("Escolha a guerreira\n-> "); 
								scanf (" %c", &tipo);
								if (contN == 0 || tipo != '@') //Limitando quantidade de guerreiros especiais
								{
									if (tipo == '1'|| tipo =='2'|| tipo == '@') //Limitando personagens
									{
										if(tipo == '@') //Acumulador guerreiro especial
										{
											contN = 1;
										}
										tabuleiro[m1][m2] = tipo;
										tabuleirobl();
										break;
									}
									else 
									{
										printf("-> Tipo de guerreiro invalido!!\n");
									}
								}
								else
								{
									printf("-> Guerreiro especial ja atribuido!!\n");
								}

							}
							break;
						}
						else
						{
							printf("Ja existe um jogador ai!!!\nPor favor insira outra posicao!\n");
						}
	                }
	            	else
					{ 
						printf ("Posicao invalida! Digite Novamente \n");
						
					}    
	        }
        }
        else
        {
            while (1)
            {
            	// Player dois colocando personagens no tabuleiro
				printf("> %s diga sua posicao \n[LINHA] -> ", player2);
	            scanf("%d", &l2);
	            printf("[COLUNA] -> ");
	            scanf("%d", &c2);
				
	            m3 = l2 + 2;
	            m4 = c2 + 2;
	                if ((6<= l2) && (l2 <10 ) && (0 <= c2) && (c2 <=9)) //Restricao das posicoes sul
	                {
						if (verificaCasa(m3, m4) == 0) // Verificando se tem personagem
						{
							while (1)
							{
							  printf ("Escolha o guerreiro\n-> ");
								scanf (" %c", &tipo);
								if (contS == 0 || tipo != '#') //Limitando quantidade de guerreiros especiais
								{
									if (tipo == '1'|| tipo =='2'|| tipo == '#') //Limitando personagens
									{
										if(tipo == '#') //Acumulador guerreiro especial
										{
											contS = 1;
										}
										tabuleiro[m3][m4] = tipo;
										tabuleirobl();
										break;
									}
									else 
									{
										printf("-> Tipo de guerreiro invalido!!\n");
									}
								}
								else
								{
									printf("-> Guerreiro especial ja atribuido!!\n");
								}
							}
							break;
						} 
						else 
						{
							printf("Ja existe um jogador ai!!!\nPor favor insira outra posicao!\n");
						}
	                }
	                else
	                {
	                	printf ("Posicao invalida! Digite Novamente \n");
					}
	    	}
	    }
	}
	//Contador de personagens para o norte e sul
	quant_norte = modo/2;
	quant_sul = modo/2;

return 0;       
}

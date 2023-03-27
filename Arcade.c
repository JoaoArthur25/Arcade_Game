#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>


void Menu();
void perguntaResposta();
void cobraNaCaixa();
void gousmasWar();

int main(){
	
	Menu();
	return 0;
	
}

void Menu ()
{
	
	system ("cls || clear");
	
	int opcao;
	
    
    printf("                                             \033[1;41m========================================================\033[0;40m\n");
    printf("                                             \033[1;41m|                                                      |\033[0;40m\n");
    printf("                                             \033[1;41m|                  WELCOME TO ARCADE                   |\033[0;40m\n");
    printf("                                             \033[1;41m|                                                      |\033[0;40m\n");
    printf("                                             \033[1;41m========================================================\033[0;40m\n\n"); 
    
    printf("                                                         \033[1;41mEscolha qual jogo deseja jogar:\033[m\n\n   ");  
	Beep(440, 100); 
    Beep(523, 100); 
    Beep(659, 500);  
	Beep(659, 100); 
    Beep(523, 100); 
    Beep(440, 500);  
                                           
	printf("              \033[44m 1. Perguntas e respostas\033[0m             \033[43m2. Cobra na caixa!\033[0m              \033[1;42m3. Gousmas War\033[0m               4. Sair\n\n\n");
	printf("                 Digite a opcao: \033[0m");
	
	scanf("%d", &opcao);
	
	switch(opcao){
	
	case 1:	
	system("cls || clear");
    Beep(650, 150);
	perguntaResposta();
	break;
	
	case 2: 
	system ("cls || clear");
	Beep(660, 150);
	cobraNaCaixa();
    break;
    
	case 3: 
	system("cls || clear");
	Beep(650, 150);
	gousmasWar();
	break;
	
	case 4: 
	system("cls || clear");
	printf("\n");
	printf("Saindo...");
	Beep(262, 500); 
    Beep(196, 500); 
    Beep(165, 1000); 
    Beep(131, 1000); 
	return 0;
	
	default: 
	system("cls || clear");
	printf("\n");
	printf("Escolha uma opcao valida...");
	sleep(1);
	Menu();
	
	}
	
	
}

void perguntaResposta(){
	
	
	system("cls || clear");
	printf("\n");
	printf("                                                               \033[34m***Perguntas e respostas***\n\n");
	printf("Descricao: Eh m jogo onde voce deve responder 5 perguntas escolhendo uma das 4 alternativas para testae seus conhecimentos. No final voce sabera quantas acertou e quantas errou, o objetivo eh acertar todas.\n\n ");
	
	int opcaoContinuarVoltar1;
	printf("Voce deseja continuar?\n");
	printf("  1. Continuar\n  2. Voltar ao menu\n");
	scanf("%d", &opcaoContinuarVoltar1);
	
	if(opcaoContinuarVoltar1 == 2)
	{
		system("cls || clear");
		Beep(650, 150);
		printf("Voltando para o menu...");
		sleep(1);
		Menu();
	}
	else if (opcaoContinuarVoltar1 == 1)
	{
		int resposta, respostasCorretas = 0;
		system("cls || clear");
		Beep(650, 150);
		printf("                                                      Primeira pergunta!\n\n");
		sleep (1);
		printf("Qual o cosseno de Pi?\n");
		printf("1) 3.14    2) -1    3) 1    4) 0 \n");
		printf("Resposta: ");
		scanf("%d",&resposta);
		
		switch(resposta)
		{
		
		case 1:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: -1\n");
			sleep (1);
			break;
		case 2:
			
		    Beep(1000, 100);
			printf("\033[34mVoce acertou!\033[0m\n");
			respostasCorretas++;
			sleep(1);	
		    break;
		case 3:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: -1\n");
			sleep (1);
			break;
		
		case 4:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: -1\n");
			sleep (1);
			break;
		
		default:
			Beep(500, 300);
			printf("Digite uma resposta valida...");
			sleep (1);
			perguntaResposta();
			break;
			
	   }
	
	
		system("cls || clear");
		printf("                                                     \033[34mSegunda pergunta!\n\n");
		sleep (1);
		printf("Qual foi o ano da independencia do Brasil?\n");
		printf("1) 1500    2) 1805    3) 1822    4) 1815 \n");
		printf("Resposta: ");
		scanf("%d",&resposta);
		switch(resposta)
		{
		
		case 1:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: 1822\n");
			sleep (1);
			break;
			
		case 2:
			
		    Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: 1822\n");
			sleep (1);
			break;
		
		case 3:
			Beep(1000, 100);
			printf("\033[34mVoce acertou!\033[0m\n");
			respostasCorretas++;
			sleep(1);
			break;	
		
		case 4:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: 1822\n");
			sleep (1);
			break;
		
		default:
			Beep(500, 300);
			printf("Digite uma resposta valida...");
			sleep (1);
			perguntaResposta();
			break;
			
	   }
		system("cls || clear");
		printf("                                                     \033[34mTerceira pergunta!\n\n");
		sleep (1);
		printf("So sei que nada sei. Quem e o autor dessa frase?\n");
		printf("1) Platao    2) Descarte    3) Kant    4) Socrates \n");
		printf("Resposta: ");
		scanf("%d",&resposta);
		switch(resposta)
		{
		
		case 1:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Socrates\n");
			sleep (1);
			break;
			
		case 2:
			
		    Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Socrates\n");
			sleep (1);
			break;
		
		case 3:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Socrates\n");
			Sleep (1);
			break;
		
		case 4:
			Beep(1000, 100);
			printf("\033[34mVoce acertou!\033[0m\n");
			respostasCorretas++;
			sleep(1);
			break;	
		
		default:
			Beep(500, 300);
			printf("Digite uma resposta valida...");
			sleep (1);
			perguntaResposta();
			break;
			
	   }
		system("cls || clear");
		printf("                                                     \033[34mQuarta pergunta!\n\n");
		sleep (1);
		printf("Qual o elemento quimico com o menor numero atomico?\n");
		printf("1) Oxigenio    2) Nitrogenio    3) Hidrogenio    4) Estanio \n");
		printf("Resposta: ");
		scanf("%d",&resposta);
		switch(resposta)
		{
		
		case 1:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Hidrogenio\n");
			sleep (1);
			break;
			
		case 2:
			
		    Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Hidrogenio\n");
			sleep (1);
			break;
		
		case 3:
			Beep(1000, 100);
			printf("\033[34mVoce acertou!\033[0m\n");
			respostasCorretas++;
			sleep(1);
			break;
		
		case 4:
		    Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Hidrogenio\n");
			sleep (1);
			break;	
		
		default:
			Beep(500, 300);
			printf("Digite uma resposta valida...");
			sleep (1);
			perguntaResposta();
			break;
			
	   }
		system("cls || clear");
		printf("                                                     \033[34mQuinta pergunta!\n\n");
		Sleep (1);
		printf("Quem foi Gengis Kahn?\n");
		printf("1) Imperador Romano    2) Rei da Franca    3) Guerreiro Viking    4) Imperador Mongol \n");
		printf("Resposta: ");
		scanf("%d",&resposta);
		switch(resposta)
		{
		
		case 1:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Imperador Mongol\n");
			sleep (1);
			break;
			
		case 2:
			
		    Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Imperador Mongol\n");
			sleep (1);
			break;
		
		case 3:
			Beep(500, 300);
			printf("\033[31mVoce errou...\033[0m\n");
			printf("A resposta era: Imperador Mongol\n");
			sleep (1);
			break;
		
		case 4:
			Beep(1000, 100);
			printf("\033[34mVoce acertou!\033[0m\n");
			respostasCorretas++;
			sleep(1);
			break;	
		
		default:
			Beep(500, 300);
			printf("Digite uma resposta valida...");
			sleep (1);
			perguntaResposta();
			break;
			
	   }
		
		    system("cls || clear");
		    
            printf("\033[34mVoce acertou %d perguntas!\033[0m\n\n", respostasCorretas);
	        printf("Deseja jogar novamente? (1 = sim, 0 = nao): ");
		    int opcaoFinalJogo1;
		    scanf("%d",&opcaoFinalJogo1);
		
		if (opcaoFinalJogo1 == 1)
		{
			system ("cls || clear");
			Beep(650, 150);
			printf("Carregando...");
			sleep(1);
			perguntaResposta();
		}
		else if(opcaoFinalJogo1 == 0)
		{
			system("cls || clar");
			Beep(650, 150);
			printf("Voltando ao menu...");
			sleep(1);
			Menu();
		}
	}
	else{
		    system("cls || clear");
		    Beep(650, 150);
			printf("Selecione uma opcao valida. Voltando ao menu\033[0m\n\n");
			Menu();
	}
}


void cobraNaCaixa()
{
	system("cls || clear");
	
	printf("                                                                \033[33m***Cobra na caixa!***\n\n");
	printf("Descricao: Voce e seu colega de trabalho estavam explorando a tumba do farao Neebe quando entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as escrituras, voces acidentalmente pressionaram um botao escondido que lacrou as portas, prendendo-os la dentro. Entao, cinco caixas apareceram no centro da sala, uma delas contendo o botao para abrir as portas, mas uma delas contem uma cobra mortal! Voces decidem jogar turnos para abrir uma caixa de cada vez, na esperanca de nao encontrar a cobra.\n\n");
	
	int opcaoContinuarVoltar2;
	printf("Voce deseja continuar?\n");
	printf("  1. Continuar\n  2. Voltar ao menu\n");
	scanf("%d", &opcaoContinuarVoltar2);
	
	
	if(opcaoContinuarVoltar2 == 2)
	{
		system("cls || clear");
		Beep(650, 150);
		printf("Voltando para o menu...");
		sleep(1);
		Menu();
	}
	else if (opcaoContinuarVoltar2 == 1)
	{
		system("cls || clear");
		Beep(650, 150);
		printf("Inicializando o jogo...");
		sleep(1);
		srand(time(NULL));
		char jogador1[30];
        char jogador2[30];
        int jogadorInicial, caixaEscolhida, caixaBotao, caixaCobra, jogoTerminou;
        int caixasAbertas[5] = {0, 0, 0, 0, 0 };
        
		system("cls || clear");
    	printf("Jogador 1, insira seu nome: ");
        fflush(stdin);
        gets(jogador1);
		Beep(950, 50);
        Beep(1500,50);
        printf("\n");
        printf("Jogador 2, insira seu nome: ");
        gets(jogador2);
		Beep(950, 50);
        Beep(1500,50);
        printf("\n");
    	jogadorInicial = rand() % 2;
    	printf("%s, voce comeca o jogo.\033[0m\n", jogadorInicial == 0 ? jogador1 : jogador2);

        caixaBotao = rand() % 5 + 1;
        caixaCobra = rand() % 5 + 1; 
    
        while (caixaCobra == caixaBotao) 
	{ 
        caixaCobra = rand() % 5 + 1;
    }
    	
    	jogoTerminou = 0;
         while (!jogoTerminou) 
		 {
    	printf("\033[33;31m\n_____   _____   _____   _____   _____\n");
		printf("[ 1 ]   [ 2 ]   [ 3 ]   [ 4 ]   [ 5 ]\n");
		printf("[___]   [___]   [___]   [___]   [___]\033[0m\n\n");
        printf("\033[33m%s, escolha uma das caixas de 1 a 5: ", jogadorInicial == 0 ? jogador1 : jogador2);
        scanf("%d", &caixaEscolhida);
        Beep(60, 200); 
        Beep(80, 200);
        printf("\n");
        

        if (caixasAbertas[caixaEscolhida - 1]) { 
            printf("Essa caixa ja foi aberta. Escolha outra caixa.\n");
        }
        else if (caixaEscolhida == caixaBotao) {
            printf("\033[34mParabens, voce encontrou o botao!\033[0m\n");
            Beep(523, 250); 
            Beep(784, 250); 
            caixasAbertas[caixaEscolhida - 1] = 1;
            jogoTerminou = 1;
        }
	    else if (caixaEscolhida == caixaCobra) {
            printf("\033[31mVoce escolheu a caixa com a cobra. Fim de jogo!\033[0m\n");
            Beep(440, 250); 
            Beep(220, 250); 
            caixasAbertas[caixaEscolhida - 1] = 1;
            jogoTerminou = 1;
        } 
		else {
			system("cls || clear");
            printf("Nao ha nada nesta caixa. Escolha outra caixa.\n");
            caixasAbertas[caixaEscolhida - 1] = 1;
        }

        if (!jogoTerminou) {
            jogadorInicial = jogadorInicial == 0 ? 1 : 0; 
        }
    }

    int opcaoFinalJogo2;
    printf("Deseja jogar novamente? (1 = sim, 0 = nao): ");
    scanf("%d", &opcaoFinalJogo2);
    if (opcaoFinalJogo2 == 1) 
	{
    	Beep(650, 150);
    	system("cls || clar");
		printf("Carregando...");
		sleep(1);
        cobraNaCaixa(); 
        
    } else if (opcaoFinalJogo2 == 2)
	{
    	Beep(650, 150);
        system("cls || clar");
		printf("Voltando ao menu...\033[0m\n");
		sleep(1);
		Menu();
    }
    else
    {
    	Beep(650, 150);
    	printf("\n");
    	printf("Digite uma opcao valida, voltando para o Menu...");
    	sleep(1);
    	Menu();
	}
    	
}


}
		
void gousmasWar()
{
	system("cls || clear");
	
	printf("                                                                \033[1;32m***Gousmas War!***\n\n");
	printf("Descricao:  Nas terras magicas de Liima, e comum as pessoas capturarem Gousmas para lutar. As Gousmas sao criaturas doceis com a habilidade de se dividir, mas quando atacadas, entram em um estado de furia e ficam mais fortes a cada ataque. No entanto, se uma Gousma fica muito furiosa, ela perde o controle e acaba se desintegrando. ");
    printf("Durante a luta, cada participante comeca com duas Gousmas em campo e com o nivel de furia igual a 1. Ao escolher uma Gousma para atacar, todo o nivel de furia do atacante e transferido para a Gousma atacada. Quando a Gousma atacada alcanca um nivel de furia maior que 5, ela e desintegrada. ");
    printf ("Como a Gousma e feita de um liquido viscoso isso permite que durante a luta uma Gousma pode se dividir em duas, transferindo uma quantidade selecionada de furia para a outra Gousma. Por exemplo, se uma unica Gousma em campo tem 4 de furia, pode ser dividida em outra Gousma passando 1 de furia, assim, teremos uma Gousma com 3 de furia e outra com 1 de furia. O limite maximo de Gousmas em campo e de dois para cada participante. Se um jogador tem todas as Gousmas derrotadas, ele perde o jogo.\n\n");
	
	int opcaoContinuarVoltar3;
	printf("Voce deseja continuar?\n");
	printf("  1. Continuar\n  2. Voltar ao menu\n");
	scanf("%d", &opcaoContinuarVoltar3);
	
	
	if(opcaoContinuarVoltar3 == 2)
	{
	
		system("cls || clear");
		Beep(650, 150);
		printf("Voltando para o menu...");
		sleep(1);
		Menu();
	}
	
	else if (opcaoContinuarVoltar3 == 1)
	{
	    system("cls || clear");    
	    Beep(650, 150);
	    
		srand(time(NULL));
		char jogador1[30];
        char jogador2[30];
        int jogadorInicial, furia1a = 1, furia1b = 1, furia2c = 1, furia2d = 1, jogoTerminou;
        int escolha;
		int escolhaGousma, escolhaGousmaAtacar, escolhaGousmaDividir, quantidadeFuria;
		
    	printf("Jogador 1, insira seu nome: ");
        fflush(stdin);
        gets(jogador1);
		Beep(950, 50);
        Beep(1500,50);
        printf("\n");
        
        printf("Jogador 2, insira seu nome: ");
        gets(jogador2);
		Beep(950, 50);
        Beep(1500,50);
        printf("\n");
        
    	jogadorInicial = rand() % 2;
    	printf("%s, voce comeca o jogo!\n\n", jogadorInicial == 0 ? jogador1 : jogador2);
    	printf("%s possui a gousma A e a gousma B\n\n",jogador1);
    	printf("%s possui a gousma C e a gousma D\n\n",jogador2);
    	
    	jogoTerminou = 0;
    	while (!jogoTerminou)
    	{
    		fflush(stdin);
    		sleep(1);
    		printf("%s, voce deseja atacar ou dividir? 1. Atacar  2.Dividir\n",jogadorInicial == 0? jogador1:jogador2);
    		printf("Digite uma opcao: ");
    		scanf("%d",&escolha);
    		Beep(650, 150);
    		printf("\n");
    		
    	    if (jogadorInicial == 0 && escolha == 1)
    	    {
    	    	fflush(stdin);
    	        printf("Escolha qual Gousma deseja usar\t  1. A    2. B: ");
    		    scanf("%d", &escolhaGousma);
    		    Beep(650, 150);
    	    	printf("\n");
    	    	printf("Escolha qual gousma deseja atacar.\t1. C    2. D: ");
    	    	scanf("%d",&escolhaGousmaAtacar);
    	    	Beep(650, 150);
    	    	sleep(1);
    	    	if(escolhaGousma == 1 && furia1a >=5)
    	    	{
    	    		printf("Voce nao pode usar uma Gousma morta. Perdeu a vez.\n");
    	    		sleep(1);		
    	    		
				}
				else if(escolhaGousma == 2 && furia1b >=5)
    	    	{
    	    		printf("Voce nao pode usar uma Gousma morta. Perdeu a vez.\n");
    	    		sleep(1);
						
				}
				else
				{
					if(escolhaGousmaAtacar == 1 && escolhaGousma == 1)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
    	    		if(furia2c > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
					}
					else
					{
					
				    printf("\n");
    	    		furia2c = furia2c+furia1a;
    	    		if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia2c >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t D = %d\n",furia1b, furia2d);
					}
					else if(furia2c >= 5 && furia1b >= 5)
					{
						printf("A = %d\n D = %d\n",furia1a, furia2d);
					}
					else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n D = %d\n",furia1a, furia1b, furia2d);
					}
    	    		else if (furia1a >= 5 && furia1b >= 5)
    	    		{
    	    			printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
					}	
					
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n",furia1b, furia2c, furia2d);
					}
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a, furia2c, furia2d);
					}
					
					
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
				}
    	    }
					
				else if(escolhaGousmaAtacar == 2 && escolhaGousma == 1)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
    	    		if(furia2c > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
					else
					{
					
				    printf("\n");
    	    		furia2d = furia2d+furia1a;
    	    		if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia2d >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t C = %d\n",furia1b, furia2c);
					}
					else if(furia2d >= 5 && furia1b >= 5)
					{
						printf("A = %d\n C = %d\n",furia1a, furia2c);
					}
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}	
					
    	    		else if (furia1a >= 5 && furia1b >= 5)
    	    		{
    	    			printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
					}	
					
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n",furia1b, furia2c, furia2d);
					}
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a, furia2c, furia2d);
					}
					
					
					else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n D = %d\n",furia1a, furia1b, furia2d);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
				}
    	}
			}
				if(escolhaGousmaAtacar == 1 && escolhaGousma == 2)
    	    	{
				    fflush(stdin);
				    system("cls || clear");
    	    		if(furia2c > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
					else
					{
					
				    printf("\n");
    	    		furia2c = furia2c+furia1b;
    	    		if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia2c >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t D = %d\n",furia1b, furia2d);
					}
					else if(furia2c >= 5 && furia1b >= 5)
					{
						printf("A = %d\n D = %d\n",furia1a, furia2d);
					}
					else if(furia2c>=5)
					{
						printf("A = %d\t B = %d\n D = %d\n",furia1a, furia1b, furia2d);
					}	
  	
					else if(furia1a >= 5 && furia1b >= 5)
    	    		{
    	    			printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
					}	
					else if(furia2d >= 5)
					{
						printf("A = %d\n B = %d\t C = %d\n",furia1a, furia1b, furia2c);
					}
					else if(furia2c >= 5 )
					{
						printf("A = %d\n B = %d\t D = %d\n",furia1a, furia1b, furia2d);
					}
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a, furia2c, furia2d);
					}
					
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n",furia1b, furia2c, furia2d);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
				}
			}
					
				else if(escolhaGousmaAtacar == 2 && escolhaGousma == 2)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
    	    		if(furia2d > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
					else
					{
					
				    printf("\n");
    	    		furia2d = furia2d+furia1b;
    	    		if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia2d >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t C = %d\n",furia1b, furia2c);
					}
					else if(furia2d >= 5 && furia1b >= 5)
					{
						printf("A = %d\n C = %d\n",furia1a, furia2c);
					}
					else if (furia1a >= 5 && furia1b >= 5)
    	    		{
    	    			printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
					}	
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}	
					else if(furia2c >= 5 )
					{
						printf("A = %d\t B= %d\n D = %d\n",furia1a, furia1b, furia2d);
					}
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a, furia2c, furia2d);
					}
					
					
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n",furia1b, furia2c, furia2d);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
				}
			}
					
		}
		
    		
    		else if (jogadorInicial != 0 && escolha == 1)
    	    {
    	    	fflush(stdin);
    	    	printf("Escolha qual Gousma deseja usar  1. C    2. D: ");
    		    scanf("%d", &escolhaGousma);
    		    Beep(650, 150);
    	    	printf("\n");
    	    	printf("Escolha qual gousma deseja atacar  1. A    2. B: ");
    	    	scanf("%d",&escolhaGousmaAtacar);
    	    	Beep(650, 150);
    	    	sleep(1);
    	    	if(escolhaGousma == 1 && furia2c >=5)
    	    	{
    	    		printf("Voce nao pode usar uma Gousma morta.\n");
    	    		sleep(1);
						
				}
				else if(escolhaGousma == 2 && furia2d >=5)
    	    	{
    	    		printf("Voce nao pode usar uma Gousma morta.\n");
    	    		sleep(1);
						
				}
				else
				{
					
    	    	if(escolhaGousmaAtacar == 1 && escolhaGousma == 1)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
				    printf("\n");
    	    		furia1a = furia1a+furia2c;
    	    		if(furia1a > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
    	    		else if(furia1a >= 5 && furia1b>= 5)
					{
						printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
						
					}
					else if(furia2c >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t D = %d\n",furia1b, furia2d);
					}
					else if(furia2d >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t C = %d\n",furia1b, furia2c);
					}
					else if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n", furia1b, furia2c, furia2d);
					}
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a, furia2c, furia2d);
					}
					 else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n D = %d\n",furia1a, furia1b,  furia2d);
					}
					
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}	
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}	
				}
					
				else if(escolhaGousmaAtacar == 2 && escolhaGousma == 1)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
				    printf("\n");
    	    		furia1b = furia1b+furia2c;
    	    		if(furia1b > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
    	    		if(furia1a >= 5 && furia1b>= 5)
					{
						printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce perdeu!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;	
					}
					else if(furia2c >= 5 && furia1b >= 5)
					{
						printf("A = %d\n D = %d\n",furia1a, furia2d);
					}
					else if(furia2d >= 5 && furia1b >= 5)
					{
						printf("A = %d\n C = %d\n",furia1a, furia2c);
					}
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a,  furia2c, furia2d);
					}
					else if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n", furia1b, furia2c, furia2d);
					}
					
					 else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n \t D = %d\n",furia1a, furia1b,  furia2d);
					}
					
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}	
				}
				if(escolhaGousmaAtacar == 1 && escolhaGousma == 2)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
				    printf("\n");
    	    		furia1a = furia1a+furia2d;
    	    		if(furia1a > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
    	    		if(furia1a >= 5 && furia1b>= 5)
					{
						printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
						
					}
					else if(furia2c >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t D = %d\n",furia1b, furia2d);
					}
					else if(furia2d >= 5 && furia1a >= 5)	
					{
						printf("B = %d\n \t C = %d\n",furia1b, furia2c);
					}
					else if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia1a >= 5 )
					{
						printf("B = %d\n C = %d\t D = %d\n", furia1b, furia2c, furia2d);
					}
					
					
					else if(furia1b >= 5 )
					{
						printf("A = %d\n C = %d\t D = %d\n",furia1a,  furia2c, furia2d);
					}
					 else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n \t D = %d\n",furia1a, furia1b, furia2d);
					}
					
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}	
				}
					
				else if(escolhaGousmaAtacar == 2 && escolhaGousma == 2)
    	    	{
    	    		fflush(stdin);
    	    		system("cls || clear");
				    printf("\n");
    	    		furia1b = furia1b+furia2d;
    	    		if(furia1b > 5)
    	    		{
    	    			printf("Voce nao pode atacar uma Gousma morta.Perdeu a vez\n");
    	    			sleep(1);
    	    			
					}
    	    		if(furia1a >= 5 && furia1b>= 5)
					{
						printf("C = %d\t D = %d\n", furia2c, furia2d);
						printf("%s, voce ganhou!\n",jogador2);
						sleep(1);
						jogoTerminou = 1;
						
					}
					else if(furia2c >= 5 && furia1b >= 5)
					{
						printf("A = %d\n D = %d\n",furia1a, furia2d);
					}
					else if(furia2d >= 5 && furia1b >= 5)
					{
						printf("A = %d\n C = %d\n",furia1a, furia2c);
					}
						else if (furia2c >= 5 && furia2d >= 5)
					{
						printf("A = %d\t B = %d\n",furia1a, furia1b);
						printf("%s, voce ganhou!\n",jogador1);
						sleep(1);
						jogoTerminou = 1;
					}
					else if(furia1b >= 5 )
					{
						printf("A = %d\t B = %c\n C = %d\t D = %d\n",furia1a,  furia2c, furia2d);
					}
				
					else if(furia1a >= 5 )
					{
						printf("\t B = %d\n C = %d\t D = %d\n", furia1b, furia2c, furia2d);
					}
					
					 else if(furia2c >= 5 )
					{
						printf("A = %d\t B = %d\n \t D = %d\n",furia1a, furia1b,  furia2d);
					}
					
					else if(furia2d >= 5 )
					{
						printf("A = %d\t B = %d\n C = %d\n",furia1a, furia1b, furia2c);
					}	
					else
					{
						printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}		
				}
			}
		}
			
			else if (jogadorInicial == 0 && escolha == 2)
		{
			    fflush(stdin);
				if(furia1a >= 5 || furia1b >= 5 )
			{
				printf("Escolha quanto de furia deseja transferir: ");
				scanf("%d",&quantidadeFuria);
				Beep(650, 150);
				if(furia1b>0)
				{
					furia1a = quantidadeFuria;
				    furia1b = furia1b - quantidadeFuria;
				    if(furia1b>0)
				    {
				    printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
					else
					{
						printf("Voce nao pode transferir todas as suas furias. Perdeu a vez\n");
					}
					
				}
				else if (furia1b>=5)
				{
				   furia1b = quantidadeFuria;
				   furia1a = furia1a - quantidadeFuria;
				   if(furia1a>0)
				    {
				    printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
					else
					{
						printf("Voce nao pode transferir todas as suas furias. Perdeu a vez\n");
					}
				}
				
			}
				else
			{
					printf("Voce nao pode dividir enquanto tiver duas Gousmas. Perdeu a vez\n");
					sleep(1);
			}
		}
		else if (jogadorInicial != 0 && escolha == 2)
		{
		
		if (furia2c >= 5 || furia2d >= 5)
			{
				fflush(stdin);
				printf("Escolha quanto de furia deseja transferir: ");
				scanf("%d",&quantidadeFuria);
				Beep(650, 150);
				if (furia2c>=5)
				{
				   furia2c = quantidadeFuria;
				   furia2d = furia2d - quantidadeFuria;
				   
					if(furia2d>0)
				    {
				    printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
					else
					{
						printf("Voce nao pode transferir todas as suas furias. Perdeu a vez\n");
					}
				   
				}
				else if (furia2d>=5)
				{
				   furia2d = quantidadeFuria;
				   furia2c = furia2c - quantidadeFuria;
				   if(furia2c>0)
				    {
				    printf("A = %d\t B = %d\n C = %d\t D = %d\n",furia1a, furia1b, furia2c, furia2d);
					}
					else
					{
						printf("Voce nao pode transferir todas as suas furias. Perdeu a vez\n");
					}
				}	
			}
			else
			{
					printf("Voce nao pode dividir enquanto tiver duas Gousmas. Perdeu a vez\n");
					sleep(1);
			}
			
		}
		if (!jogoTerminou) 
		{
            jogadorInicial = jogadorInicial == 0 ? 1 : 0; 
        }
	}
	
	fflush(stdin);
	printf("\n");
	int opcaoFinalJogo3;
    printf("Deseja jogar novamente? (1 = sim, 0 = nao): \033[0m");
    scanf("%d", &opcaoFinalJogo3);
    printf("\n");
    if (opcaoFinalJogo3 == 1) 
	{
    	Beep(650, 150);
    	system("cls || clar");
		printf("Carregando...");
		sleep(1);
        gousmasWar(); 
        
    } 
	else if (opcaoFinalJogo3 == 0)
	{
    	Beep(650, 150);
        system("cls || clar");
		printf("Voltando ao menu...\033[0m\n");
		sleep(1);
		Menu();
    }
    else
    {
    	Beep(650, 150);
    	printf("\n");
    	printf("Digite uma opcao valida, voltando para o Menu...");
    	sleep(1);
    	Menu();
	}
}
}


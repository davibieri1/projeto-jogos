#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int opcao, alternativax, alternativaz, alternativay, alternativaw, alternativav;
	
	printf("\033[0;36m  titulo do jogo\n\033[0m");
	printf("\033[0;36m\n1: pergunta e resposta");
	printf("\033[0;36m\n2: cobra na caixa!");
	printf("\033[0;36m\n3: gousmas war");
	printf("\033[0;36m\n4: sair\033[0m\n");
	scanf("%d", &opcao);
	system("cls");
	
	
	
	if(opcao==1){
		printf("\033[0;36m\nqual a funcao da placa-mae?\n");
		printf("\n1: executar operacoes e calculos do sistema.");
		printf("\n2: interligar subsistemas computacionais.");
		printf("\n3: armazenar dados de forma permanente.");
		printf("\n4: Regular e distribuir energia eletrica aos dispositivos.\n\033[0m\n");
		scanf("%d", &alternativax);
		system("cls");
		if(alternativax==1){
			printf("\033[1;31m\niincorreto. alternativa correta: interligar subsistemas computacionais.");
		}
		if(alternativax==2){
			printf("\033[1;32mcorreto!\033[0m\n");
		}
		if(alternativax==3){
			printf("\033[1;31\niincorreto. alternativa correta: interligar subsistemas computacionais.");
		}
		if(alternativax==4){
			printf("\033[1;31\niincorreto. alternativa correta: interligar subsistemas computacionais.");
		}
		printf("\033[0;36m\no que pode acontecer quando o processador atinge temperaturas elevadas por tempo prolongado?\n");
		printf("\n1: aumento automatico da frequencia para compensar.");
		printf("\n2: reducao de desempenho para evitar danos fisicos.");
		printf("\n3: transferencia de carga para a memoria ram.");
		printf("\n4: desligamento imediato com aviso previo.\n\033[0m\n");
		scanf("%d", &alternativaz);
		system("cls");
		if(alternativaz==1){
			printf("\033[1;31m\niincorreto. alternativa correta: reducao de desempenho para evitar danos fisicos.");
		}
		if(alternativaz==2){
			printf("\033[1;32mcorreto!\033[0m\n");
		}
		if(alternativaz==3){
			printf("\033[1;31\n iincorreto. alternativa correta: reducao de desempenho para evitar danos fisicos.");
		}
		if(alternativaz==4){
			printf("\033[1;31\n iincorreto. alternativa correta: reducao de desempenho para evitar danos fisicos.\n\033[0m\n");
	}
		printf("\033[0;36m\no que pode causar instabilidade mesmo com componentes aparentemente funcionando corretamente?\n");	
	    printf("\n1: alta taxa de armazenamento livre.");
    	printf("\n2: fonte de energia com fornecimento instavel ou insuficiente.");
    	printf("\n3: presenca de multiplos dispositivos de entrada.");
    	printf("\n4: baixo uso da gpu.\n\033[0m\n");
	 	scanf("%d", &alternativay);
	 	system("cls");
	 	if(alternativay==1){
			printf("\033[1;31m\nincorreto. alternativa correta: fonte de energia com fornecimento instavel ou insuficiente.");
		}
		if(alternativay==2){
			printf("\033[1;32mcorreto!\033[0m\n");
		}
		if(alternativay==3){
			printf("\033[1;31m\nincorreto. alternativa correta: fonte de energia com fornecimento instavel ou insuficiente.");
		}
		if(alternativay==4){
			printf("\033[1;31\n incorreto. alternativa correta: fonte de energia com fornecimento instavel ou insuficiente.\n\033[0m\n");
	 }
	 printf("\033[0;36m\no que pode causar superaquecimento no computador?\n");
	 printf("\n1: excesso de armazenamento livre.");
	 printf("\n2: uso de teclado externo.");
	 printf("\n3: falta de ventilacao ou acumulo de poeira.");
	 printf("\n4: Uso moderado de programas leves.\n\033[0m\n");
	 scanf("%d", &alternativaw);
	 system("cls");
	 if(alternativaw==1){
			printf("\033[1;31m\nincorreto. alternativa correta: falta de ventilacao ou acumulo de poeira.");
		}
		if(alternativaw==2){
			printf("\033[1;31m\nincorreto. alternativa correta: falta de ventilacao ou acumulo de poeira.");
		}
		if(alternativaw==3){
			printf("\033[1;32mcorreto!\033[0m\n");
		}
		if(alternativaw==4){
			printf("\033[1;31\n incorreto. alternativa correta: falta de ventilacao ou acumulo de poeira.\n\033[0m\n");
			
}
     printf("\033[0;36m\nqual e o impacto de utilizar um hd em vez de um ssd no sistema operacional?\n");
     printf("\n1: menor tempo de acesso aos dados.");
     printf("\n2: aumento da capacidade da memoria ram.");
     printf("\n3: maior velocidade de inicializacao.");
     printf("\n4: maior lentidao na leitura e gravacao de dados.\n\033[0m\n");
     scanf("%d", &alternativav);
	 system("cls");
  	    
      if(alternativav==1){
			printf("\033[1;31m\nincorreto. alternativa correta: maior lentidao na leitura e gravacao de dados.");
		}
		if(alternativav==2){
			printf("\033[1;31m\nincorreto. alternativa correta: maior lentidao na leitura e gravacao de dados.");
		}
		if(alternativav==3){
			printf("\033[1;31m\nincorreto. alternativa correta: maior lentidao na leitura e gravacao de dados.");
		}
		if(alternativav==4){
			printf("\033[1;32mcorreto!\033[0m\n");
		
		}	
	}
	
if(opcao==2){

    int jogar = 1;

    srand(time(NULL));

    while (jogar == 1)
    {
        int cobra, botao;
        int jogador = 1;
        int caixa;

        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

        printf(" JOGO COBRA NA CAIXA \n");

        cobra = rand() % 5 + 1;
        botao = rand() % 5 + 1;

        while (botao == cobra)
        {
            botao = rand() % 5 + 1;
        }

        while (1)
        {
            printf("\nJogador %d, escolha uma caixa (1 a 5): ", jogador);
            scanf("%d", &caixa);

            if (caixa < 1 || caixa > 5)
            {
                printf("Entrada invalida!\n");
                continue;
            }

            if ((caixa == 1 && c1) ||
                (caixa == 2 && c2) ||
                (caixa == 3 && c3) ||
                (caixa == 4 && c4) ||
                (caixa == 5 && c5))
            {
                printf("Essa caixa ja foi escolhida!\n");
                continue;
            }

            if (caixa == 1) c1 = 1;
            if (caixa == 2) c2 = 1;
            if (caixa == 3) c3 = 1;
            if (caixa == 4) c4 = 1;
            if (caixa == 5) c5 = 1;

            if (caixa == cobra)
            {
                printf("\nVoce encontrou a COBRA! Perdeu!\n");

                if (jogador == 1)
                    printf("Jogador 2 venceu!\n");
                else
                    printf("Jogador 1 venceu!\n");

                break;
            }
            else if (caixa == botao)
            {
                printf("\nVoce encontrou o BOTAO! Ganhou!\n");
                printf("Jogador %d venceu!\n", jogador);
                break;
            }
            else
            {
                printf("Caixa vazia!\n");

                if (jogador == 1)
                    jogador = 2;
                else
                    jogador = 1;
            }
        }

        printf("\nFim do jogo!\n");

        printf("jogar de novo? (1 = sim / 0 = nao): ");
        scanf("%d", &jogar);
    }
}
	
	if(opcao==3){  
	
    int j1g1 = 1, j1g2 = 1;
    int j2g1 = 1, j2g2 = 1;
    int j1a1 = 1, j1a2 = 1;
    int j2a1 = 1, j2a2 = 1;
    int turno = 1;
    int op;
    int origem;
    int alvo;
    int valor;
    
	while(1){

    printf("\nJogador 1: G1=%d G2=%d\n", j1g1, j1g2);
    printf("Jogador 2: G1=%d G2=%d\n", j2g1, j2g2);

    printf("\nTurno do jogador %d\n", turno);

    while (1){
        printf("1 atacar  2 dividir: ");
        scanf("%d", &op);
        if (op == 1 || op == 2) break;
    }

    if (op == 1){

        if (turno == 1){

            while (1){
                printf("Sua gosma (1 ou 2): ");
                scanf("%d", &origem);
                if (origem == 1 && j1a1) break;
                if (origem == 2 && j1a2) break;
            }

            while (1){
                printf("Alvo (1 ou 2): ");
                scanf("%d", &alvo);
                if (alvo == 1 && j2a1) break;
                if (alvo == 2 && j2a2) break;
            }

            if (origem == 1 && alvo == 1) j2g1 += j1g1;
            if (origem == 1 && alvo == 2) j2g2 += j1g1;
            if (origem == 2 && alvo == 1) j2g1 += j1g2;
            if (origem == 2 && alvo == 2) j2g2 += j1g2;

            if (j2g1 > 5){ j2a1 = 0; j2g1 = 0; }
            if (j2g2 > 5){ j2a2 = 0; j2g2 = 0; }

        } else {

            while (1){
                printf("Sua gosma (1 ou 2): ");
                scanf("%d", &origem);
                if (origem == 1 && j2a1) break;
                if (origem == 2 && j2a2) break;
            }

            while (1){
                printf("Alvo (1 ou 2): ");
                scanf("%d", &alvo);
                if (alvo == 1 && j1a1) break;
                if (alvo == 2 && j1a2) break;
            }

            if (origem == 1 && alvo == 1) j1g1 += j2g1;
            if (origem == 1 && alvo == 2) j1g2 += j2g1;
            if (origem == 2 && alvo == 1) j1g1 += j2g2;
            if (origem == 2 && alvo == 2) j1g2 += j2g2;

            if (j1g1 > 5){ j1a1 = 0; j1g1 = 0; }
            if (j1g2 > 5){ j1a2 = 0; j1g2 = 0; }
        }
    }

    if (op == 2) {

        if (turno == 1) {

            while (1) {
                printf("Origem (1 ou 2): ");
                scanf("%d", &origem);
                if (origem == 1 && j1g1 > 1) break;
                if (origem == 2 && j1g2 > 1) break;
            }

            while (1) {
                printf("Destino (1 ou 2): ");
                scanf("%d", &alvo);
                if (alvo == 1 || alvo == 2) break;
            }

            while (1) {
                printf("Valor: ");
                scanf("%d", &valor);
                if (origem == 1 && valor < j1g1 && valor > 0) break;
                if (origem == 2 && valor < j1g2 && valor > 0) break;
            }

            if (origem == 1) j1g1 -= valor;
            if (origem == 2) j1g2 -= valor;

            if (alvo == 1) {
                j1g1 += valor;
                if (j1a1 == 0) j1a1 = 1;
            }

            if (alvo == 2) {
                j1g2 += valor;
                if (j1a2 == 0) j1a2 = 1;
            }

            if (j1g1 > 5){ j1a1 = 0; j1g1 = 0; }
            if (j1g2 > 5){ j1a2 = 0; j1g2 = 0; }

        } else {

            while (1) {
                printf("Origem (1 ou 2): ");
                scanf("%d", &origem);
                if(origem == 1 && j2g1 > 1) break;
                if(origem == 2 && j2g2 > 1) break;
            }

            while (1) {
                printf("Destino (1 ou 2): ");
                scanf("%d", &alvo);
                if(alvo == 1 || alvo == 2) break;
            }

            while (1) {
                printf("Valor: ");
                scanf("%d", &valor);
                if(origem == 1 && valor < j2g1 && valor > 0) break;
                if(origem == 2 && valor < j2g2 && valor > 0) break;
            }

            if (origem == 1) j2g1 -= valor;
            if(origem == 2) j2g2 -= valor;

            if(alvo == 1) {
                j2g1 += valor;
                if(j2a1 == 0) j2a1 = 1;
            }

            if(alvo == 2) {
                j2g2 += valor;
                if(j2a2 == 0) j2a2 = 1;
            }

            if(j2g1 > 5){ j2a1 = 0; j2g1 = 0; }
            if(j2g2 > 5){ j2a2 = 0; j2g2 = 0; }
        }
    }

    if(j1a1 == 0 && j1a2 == 0) {
        printf("\nJogador 2 venceu\n");
        break;
    }

    if(j2a1 == 0 && j2a2 == 0) {
        printf("\nJogador 1 venceu\n");
        break;
    }

    if(turno == 1)
    turno = 2;
    else
    turno = 1;

}

	}
	
    return 0;
}

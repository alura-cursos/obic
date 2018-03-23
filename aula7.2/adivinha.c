#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGANDO 1
#define ACABOU 0

int main() {

	int segundos = time(0);
	srand(segundos);

	// imprime mensagem de boas vindas
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	// jogo
	int numerosecreto = rand() % 100 + 1;

	//printf("O número secreto é %d.\n", numerosecreto);

	int tentativa = 1;
	double pontos = 1000;
	int situacao = JOGANDO;

	while(situacao == JOGANDO){

		printf("\nTentativa %d\n", tentativa);

		int chute;
		printf("Qual é o seu chute (entre 1 e 100)? ");
		scanf("%d", &chute);

		int chuteehinvalido = (chute < 1) || (chute > 100);
 		if(chuteehinvalido) {
			printf("O seu chute deve estar entre 1 e 100.\n");
			continue;
		}

		printf("O seu chute é %d.\n", chute);

		int acertou = (chute == numerosecreto);

		if(acertou) {
			printf("Parabéns! Você acertou!\n");
			printf("Que tal jogar novamente?\n");
			situacao = ACABOU;
			continue;
		}

		int maior = (numerosecreto > chute);
		if(maior) {
			printf("O número secreto é maior do que %d.\n", chute);
		} else {
			printf("O número secreto é menor do que %d.\n", chute);
		}

		double pontosPerdidos = abs(chute - numerosecreto) / 2.0;
		// printf("Voce pedeu %f pontos.\n", pontosPerdidos);
		pontos -= pontosPerdidos;

		tentativa++;

	}	

	printf("Fim do jogo com %d tentativas e %.2f pontos!\n", tentativa, pontos);

	return 0;
}










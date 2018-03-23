#include <stdio.h>

#define MAXIMO_DE_TENTATIVAS 5

int main() {

	// imprime mensagem de boas vindas
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	// jogo
	int numerosecreto = 42;

	//printf("O número secreto é %d.\n", numerosecreto);

	for(int tentativa = 1; tentativa <= MAXIMO_DE_TENTATIVAS; tentativa++){

		printf("\nTentativa %d de %d\n", tentativa, MAXIMO_DE_TENTATIVAS);

		int chute;
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);

		printf("O seu chute é %d.\n", chute);

		int acertou = (chute == numerosecreto);
		if(acertou) {
			printf("Parabéns! Você acertou!\n");
			printf("Que tal jogar novamente?\n");
			break;
		} else {
			printf("Que pena, você errou dessa vez!\n");
			printf("Não desanime, tente novamente!\n");

			int maior = (numerosecreto > chute);
			if(maior){
				printf("O número secreto é maior do que %d.\n", chute);
			} else {
				printf("O número secreto é menor do que %d.\n", chute);
			}
		}
	}	

	printf("Fim do jogo!\n");

	return 0;
}










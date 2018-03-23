#include <stdio.h>

int main() {

	// imprime mensagem de boas vindas
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	// jogo
	int numerosecreto = 42;

	// printf("O número secreto é %d.\n", numerosecreto);

	int chute;
	printf("Qual é o seu chute? ");
	scanf("%d", &chute);

	printf("O seu chute é %d.\n", chute);

	int acertou = (chute == numerosecreto);
	if(acertou) {
		printf("Parabéns! Você acertou!\n");
		printf("Jogue novamente!\n");
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

	return 0;
}










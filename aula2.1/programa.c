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

	if(chute == numerosecreto) {
		printf("Parabéns! Você acertou!\n");
		printf("Jogue novamente!\n");
	} else {
		printf("Que pena, você errou dessa vez!\n");
		printf("Não desanime, tente novamente!\n");
	}

	return 0;
}










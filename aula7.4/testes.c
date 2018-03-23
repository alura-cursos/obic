#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 78345897634
// 78345897601
// 78345897600
// 78345897699

int main() {
	int segundos = time(0);
	srand(segundos);
	while(1) {
		int numero = rand() % 100 + 1;
		printf("numero aleatorio: %d\n", numero);
	}
	return 0;
}





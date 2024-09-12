
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {

		int resultat = 0, nbr1 = 0, nbr2 = 0;
		printf("Donnez moi votre premiere valeur :");
		scanf_s("%d", &nbr1);
		printf("Donnez moi votre deuxieme valeur :");
		scanf_s("%d", &nbr2);

		resultat = nbr1 * nbr2;
		printf(" %d x %d = %d", nbr1, nbr2, resultat);
		return 0;
	}




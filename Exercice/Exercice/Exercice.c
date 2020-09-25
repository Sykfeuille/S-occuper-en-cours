#include <stdlib.h>
#include <stdio.h>

void main() {

	//calculer une moyenne à partir de valeurs données par l'utilisateur
	int Valeur = 0;
	int sum = 0;
	int appel = 0;
	while (!(Valeur == -1)) {
		printf("Entrez une valeur a ajouter a la moyenne : ");
		scanf_s("%d", &Valeur);
		if (Valeur == -1) {
			break;
		}
		appel = appel + 1;
		sum = sum + Valeur;
	}
	printf("\nLa moyenne des valeurs est : %d", sum/appel);
	printf("\n\n");
	system("pause");
}
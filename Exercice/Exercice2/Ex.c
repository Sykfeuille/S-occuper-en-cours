#include <stdlib.h>
#include <stdio.h>

void main() {
	//calculer le nbr d'annee pour qu'un capital atteigne le double de sa valeur avec un taux d'interet
	float capital;
	float interet;
	int annee = 0;
	float Ncapital = capital;

	printf("Entrez le capital de votre compte en banque : ");
	scanf_s("%f", &capital);
	printf("\nEntrez le taux d'interet de votre banque en pourcentage : ");
	scanf_s("%f", &interet);

	while (Ncapital < (2 * capital)) {
		Ncapital = Ncapital + (Ncapital * (interet / 100));
		annee = annee + 1;
	}
	printf("\nPour que votre capital double il faudra %d ans et vous aurez %f euros", annee, Ncapital);
	printf("\n\n");
	system("pause");
}
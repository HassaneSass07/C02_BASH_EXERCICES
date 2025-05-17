#include <stdio.h>

int main(void) {
    int nombre;
    unsigned long long factoriel = 1;

    // Lecture d'un entier positif
    scanf("%d", &nombre);

    // Si nombre négatif, affiche une erreur et termine le programme
    if (nombre < 0) {
        printf("Erreur : le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1;
    }

    // Calcul du factoriel avec une boucle for
    for (int i = 1; i <= nombre; i++) {
        factoriel *= i;
    }

    // Affiche le résultat
    printf("Le factoriel de %d est : %llu\n", nombre, factoriel);

    return 0;
}

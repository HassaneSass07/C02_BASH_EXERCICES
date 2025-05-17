#include <stdio.h>

int main() {
    int nombre;
    unsigned long long factoriel = 1; // Utilisation d’un type plus grand pour éviter le débordement

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier positif :");
    scanf("%d", &nombre);

    // Calcul du factoriel avec une boucle for
    for (int i = 1; i <= nombre; i++) {
        factoriel *= i;
    }

    // Affichage du résultat
    printf("Le factoriel de %d est : %llu\n", nombre, factoriel);

    return 0;
}

#include <stdio.h>

int main() {
    int nombre;
    unsigned long long factoriel = 1; // Utilisation d’un type plus grand pour éviter le débordement

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier positif :");
    scanf("%d", &nombre);

    // Vérifier que l'entrée est valide (nombre >= 0)
    if (nombre < 0) {
        printf("Erreur : le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1; // Sortie avec code d'erreur
        
    }

    // Calcul du factoriel avec une boucle for
    for (int i = 1; i <= nombre; i++) {
        factoriel *= i;
    }

    // Affichage du résultat
    printf("Le factoriel de %d est : %llu\n", nombre, factoriel);

    return 0;
}

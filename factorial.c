#include <stdio.h>

int main() {
    int nombre = 0;
    int i = 1;

    scanf("%d", &nombre); // lire l'entrée de l'utilisateur

    if (nombre < 0) {
        printf("Erreur.\n");
    } else {
        int fact = 1; // Initialiser la variable fact a 1
        while (i <= nombre) {
            fact *= i; // Multiplier fact par i
            i++; // incrémenter i
        }
        printf("Le factoriel de %d est : %d\n", nombre, fact);
        }

    return 0;
}
// c'est un programme qui lit un nombre entier et affiche son factoriel    
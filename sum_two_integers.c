#include <stdio.h>

int main(void) {
    int a, b;

    // Lecture des deux entiers sans message
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // erreur de saisie
    }

    // Affichage exact demandé
    printf("La somme est : %d\n", a + b);

    return 0;
}

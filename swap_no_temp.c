#include <stdio.h>

int main(void) {
    int a, b;

    // Lecture des deux entiers sans message
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // erreur de saisie
    }

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage strictement conforme
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

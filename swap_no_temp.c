#include <stdio.h>

int main(void)
{
    int a, b, temp;

    // Lire deux entiers depuis l'entrée standard
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    // Échange avec variable temporaire
    temp = a;
    a = b;
    b = temp;

    // Affichage du résultat comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

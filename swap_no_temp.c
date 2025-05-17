#include <stdio.h>

int main(void)
{
    int a, b;

    // Lire deux entiers depuis l'entrée standard
    if (scanf("%d %d", &a, &b) != 2) {
        // Vérification de la saisie
        printf("Erreur de saisie.\n");
        return 1;
    }

    // Échange des valeurs sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage du résultat comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

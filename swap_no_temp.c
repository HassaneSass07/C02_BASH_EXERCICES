#include <stdio.h>

int main(void)
{
    int a, b;

  // Échange des valeurs sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage du résultat comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int a, b;

    // Lecture des deux entiers sans message
    scanf("%d %d", &a, &b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage conforme à l’énoncé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int a, b;

    // Lecture de deux entiers sans message préalable
    scanf("%d %d", &a, &b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage exactement conforme à l'exemple
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

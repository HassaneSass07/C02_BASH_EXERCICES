#include <stdio.h>

int main(void)
{
    int a, b, temp;

    // Lecture de deux entiers sans message préalable
    scanf("%d %d", &a, &b);

    // Échange avec variable temporaire
    temp = a;
    a = b;
    b = temp;

    // Affichage conforme à l'exemple
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

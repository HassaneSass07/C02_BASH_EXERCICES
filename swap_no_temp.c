#include <stdio.h>

int main(void)
{
    int a, b;

    // Lecture de deux entiers sans message préalable
    scanf("%d %d", &a, &b);

    // Échange sans variable temporaire via multiplication et division
    a = a * b;
    b = a / b;  // b devient a (ancien)
    a = a / b;  // a devient b (ancien)

    // Affichage conforme à l'exemple
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

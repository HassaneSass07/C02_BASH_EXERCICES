#include <stdio.h>

int main(void)
{
    int a, b;

    // Lire deux entiers depuis l'entrée standard
    scanf("%d %d", &a, &b);
        
    // Échange des valeurs sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    b = a + b;

    // Affichage du résultat comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}

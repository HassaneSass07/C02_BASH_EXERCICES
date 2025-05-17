#include <stdio.h>

int main(void)
{
    int a, b;
    
    // Lecture des deux entiers sans message d’invite (comme dans l’exemple)
    if (scanf("%d %d", &a, &b) != 2)
        return 1;  // En cas d’erreur de saisie, quitter avec code erreur
    
    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Affichage strictement conforme à l'exemple donné
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}

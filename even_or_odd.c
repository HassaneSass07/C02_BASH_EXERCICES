#include <stdio.h>

int main(void) {
    int nombre;

    // Lecture d'un entier
    scanf("%d", &nombre);

    // Vérifie si le nombre est pair ou impair et affiche le résultat
    if (nombre % 2 == 0)
        printf("%d est un nombre pair.\n", nombre);
    else
        printf("%d est un nombre impair.\n", nombre);

    return 0;
}

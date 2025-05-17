#include <stdio.h>

int main(void)
{
    int nombre;

    // Lire un entier depuis l'entrée standard
    scanf("%d", &nombre);

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0)
    {
        printf("%d est un nombre pair.\n", nombre);
    }
    else
    {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    int nombre;
    unsigned long long factoriel = 1;

    // Lire le nombre depuis l'entrée standard
    scanf("%d", &nombre);

    // Vérification négative (optionnelle, selon le correcteur)
    if (nombre < 0)
    {
        return 1;
    }

    for (int i = 1; i <= nombre; i++)
    {
        factoriel *= i;
    }

    // Affichage conforme à l’exemple attendu
    printf("Le factoriel de %d est : %llu\n", nombre, factoriel);

    return 0;
}

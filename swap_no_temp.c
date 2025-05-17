#include <stdio.h>

int main(void)
{
    int a, b;

    // Lecture de deux entiers depuis l'entrée standard
    // scanf retourne le nombre d'éléments correctement lus
    if (scanf("%d %d", &a, &b) != 2) {
        // Si la lecture échoue (moins de 2 valeurs lues), afficher une erreur
        printf("Erreur de saisie.\n");
        return 1;  // Fin du programme avec code d'erreur 1
    }

    // Échange des valeurs de a et b sans utiliser de variable temporaire
    // Cette technique utilise des opérations arithmétiques simples
    a = a + b;  // a devient la somme des deux valeurs
    b = a - b;  // b devient l'ancienne valeur de a (a+b - b = a)
    a = a - b;  // a devient l'ancienne valeur de b (a+b - a = b)

    // Affichage du résultat, conforme à l'énoncé
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;  // Fin normale du programme
}

#include <stdio.h>  // Pour printf et scanf

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;  // Fin du programme
}

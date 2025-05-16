#include <stdio.h>  // Pour printf() et scanf()

// Fonction pour calculer la somme
int addition(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    int result;
    
    printf("Entrez deux entiers : ");
    
    // Vérifie que deux entiers ont bien été saisis
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Erreur : veuillez entrer deux nombres entiers valides.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    result = addition(a, b);

    printf("La somme est : %d\n", result);

    return 0;
}

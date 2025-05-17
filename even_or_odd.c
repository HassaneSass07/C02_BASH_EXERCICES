#include <stdio.h>

int main() {
    int nombre = 0;

    scanf("%d", &nombre); // lire entre de l'utilisateur 
// la condition qui permet de diviser par  2
    if ( nombre % 2 == 0 ) {
    
        printf("%d est pair.\n", nombre);
    } else {
        
        printf("%d est impair.\n", nombre);
    }
    return 0; 
}
// c'est un programme qui lit un nombre entier et affiche s'il est pair ou impair 
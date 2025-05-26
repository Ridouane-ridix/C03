#include <stdio.h>

// Fonction principale
int main() {
    int a, b, c; // Déclaration des trois entiers

    // Lecture des valeurs depuis l'entrée standard
    scanf("%d %d %d", &a, &b, &c);

    // Vérification du plus grand nombre
    if (a >= b && a >= c) {
        printf("Le plus grand nombre est : %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Le plus grand nombre est : %d\n", b);
    }
    else {
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0; // Fin du programme
}

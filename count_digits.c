#include <stdio.h>

int main() {

    int nombre;
    
    // Lecture du nombre (sans message d'invite)

    scanf("%d", &nombre);
    
    // Gestion spéciale pour 0

    if (nombre == 0) {

        printf("0 contient 1 chiffre(s).\n");
        return 0;
    }
    
    // Comptage des chiffres pour les nombres non nuls

    int compteur = 0;

    int temp = nombre;
    
    // On utilise une valeur absolue pour gérer les nombres négatifs
    if (temp < 0) {

        temp = -temp;
    }
    
    while (temp > 0) {

        temp = temp / 10;
        compteur++;
    }
    
    // Affichage du résultat selon le format demandé


    printf("%d contient %d chiffre (s).\n", nombre, compteur);
    
    return 0;
}
#include <stdio.h>

int main() {
    int nombre;
    
    // Lecture du nombre
      
    scanf("%d", &nombre);
    
    // Comptage des chiffres pour les nombres non nuls

    int compteur = 0;
    int temp = nombre;

    while (temp > 0) {
        temp = temp / 10;
        compteur++;
    }
    
    // Affichage du résultat*

    printf("%d contient %d chiffre(s).\n", nombre, compteur);
    
    return 0;
}
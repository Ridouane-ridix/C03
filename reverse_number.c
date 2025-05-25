#include <stdio.h>

int main() {

    int nombre, inverse = 0;
    
    // saisie du nombre

    scanf("%d", &nombre);
    
    // Inversion du nombre

    while (nombre != 0) {

        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }
    
    // Affichage du Formatage 
    
    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
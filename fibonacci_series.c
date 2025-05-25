#include <stdio.h>

int main() {
    
    int limite;
    
    // Lecture de la limite (pas de message d'invite)

    scanf("%d", &limite);
    
    // Affichage de la suite

    printf("Fibonacci :");
    
    if (limite >= 0) { //condition si limite = 0

        printf(" 0");
    }
    
    //generateur de la suite

    int a = 0, b = 1;

    while (b <= limite) {

        printf(" %d", b);

        int nouveau = a + b;
        a = b;

        b = nouveau;
    }
    
    printf("\n");
    return 0;
}
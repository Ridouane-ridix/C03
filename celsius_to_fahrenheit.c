#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    
    // Lecture de la température (sans message d'invite)
    scanf("%lf", &celsius);
    
    // Calcul de conversion
    fahrenheit = (celsius * 9.0/5.0) + 32.0;
    
    // Affichage formaté exactement comme dans l'exemple
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    
    return 0;
}
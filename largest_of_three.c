#include <stdio.h>
int main() { //debut du programme

    int a, b, c; //declaration des variables 

    scanf("%d %d %d", &a, &b, &c); //saisie des variable 

    if (a > b && a > c) { //Condition pour chercher le plus grand nombre entre les 3

        printf("Le plus grand nombre est : %d\n", a);

    } else if (b > a && b > c) {

        printf("Le  plus grand nombre est : &d\n", b);
        
    } else {

        printf("Le plus grand nombre est : %d\n", c);
    }
    return 0; // fin du programme
}
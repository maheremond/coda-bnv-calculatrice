#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Bienvenue dans la calculatrice !\n");
    int operateur;
    printf("Choisissez un opérateur (+, -, *, /, %%) :\n");
    scanf("%d", &operateur);
    int nb1;
    int nb2;
    printf("Entrez un nombre :\n");
    scanf("%d", &nb1);
    printf("Entrez un autre nombre :\n");
    scanf("%d", &nb2);
        if (operateur == '+') {
        printf("Résultat : %d\n", nb1 + nb2);
    } else if (operateur == '-') {
        printf("Résultat : %d\n", nb1 - nb2);
    } else if (operateur == '*') {
        printf("Résultat : %d\n", nb1 * nb2);
    } else if (operateur == '/') {
        if (nb2 != 0) {
            printf("Résultat : %.2f\n", (float)nb1 / nb2);
        } else {
            printf("Erreur : Division par zéro !\n");
            exit(1);
        }
    } else if (operateur == '%%') {
        printf("Résultat : %d\n", nb1 % nb2);
    } else {
        printf("Erreur : Opérateur inconnu !\n");
        exit(1);
    }
    exit(0);
}
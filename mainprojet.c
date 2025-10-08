#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Bienvenue dans la calculatrice !\n");

    char operateur;
    int nb1, nb2;

    printf("Choisissez un operateur (+, -, *, /, %%):\n");
    if (scanf(" %c", &operateur) != 1) { // espace avant %c pour consommer les sauts de ligne
        printf("Erreur : Lecture de l'operateur.\n");
        return 1;
    }

    printf("Entrez un nombre :\n");
    if (scanf("%d", &nb1) != 1) {
        printf("Erreur : Lecture du premier nombre.\n");
        return 1;
    }

    printf("Entrez un autre nombre :\n");
    if (scanf("%d", &nb2) != 1) {
        printf("Erreur : Lecture du second nombre.\n");
        return 1;
    }

    switch (operateur) {
        case '+':
            printf("Resultat : %d\n", nb1 + nb2);
            break;
        case '-':
            printf("Resultat : %d\n", nb1 - nb2);
            break;
        case '*':
            printf("Resultat : %d\n", nb1 * nb2);
            break;
        case '/':
            if (nb2 != 0) {
                printf("Resultat : %.2f\n", (float) nb1 / nb2);
            } else {
                printf("Erreur : Division par zero !\n");
                return 1;
            }
            break;
        case '%':
            if (nb2 != 0) {
                printf("Resultat : %d\n", nb1 % nb2);
            } else {
                printf("Erreur : Modulo par zero !\n");
                return 1;
            }
            break;
        default:
            printf("Erreur : Operateur inconnu !\n");
            return 1;
    }

    return 0;
}
#include <stdio.h>


/*
TODO:
    * Réaliser la méthode affichePanier() (problème dans la boucle)
*/

void debutCommande(), choixMenu(), choixBurger(), choixAccompagnement(), choixSauce(), choixBoisson(),validerPanier();


void affichePanier(int pInt[1]);

int main(void) {
    printf("Bienvenue a mcdo :)\n");

    printf("Voulez vous commander ? (o/n)");
    char reponse;
    scanf("%c", &reponse);
    if(reponse == 'o') {
        debutCommande();
    } else {
        printf("Vous n'avez pas commande\n");
    }

    return 0;
}


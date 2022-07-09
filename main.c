#include <stdio.h>

/*
TODO:
    * Optimisation du code à réaliser
    * Réaliser la méthode affichePanier() (problème dans la boucle)
*/

int debutCommande(), choixMenu(), choixBurger(), choixAccompagnement(), choixBoisson(), choixSauce(), validerPanier();

int panier[100];

void initPanier();


void affichePanier(int pInt[1], int i);

int main() {
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


void ajoutePanier(int menu, int burger, int accompagnement, int boisson, int sauce) {
    printf("Ajout du panier\n");
    // ajout des parametre au tyableau panier
    for (int i = 0; i < menu; i++) {
        panier[i] = menu;
    }

    affichePanier(panier, menu);


    printf("Panier ajoute\n");
}

void affichePanier(int pInt[1], int menu) {
    printf("Voici votre panier :\n");
    for (int i = 0; i < menu; i++) {
        printf("%d\n", pInt[i]);
    }

}


int debutCommande() {
    printf(  "=== Borne de commande ===\n"
            "1. Menu\n"
            "2. Accompagnement\n"
            "3. Boisson\n"
            "4. Sauce\n"
            "5. Valider le panier\n"
            "6. Quitter\n"
            "========================\n"  );
    int choix;
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            choixMenu();
            break;
        case 2:
            choixAccompagnement();
            break;
        case 3:
            choixBoisson();
            break;
        case 4:
            choixSauce();
            break;
        case 5:
            validerPanier();
            break;
        case 6:
            printf("Au revoir\n");
            break;
        default:
            printf("Choix invalide\n");
            break;
    }
return 0;
}

int choixMenu() {
    printf("=== Menu ===\n"
           "1. Happy Meal\n"
            "2. Best Of\n"
            "3. Maxi Best Of\n"
            "4. McFirst\n"
            "5. Maxi McFirst\n"
            "6. Signature \n"
            "7. Retour\n"
            "========================\n"
    );


    int choix;
    scanf("%d", &choix);
    switch (choix) {
        // Happy Meal
        case 1:
            choixBurger(1);
            break;
        // Best Of & Maxi Best Of
        case 2:
        case 3:
            choixBurger(2);
            break;
        // McFirst & Maxi McFirst
         case 4:
         case 5:
            choixBurger(4);
            break;
        // Signature
        case 6:
            choixBurger(6);
            break;

        default:
            printf("Vous avez choisi aucun menu, retour au menu principal\n");
            debutCommande();
            break;

    }


    return 0;
}

int choixBurger(int typeMenu) {
    int choix;
    int typeBurger;


    // Selon le type de menu, on affiche les burgers correspondants
    switch (typeMenu) {
        // Happy Meal
        case 1:
            printf("=== Burger ===\n"
                   "1. Cheeseburger\n"
                   "2. Retour \n");
            scanf("%d", &choix);
            switch (choix) {
                case 1:
                    printf("Vous avez choisi un cheeseburger\n");
                    typeBurger = 1;
                    break;

                case 2:
                    printf("Retour au menu principal\n");
                    debutCommande();
                    break;
                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            choixAccompagnement(typeMenu, typeBurger);

            break;
        // Best Of & Maxi Best Of
        case 2:
            printf("=== Burger ===\n"
             "1. Cheeseburger\n"
              "2. Double Cheeseburger\n"
              "3. Triple Cheeseburger\n"
              "4. CBO\n"
              "5. McWrap New-York\n"
              "6. McWrap Chevre\n"
              "7. Big Mac\n"
              "8. Big Tasty\n"
              "9. 280 Original\n"
              "10. Retour \n"
              "========================\n"
              );

            scanf("%d", &choix);
            switch (choix) {
                case 1:
                    printf("Vous avez choisi un cheeseburger\n");
                    typeBurger = 1;
                    break;
                case 2:
                    printf("Vous avez choisi un double cheeseburger\n");
                    typeBurger = 2;
                    break;
                case 3:
                    printf("Vous avez choisi un triple cheeseburger\n");
                    typeBurger = 3;
                    break;
                case 4:
                    printf("Vous avez choisi un CBO\n");
                    typeBurger = 4;
                    break;
                case 5:
                    printf("Vous avez choisi un McWrap New-York\n");
                    typeBurger = 5;
                    break;
                case 6:
                    printf("Vous avez choisi un McWrap Chevre\n");
                    typeBurger = 6;
                    break;
                case 7:
                    printf("Vous avez choisi un Big Mac\n");
                    typeBurger = 7;
                    break;
                case 8:
                    printf("Vous avez choisi un Big Tasty\n");
                    typeBurger = 8;
                    break;
                case 9:
                    printf("Vous avez choisi un 280 Original\n");
                    typeBurger = 9;
                    break;
                case 10:
                    printf("Vous avez choisi un retour au menu principal\n");
                    debutCommande();
                    break;
                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            choixAccompagnement(typeMenu, typeBurger);

        // McFirst & Maxi McFirst
        case 4:
        printf("=== Burger ===\n"
                  "1. McFirst Boeuf\n"
                  "2. McFirst Poulet\n"
                  "3. McFirst Poisson\n"
                  "4. Retour \n"
                  "========================\n"
                  );
            scanf("%d", &choix);
            switch (choix) {
                case 1:
                    printf("Vous avez choisi un McFirst Boeuf\n");
                    typeBurger = 1;
                    break;
                case 2:
                    printf("Vous avez choisi un McFirst Poulet\n");
                    typeBurger = 2;
                    break;
                case 3:
                    printf("Vous avez choisi un McFirst Poisson\n");
                    typeBurger = 3;
                    break;

                case 4:
                    printf("Retour au menu principal\n");
                    debutCommande();
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            choixAccompagnement(typeMenu, typeBurger);

            break;
        // Signature
        case 6:
            printf("=== Burger ===\n"
                   "1. BEEF BBQ\n"
                   "2. CHICKEN BBQ\n"
                   "3. BLUE CHEESE & BACON\n"
                   "4. Retour \n");
            scanf("%d", &choix);
            switch (choix) {
                case 1:
                    printf("Vous avez choisi un BEEF BBQ\n");
                    typeBurger = 1;
                    break;
                case 2:
                    printf("Vous avez choisi un CHICKEN BBQ\n");
                    typeBurger = 2;
                    break;
                case 3:
                    printf("Vous avez choisi un BLUE CHEESE & BACON\n");
                    typeBurger = 3;
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            choixAccompagnement(typeMenu, typeBurger);
            break;
        default:
            printf("Vous avez choisi aucun menu, retour au menu principal\n");
            debutCommande();
            break;
    }
    return 0;
}
int choixAccompagnement(int typeMenu, int typeBurger) {
    int typeAccompagnement;
    int choix;

    printf("=== Accompagnement ===\n"

           "1. Wavy Fries\n"
           "2. P'tite Salade\n"
           "3. Frite\n"
           "4. Retour\n"
           "========================\n"
    );

    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi les wavy fries\n");
            typeAccompagnement = 1;
            break;
        case 2:
            printf("Vous avez choisi la p'tite salade\n");
            typeAccompagnement = 2;
            break;
        case 3:
            printf("Vous avez choisi la frite\n");
            typeAccompagnement = 3;
            break;

        case 4:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucun accompagnement\n");
            int typeAccompagnement = 0;
            break;
    }
    choixSauce(typeMenu, typeBurger, typeAccompagnement);
    return 0;
}

int choixSauce(int typeMenu, int typeBurger, int typeAccompagnement) {
    int typeSauce;
    int choix;

    printf("=== Sauce ===\n"
           "1. Ketchup\n"
           "2. Mayonnaise\n"
           "3. Creamy Deluxe\n"
           "4. Barbecue\n"
           "5. Chinoise\n"
           "6. Curry\n"
           "7. Moutarde\n"
           "8. Retour\n"
           "========================\n"
    );

    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi le ketchup\n");
            typeSauce = 1;
            break;
        case 2:
            printf("Vous avez choisi la mayonnaise\n");
            typeSauce = 2;
            break;
        case 3:
            printf("Vous avez choisi la creamy deluxe\n");
            typeSauce = 3;
            break;
        case 4:
            printf("Vous avez choisi le barbecue\n");
            typeSauce = 4;
            break;
        case 5:
            printf("Vous avez choisi la chinoise\n");
            typeSauce = 5;
            break;
        case 6:
            printf("Vous avez choisi le curry\n");
            typeSauce = 6;
            break;
        case 7:
            printf("Vous avez choisi la moutarde\n");
            typeSauce = 7;
            break;
        case 8:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucune sauce\n");
            int typeSauce = 0;
            break;
    }
    choixBoisson(typeMenu, typeBurger, typeAccompagnement, typeSauce);
    return 0;
}
int choixBoisson(int typeMenu, int typeBurger, int typeAccompagnement, int typeSauce) {
    int typeBoisson;
    int choix;

    printf("=== Boisson ===\n"
                "1. Coca-Cola\n"
                "2. Coca-Cola Zero\n"
                "3. Ice-Tea\n"
                "4. Ice-Tea Green\n"
                "5. Fanta\n"
                "6. Eau\n"
                "7. Eau Petillante\n"
                "8. Retour\n"
                "========================\n"
        );

    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi la coca-cola\n");
            typeBoisson = 1;
            break;
        case 2:
            printf("Vous avez choisi la coca-cola zero\n");
            typeBoisson = 2;
            break;
        case 3:
            printf("Vous avez choisi l'ice-tea\n");
            typeBoisson = 3;
            break;
        case 4:
            printf("Vous avez choisi l'ice-tea green\n");
            typeBoisson = 4;
            break;
        case 5:
            printf("Vous avez choisi la fanta\n");
            typeBoisson = 5;
            break;
        case 6:
            printf("Vous avez choisi l'eau\n");
            typeBoisson = 6;
            break;
        case 7:
            printf("Vous avez choisi l'eau petillante\n");
            typeBoisson = 7;
            break;
        case 8:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucune boisson\n");
            int typeBoisson = 0;
            break;
    }

    ajoutePanier(typeMenu, typeBurger, typeAccompagnement, typeBoisson, typeSauce);

    validerPanier();
    return 0;

}





int validerPanier() {
    printf("Voulez vous valider votre panier ? (o/n)\n");
    char reponse;

    // On demande à l'utilisateur si il souhaite valider le panier sinon on le remet au début du programme
    scanf("%s", &reponse);
    if(reponse == 'o') {
        printf("Merci d'avoir commande !\n");

    }else {
        printf("Votre panier n'a pas ete valide\n");
        debutCommande();
        return 0;
    }

}

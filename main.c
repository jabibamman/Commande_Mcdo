#include <stdio.h>
#include <stdlib.h>


int debutCommande(), choixMenu(), choixBurger(), choixAccompagnement(), choixBoisson(), choixSauce(), validerPanier();

int main() {
    // Printf bienvenue à mcdo, il est tel heure
    time_t now;

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
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
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
                    break;
                case 2:
                    printf("Vous avez choisi un double cheeseburger\n");
                    break;
                case 3:
                    printf("Vous avez choisi un triple cheeseburger\n");
                    break;
                case 4:
                    printf("Vous avez choisi un CBO\n");
                    break;
                case 5:
                    printf("Vous avez choisi un McWrap New-York\n");
                    break;
                case 6:
                    printf("Vous avez choisi un McWrap Chevre\n");
                    break;
                case 7:
                    printf("Vous avez choisi un Big Mac\n");
                    break;
                case 8:
                    printf("Vous avez choisi un Big Tasty\n");
                    break;
                case 9:
                    printf("Vous avez choisi un 280 Original\n");
                    break;
                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            break;
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
                    break;
                case 2:
                    printf("Vous avez choisi un McFirst Poulet\n");
                    break;
                case 3:
                    printf("Vous avez choisi un McFirst Poisson\n");
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
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
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            break;
    }
    return 0;
}
int choixAccompagnement(){
    printf("=== Accompagnement ===\n");
    printf("1. Wavy Fries\n");
    printf("2. P'tite Salade\n");
    printf("3. Frite\n");
    printf("4. Retour\n");

    int choix;
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi les wavy fries\n");
            break;
        case 2:
            printf("Vous avez choisi la p'tite salade\n");
            break;
        case 3:
            printf("Vous avez choisi la frite\n");
            break;
        default:
            printf("Vous avez choisi aucun accompagnement\n");
            break;
    }
    return 0;
}

int choixSauce() {
    printf("=== Sauce ===\n");
    printf("1. Ketchup\n");
    printf("2. Mayonnaise\n");
    printf("3. Creamy Deluxe\n");
    printf("4. Barbecue\n");
    printf("5. Chinoise\n");
    printf("6. Curry\n");
    printf("7. Moutarde\n");
    printf("8. Retour\n");

    int choix;
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi le ketchup\n");
            break;
        case 2:
            printf("Vous avez choisi la mayonnaise\n");
            break;
        case 3:
            printf("Vous avez choisi la creamy deluxe\n");
            break;
        case 4:
            printf("Vous avez choisi le barbecue\n");
            break;
        case 5:
            printf("Vous avez choisi la chinoise\n");
            break;
        case 6:
            printf("Vous avez choisi le curry\n");
            break;
        case 7:
            printf("Vous avez choisi la moutarde\n");
            break;
        default:
            printf("Vous avez choisi aucune sauce\n");
            break;
    }
    return 0;
}
int choixBoisson(){
    printf("=== Boisson ===\n");
    printf("1. Coca-Cola\n");
    printf("2. Coca-Cola Zero\n");
    printf("3. Ice-Tea\n");
    printf("4. Ice-Tea Green\n");
    printf("5. Fanta\n");
    printf("6. Eau\n");
    printf("7. Eau Petillante\n");
    printf("8. Retour\n");

    int choix;
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi la coca-cola\n");
            break;
        case 2:
            printf("Vous avez choisi la coca-cola zero\n");
            break;
        case 3:
            printf("Vous avez choisi l'ice-tea\n");
            break;
        case 4:
            printf("Vous avez choisi l'ice-tea green\n");
            break;
        case 5:
            printf("Vous avez choisi la fanta\n");
            break;
        case 6:
            printf("Vous avez choisi l'eau\n");
            break;
        case 7:
            printf("Vous avez choisi l'eau petillante\n");
            break;
        default:
            printf("Vous avez choisi aucune boisson\n");
            break;

    }
    return 0;
}

int validerPanier() {
    printf("Voulez vous valider votre panier ? (o/n)\n");
    char reponse;
    scanf("%c", &reponse);
    if(reponse == 'o') {
        printf("Votre panier a ete valide\n");
    } else {
        printf("Vous n'avez pas valide votre panier, voulez vous commander un deuxième menu ?\n");
        scanf("%c", &reponse);
        if(reponse == 'o') {
            choixMenu();
        } else {
            printf("Panier Annule\n");
        }
    }
}
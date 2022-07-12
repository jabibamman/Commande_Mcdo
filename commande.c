#include <stdio.h>

void debutCommande(), choixMenu(), choixBurger(), choixAccompagnement(), choixSauce(), choixBoisson(), initPanier(), validerPanier();

int panier[100];

int *ptrMenu, *ptrBurger, *ptrAccompagnement, *ptrSauce, *ptrBoisson;


void affichePanier(int[]);

void ajoutePanier() {
    printf("Ajout du panier\n");
    printf("Vous avez commmandez : %d Menu, %d Burger, %d Accompagnement, %d Sauce, %d Boisson\n", *ptrMenu, *ptrBurger, *ptrAccompagnement, *ptrSauce, *ptrBoisson);

    // ajout des parametre au tableau panier
    for (int i = 0; i < *ptrMenu; i++) {
        panier[i] = *ptrMenu;
    }


  affichePanier(panier);


    printf("Panier ajoute\n");
}

void affichePanier(int pInt[1]) {
    printf("Voici votre panier :\n");
    for (int i = 0; i < *ptrMenu; i++) {
        panier[i] = *ptrMenu;
        printf("%d\n", *ptrMenu);
    }

}

void debutCommande() {

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

void choixMenu() {
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



    // scanf pointeur sur le menu
    int choix;
    scanf("%d", &choix);

    ptrMenu = &choix;

    // pointeur sur menu


    switch (*ptrMenu) {
        // Happy Meal
        case 1:
        // Best Of & Maxi Best Of
        case 2:
        case 3:
        // McFirst & Maxi McFirst
        case 4:
        case 5:
        // Signature
        case 6:
            break;

        default:
            printf("Vous avez choisi aucun menu, retour au menu principal\n");
            debutCommande();
            break;

    }


    // Choix du burger selon le menu choisi
    choixBurger();
}

void choixBurger() {

    // printf du pointeur
    printf("Vous avez choisi le menu %d\n", *ptrMenu);

    // Selon le type de menu, on affiche les burgers correspondants
    switch (*ptrMenu) {
        int choix;

        // Happy Meal
        case 1:
            printf("=== Burger ===\n"
                   "1. Cheeseburger\n"
                   "2. Retour \n");


            scanf("%d", &choix);

            ptrBurger = &choix;


            switch (*ptrBurger) {
                case 1:
                    printf("Vous avez choisi un cheeseburger\n");
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

            break;

        // Best Of & Maxi Best Of
        case 2: case 3:
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

            ptrBurger = &choix;

            switch (*ptrBurger) {
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
        case 4: case 5:
            printf("=== Burger ===\n"
                   "1. McFirst Boeuf\n"
                   "2. McFirst Poulet\n"
                   "3. McFirst Poisson\n"
                   "4. Retour \n"
                   "========================\n"
            );
            scanf("%d", &choix);
            ptrBurger = &choix;

            switch (*ptrBurger) {
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
                    printf("Retour au menu principal\n");
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
            ptrBurger = &choix;

            switch (*ptrBurger) {
                case 1:
                    printf("Vous avez choisi un BEEF BBQ\n");
                    
                    break;
                case 2:
                    printf("Vous avez choisi un CHICKEN BBQ\n");
                    
                    break;
                case 3:
                    printf("Vous avez choisi un BLUE CHEESE & BACON\n");
                    
                    break;

                default:
                    printf("Vous avez choisi aucun burger, retour au menu principal\n");
                    debutCommande();
                    break;
            }
            break;
        default:
            printf("Vous avez choisi aucun menu, retour au menu principal\n");
            debutCommande();
            break;
    }
    choixAccompagnement();

}

void choixAccompagnement() {
    int choix;
    ptrAccompagnement = &choix;

    printf("=== Accompagnement ===\n"

           "1. Wavy Fries\n"
           "2. P'tite Salade\n"
           "3. Frite\n"
           "4. Retour\n"
           "========================\n"
    );

    scanf("%d", &choix);
    switch (*ptrAccompagnement) {
        case 1:
            printf("Vous avez choisi les wavy fries\n");
            break;
        case 2:
            printf("Vous avez choisi la p'tite salade\n");
            break;
        case 3:
            printf("Vous avez choisi la frite\n");
            break;

        case 4:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucun accompagnement\n");
            break;
    }
    choixSauce();
}

void choixSauce() {
    int choix;
    ptrSauce = &choix;

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
        case 8:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucune sauce\n");
            break;
    }
    choixBoisson();
}
void choixBoisson() {
    int choix;
    ptrBoisson = &choix;

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
        case 8:
            printf("Retour au menu principal\n");
            debutCommande();
            break;
        default:
            printf("Vous avez choisi aucune boisson\n");
            break;
    }

    ajoutePanier();

    validerPanier();

}


void validerPanier() {
    printf("Voulez vous valider votre panier ? (o/n)\n");
    char reponse;

    // On demande à l'utilisateur si il souhaite valider le panier sinon on le remet au début du programme
    scanf("%s", &reponse);
    if(reponse == 'o') {
        printf("Merci d'avoir commande !\n");
    }else {
        printf("Votre panier n'a pas ete valide, vous pouvez continuer vos achats\n");
        debutCommande();

    }
}


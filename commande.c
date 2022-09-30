#include <stdio.h>
#include <string.h>
#include <malloc.h>

//#define foreach(item, array) \
//    for(int keep = 1, \
//            count = 0,\
//            size = sizeof (array) / sizeof *(array); \
//        keep && count != size; \
//        keep = !keep, count++) \
//      for(item = (array) + count; keep; keep = !keep)
//foreach(int *i, arr) {
//printf("%d\n", *i);
//}
// TODO: include json-c/json.h
//  creer le makefile
//  réussir à utiliser le json-c

struct Menu {
    int type;
    int burger;
    char accompagnement[20];
    char sauce[20];
    char boisson[20];
};

typedef struct Menu Menu;

// setter
void set_type(Menu *menu, int type) {
    menu->type = type;
}

void set_burger(Menu *menu, int burger) {
    menu->burger = burger;
}

void set_accompagnement(Menu *menu, char *accompagnement) {
    strcpy(menu->accompagnement, accompagnement);
}

void set_sauce(Menu *menu, char *sauce) {
    strcpy(menu->sauce, sauce);
}

void set_boisson(Menu *menu, char *boisson) {
    strcpy(menu->boisson, boisson);
}

// Afficher le menu
void afficher_menu(struct Menu *menu) {
    printf("====================================");
    printf("Menu %d\n", menu->type);
    printf("Burger : %d\n", menu->burger);
    printf("Accompagnement : %s\n", menu->accompagnement);
    printf("Sauce : %s\n", menu->sauce);
    printf("Boisson : %s\n", menu->boisson);
    printf("====================================");

}

void debutCommande(), choixMenu(), choixBurger(), choixAccompagnement(), choixSauce(), choixBoisson(), validerPanier();

int panier[100][100];

int *ptrMenu, *ptrBurger, *ptrAccompagnement, *ptrSauce, *ptrBoisson;
int id = 0;
struct Menu menu;

void affichePanier(int[]);

/**
 * @brief ajoutePanier
 * @param pInt
 * @return
 * Ajoute au panier le menu, le burger, l'accompagnement, la sauce et la boisson
 */
void ajoutePanier() {
    printf("Ajout du panier\n");
    printf("Vous avez commmandez : %d Menu, %d Burger, %d Accompagnement, %d Sauce, %d Boisson\n", *ptrMenu, *ptrBurger, *ptrAccompagnement, *ptrSauce, *ptrBoisson);

    // ajouter le menu, le burger, l'accompagnement, la sauce et la boisson au tableau panier
    panier[0][0] = *ptrMenu;
    panier[0][1] = *ptrBurger;
    panier[0][2] = *ptrAccompagnement;
    panier[0][3] = *ptrSauce;
    panier[0][4] = *ptrBoisson;


    // Boucle affichant tout le tableau
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            printf("%d ", panier[i][j]);
        }
        printf("\n");
    }

    printf("Panier ajoute\n");
}

/**
 * @brief affichePanier
 * @param pInt
 * @return
 * Affiche le panier
 */
void affichePanier(int pInt[100]) {

}

/**
 * @brief debutCommande
 * @return
 * Permet de commmander
 */
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
            // TODO : Créer un nouveau struct pour chaque id++
            id++;
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

/**
 * @brief choixMenu
 * @return
 * Permet de choisir le menu
 */
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

    set_type(&menu, choix);

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

/**
 * @brief choixBurger
 * @return
 * Permet de choisir le burger
 */
void choixBurger() {

    // printf du pointeur
    printf("Vous avez choisi le menu %d\n", *ptrMenu);

    // Selon le type de menu, on affiche les burgers correspondants
    switch (menu.type) {
        int choix;

        // Happy Meal
        case 1:
            printf("=== Burger ===\n"
                   "1. Cheeseburger\n"
                   "2. Retour \n");


            scanf("%d", &choix);

            ptrBurger = &choix;
            set_burger(&menu, choix);


            switch (menu.burger) {
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

            set_burger(&menu,  choix);

            switch (menu.burger) {
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

            set_burger(&menu, choix);

            switch (menu.burger) {
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
            set_burger(&menu, choix);

            switch (menu.burger) {
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

/**
 * @brief choixAccompagnement
 * @return
 * Permet de choisir l'accompagnement
 */
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

/**
 * @brief choixSauce
 * @return
 * Permet de choisir la sauce
 */
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

/**
 * @brief choixBoisson
 * @return
 * Permet de choisir la boisson
 */
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

/**
 * @brief validerPanier
 * @return
 * Permet de valider le panier
 */
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


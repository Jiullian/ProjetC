#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#define HAUTEUR 24
#define LARGEUR 64
 
int menu();
 //La fonction is_valid permet de savoir si le joueur rencontre une case disponible pour le déplacement ou un mur
int is_valid(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
    return (grille[y][x] != '#');
}
 
 //La fonction is_finish permet de savoir si le joueur se situe sur la case de sortie : 'X'
int is_finish(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
    return (grille[y][x] == 'X');
}
 
int niveau1() {
    char grille[HAUTEUR][LARGEUR] = {
    "################################",
    "#          # #   #             #",
    "######## # # # ###  #####    ###",
    "#                              #",
    "# ######## ####### ######## #  #",
    "#  #  #    #    # #  #      #  #",
    "# ## # ########### ###### ######",
    "#     #                #       #",
    "##############################X#"};
 
//Pour chaque niveau les valeurs insérées dans x et y représentent le point d'apparition (les coordonnées) du joueur dans le niveau
    int x = 1, y = 1;
 
    int move_x, move_y;
 
    initscr();
    noecho();
    cbreak();
 
    do {
        clear();
 
        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
        }
 
        mvprintw(y, x, "@");
        mvprintw(y, x, "");
        refresh();
 
        move_x = x; move_y = y;
//le switch permet de déplacer le joueur à travers la carte
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
        }
 
        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));
 
    refresh();
    clrtoeol();
    refresh();
    endwin();
//retour au menu 
    menu();
}
 
int niveau2() {
    char grille[HAUTEUR][LARGEUR] = {
    "############################################",
    "# ###  #    ###    ####  ######  # ##### ###",
    "#          #  #   #### ##### ######   ### ##",
    "#########   #   ########  ###### #     #####",
    "###    ####                     ############",
    "############################## ######  #####",
    "# ## # #### ###   ### ####     ######    ###",
    "##  ########               ##########    ###",
    "#####        ###############################",
    "############ ###   ####    ####           ##",
    "## ##    ### ### # #    ##  ##   ######## ##",
    "###########      #       #       #         #",
    "##########################################X#"};
 
 //  Pour chaque niveau les valeurs inserees dans x et y representent le point d'apparition (les coordonnees) du joueur dans le niveau
    int x = 1, y = 1;
 
    int move_x, move_y;
 
    initscr();
    noecho();
    cbreak();
 
    do {
        clear();
 
        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
        }
 
        mvprintw(y, x, "@");
        mvprintw(y, x, "");
        refresh();
 
        move_x = x; move_y = y;
//le switch permet de deplacer le joueur e travers la carte
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
 
        };
 
        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));
 
    refresh();
    clrtoeol();
    refresh();
    endwin();
//retour au menu 
    menu();
}
 
int niveau3() {
    char grille[HAUTEUR][LARGEUR] = {
    "################################################################",
    "# ###  #    ###########  #### #  # ##### #         ##    #######",
    "#          #  #   #### #####  #####   ###  ###### ### ##     ###",
    "### #####   #   ########  ### ## ###       ###### ### ###### ###",
    "###               #                  ############ ### ###### ###",
    "#    # #### ###   ### ####     ################## ### ###### ###",
    "## ######### ###        ##  ##   ################ ### ###### ###",
    "##         ###########                     ######     ##     ###",
    "# ####### #          ## ###### ########## ############## ##### #",
    "##     ## # ## ########  ###   ##########              #     ###",
    "#  ### ## # ## #       #     ############ ############ ##### ###",
    "# ####    # ## ############# ###  #######       ######       ###",
    "# #   ##### ##    ######## #  ###############  ####### #########",
    "# # # # # # ##### ###  ##### ########         ######## #########",
    "#   #       #   # ########## #########  ############## ######  #",
    "############# #   ##########    ######                     #####",
    "############# ############# ##          ##### ###### # #########",
    "########      ##                ###### ###### #        ######## ",
    "######## ###  #   ######## ######      ###### #### ### #########",
    "##  #### ###  #       ########### ####      #                  #",
    "######## ############             #    ####################### #",
    "######## #          ############################################",
    "########   ########                                            #",
    "##############################################################X#"};
 
 
    int x = 1, y = 1;
 
    int move_x, move_y;
 
    initscr();
    noecho();
    cbreak();
 
    do {
        clear();
 
        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
        }
 
        mvprintw(y, x, "@");
        mvprintw(y, x, "");
        refresh();
 
        move_x = x; move_y = y;
 //le switch permet de deplacer le joueur a travers la carte
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
        }
 
        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));
 
    refresh();
    clrtoeol();
    refresh();
    endwin();
//retour au menu 
    menu();
}
 
int menu(){
//Permet d'effacer la console ou "l'ecran de sortie"
    system("clear");
    int choixniveau = 0;
//Le joueur choisit son niveau et donc la difficulte
    printf("Choisissez un niveau :\n");
    printf("NIVEAU 1 (Facile)                     : 1\n");
    printf("NIVEAU 2 (Moyen)                      : 2\n");
    printf("NIVEAU 3 (Difficile)                  : 3\n");
    scanf("%d",&choixniveau);
    if(choixniveau==1){
        niveau1();
    }
    if(choixniveau==2){
        niveau2();
    }
    if(choixniveau==3){
        niveau3();
    }
}
 
int main(){
    //Lancement du jeu
        int start;
        printf("Bienvenue sur le meilleur jeu en Langage C !\n");
        printf("MENU \n");
        printf("----------------------------- \n");
    //Les choix possibles du joueur
        printf("COMMENCER -1 \n");
        printf("QUITTER -2 \n");
        printf("----------------------------- \n");
        printf("Votre choix : \n");
    //Choix du joueur :
        scanf("%d",&start);
    //On utilise un switch afin de lancer le jeu ou le quitter
        switch(start){
            case 1 :
                menu();
                break;
                
            case 2 :
                printf("Au revoir ... \n");
                exit(EXIT_SUCCESS);
                break;
        }
}
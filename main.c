#include <stdio.h>
#include <stdlib.h>
void clearScreen() {
    system("cls");
}
int main()
{   int MAX = 9;
    int MIN = 1;
    int go;
    int partie;
    srand(time(NULL));
    int ins [3][3] = {1,2,3,4,5,6,7,8,9};
        printf(" \n \n=== REGLES ===\n \n");
        printf("\n %d | %d | %d \n------------\n %d | %d | %d \n------------\n %d | %d | %d \n \n ",
               ins [0][0], ins [0][1], ins [0][2],
               ins [1][0], ins [1][1], ins [1][2],
               ins [2][0], ins [2][1], ins [2][2]
               );
        printf("\n Saisir le nombre de la case pour saisir votre choix \n");
        printf ("\n Pour commencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        char nom[100], nom2 [100];
        if(go==1){
            printf ("\n Quel est le nom du joueur 1 \n");
            scanf("%s", nom);
            printf ("\n Quel est le nom du joueur 2 \n");
            scanf("%s", nom2);
        }
        while (go ==1)
        {
        printf("\n \n === MENU ===\n\n");
        printf("\n Choisissez un mode de jeu : \n");
        printf("\n ----------------------- \n");
        printf("\n 1. Mode solo\n");
        printf("\n 2. Mode multijoueur \n");
    /* intialisation des cases */
    char jeu [3][3] = {'.','.','.','.','.','.','.','.','.'};

   /*intialisatinoon choix du joueur*/
    int choix = 0;

    /*initialisation joueur, si joueur=1 : c'est au tour du joueur 1, si joueur=2 c'est au joueur*/
    int joueur = 1;

    int modedejeu;
    int niv;
    do
    {
        printf ("\n Quel est votre choix ? : \n");
        scanf ("%d", &modedejeu);
    }while(modedejeu < 1 || modedejeu > 2);
    clearScreen();
    switch(modedejeu)
    {
    case 1:
    do {
    printf("Choisissez un niveau de difficulte : \n");
                    printf("1. Un bot de niveau 1 \n");
                    printf("2. Un bot de niveau 2 \n");
                    printf("2. Un bot de niveau 3 \n");

                    scanf("%d", &niv);

    }while(niv < 1 || niv > 3);
    /* bot qui joue complètement aléatoirement */
    switch(niv){
        case 1:
        while(niv==1){
        printf("\n C'est au tour du joueur %s \n", nom);
        if(joueur==1){
        scanf("%d",&choix);
        }
        else {

            choix =(rand() % (MAX - MIN + 1)) + MIN;
        }
switch (choix)
{
    case 1:
        if(joueur==1){
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");

            }
        }
        else
        {
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else
            {
                 clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");

            }
        }
    break;
    case 2:
        if(joueur==1)
        {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' )
            {
                jeu[0][1] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' ) {
                jeu[0][1] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 3:
        if(joueur==1){
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
             clearScreen();
            printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 4:
        if(joueur==1){
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 5:
        if(joueur==1){
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 6:
        if(joueur==1){
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 7:
        if(joueur==1){
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'X';
                joueur = 2;
                 clearScreen();
            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'O';
                joueur = 1;
                 clearScreen();
            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 8:
        if(joueur==1){
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'X';
                joueur = 2;
                 clearScreen();

            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'O';
                joueur = 1;
                 clearScreen();

            }
             else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 9:
        if(joueur==1){
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'X';
                joueur = 2;
                 clearScreen();

            }
            else {
                     clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'O';
                joueur = 1;
                 clearScreen();
            }
             else {
                     clearScreen();
                printf("\n \n Erreur, il y a deja une valeur \n");
            }

        }
    break;
    default:
         clearScreen();
         printf("\n La valeur saisie est eronee veuiller recommencer \n");
    break;
}

printf("Modele \n");
printf("\n %d | %d | %d \n------------\n %d | %d | %d \n------------\n %d | %d | %d \n \n",
ins [0][0], ins [0][1], ins [0][2],
ins [1][0], ins [1][1], ins [1][2],
ins [2][0], ins [2][1], ins [2][2]
);
 printf("\n Saisir le nombre de la case pour saisir votre choix \n");
printf(" %c | %c | %c \n------------\n %c | %c | %c \n------------\n %c | %c | %c \n",
jeu [0][0], jeu [0][1], jeu [0][2],
jeu [1][0], jeu [1][1], jeu [1][2],
jeu [2][0], jeu [2][1], jeu [2][2]
);
    if (jeu [0][0]=='X' && jeu [0][1]=='X' && jeu [0][2]=='X' ||
    jeu [1][0]=='X' && jeu [1][1]=='X' && jeu [1][2]=='X' ||
    jeu [2][0]=='X' && jeu [2][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][0]=='X' && jeu [2][0]=='X' ||
    jeu [0][1]=='X' && jeu [1][1]=='X' && jeu [2][1]=='X' ||
    jeu [0][2]=='X' && jeu [1][2]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][2]=='X' && jeu [1][1]=='X' && jeu [2][0]=='X')
    {
        printf("\n Le joueur 1 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';

    }
    else if (  jeu [0][0]=='O' && jeu [0][1]=='O' && jeu [0][2]=='O' ||
    jeu [1][0]=='O' && jeu [1][1]=='O' && jeu [1][2]=='O' ||
    jeu [2][0]=='O' && jeu [2][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][0]=='O' && jeu [2][0]=='O' ||
    jeu [0][1]=='O' && jeu [1][1]=='O' && jeu [2][1]=='O' ||
    jeu [0][2]=='O' && jeu [1][2]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][2]=='O' && jeu [1][1]=='O' && jeu [2][0]=='O' )
    {
        printf("\n Le joueur 2 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
    else if (jeu [0][0]!='.' && jeu [0][1]!='.' && jeu [0][2]!='.' &&
    jeu [1][0]!='.' && jeu [1][1]!='.' && jeu [1][2]!='.' &&
    jeu [2][0]!='.' && jeu [2][1]!='.' && jeu [2][2]!='.')
    {
        printf("\n Match nul ! \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
}
    }
    case 2:
    /*bot qui bloque quand 2 croix sont alignées, un peu plus intelligent */
       while(niv==2){
        printf("\n C'est au tour du joueur %s \n", nom);
        if(joueur==1){
        scanf("%d",&choix);
        }
        else {
            if (jeu [0][0]=='.' && jeu [0][1]=='X' &&  jeu [0][2]=='X'||
                jeu [0][0]=='.' && jeu [1][0]=='X' &&  jeu [2][0]=='X' ||
                jeu [0][0]=='.' && jeu [1][1]=='X' &&  jeu [2][2]=='X'
                )
                {

                    choix =1;

                }
            else if (jeu [0][0]=='X' && jeu [0][1]=='.' &&  jeu [0][2]=='X'
                || jeu [0][1]=='.' && jeu [1][1]=='X' &&  jeu [2][1]=='X'
                )
                {

                    choix =2;

                }
            else if (jeu [0][0]=='X' && jeu [0][1]=='X' &&  jeu [0][2]=='.'
                || jeu [0][2]=='.' && jeu [1][2]=='X' &&  jeu [2][2]=='X'
                || jeu [0][2]=='.' && jeu [1][1]=='X' &&  jeu [2][0]=='X'
                )
                {

                    choix =3;

                }
            else if (jeu [1][0]=='.' && jeu [0][0]=='X' &&  jeu [2][0]=='X'
                || jeu [1][0]=='.' && jeu [1][1]=='X' &&  jeu [1][2]=='X'
                )
                {

                    choix =4;
                }
            else if (jeu [0][0]=='X' && jeu [1][1]=='.' &&  jeu [2][2]=='X'
                || jeu [0][2]=='X' && jeu [1][1]=='.' &&  jeu [2][0]=='X'
                || jeu [1][0]=='X' && jeu [1][1]=='.' &&  jeu [1][2]=='X'
                || jeu [0][1]=='X' && jeu [1][1]=='.' &&  jeu [2][1]=='X'
                )
            {

                    choix =5;

            }
            else if (jeu [1][0]=='X' && jeu [1][1]=='X' &&  jeu [1][2]=='.'
                || jeu [0][2]=='X' && jeu [1][2]=='.' &&  jeu [2][2]=='X'
                )
                {

                    choix =6;

                }
            else if (jeu [0][0]=='X' && jeu [1][0]=='X' &&  jeu [2][0]=='.'
                || jeu [2][0]=='.' && jeu [2][1]=='X' &&  jeu [2][2]=='X'
                || jeu [2][0]=='.' && jeu [1][1]=='X' &&  jeu [0][2]=='X'
                )
                {

                    choix =7;

                }
            else if (jeu [0][1]=='X' && jeu [1][1]=='X' &&  jeu [2][1]=='.'
                || jeu [2][0]=='X' && jeu [2][1]=='.' &&  jeu [2][2]=='X'
                )
                {

                    choix =8;

                }
            else if (jeu [2][0]=='X' && jeu [2][1]=='X' &&  jeu [2][2]=='.'
                || jeu [0][2]=='X' && jeu [1][2]=='X' &&  jeu [2][2]=='.'
                || jeu [0][0]=='X' && jeu [1][1]=='X' &&  jeu [2][2]=='.'

                )
            {
                    choix =9;
            }
            else {
                choix =(rand() % (MAX - MIN + 1)) + MIN;

            }
        }
    switch (choix)
    {
    case 1:
        if(joueur==1){
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else
        {
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else
            {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 2:
        if(joueur==1)
        {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' )
            {
                jeu[0][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' ) {
                jeu[0][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 3:
        if(joueur==1){
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 4:
        if(joueur==1){
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
                clearScreen();
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'O';
                joueur = 1;
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 5:
        if(joueur==1){
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 6:
        if(joueur==1){
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 7:
        if(joueur==1){
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 8:
        if(joueur==1){
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'O';
                joueur = 1;
                clearScreen();

            }
             else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 9:
        if(joueur==1){
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'O';
                joueur = 1;
                clearScreen();
            }
             else {
                clearScreen();
                printf("\n \n Erreur, il y a deja une valeur \n");
            }

        }
    break;
    default:
         clearScreen();
         printf("\n La valeur saisie est eronee veuiller recommencer \n");
    break;
    }

printf("Modele \n");
printf("\n %d | %d | %d \n------------\n %d | %d | %d \n------------\n %d | %d | %d \n \n",
ins [0][0], ins [0][1], ins [0][2],
ins [1][0], ins [1][1], ins [1][2],
ins [2][0], ins [2][1], ins [2][2]
);
printf(" %c | %c | %c \n------------\n %c | %c | %c \n------------\n %c | %c | %c \n",
jeu [0][0], jeu [0][1], jeu [0][2],
jeu [1][0], jeu [1][1], jeu [1][2],
jeu [2][0], jeu [2][1], jeu [2][2]
);
    if (jeu [0][0]=='X' && jeu [0][1]=='X' && jeu [0][2]=='X' ||
    jeu [1][0]=='X' && jeu [1][1]=='X' && jeu [1][2]=='X' ||
    jeu [2][0]=='X' && jeu [2][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][0]=='X' && jeu [2][0]=='X' ||
    jeu [0][1]=='X' && jeu [1][1]=='X' && jeu [2][1]=='X' ||
    jeu [0][2]=='X' && jeu [1][2]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][2]=='X' && jeu [1][1]=='X' && jeu [2][0]=='X')
    {
        printf("\n Le joueur 1 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';

    }
    else if (  jeu [0][0]=='O' && jeu [0][1]=='O' && jeu [0][2]=='O' ||
    jeu [1][0]=='O' && jeu [1][1]=='O' && jeu [1][2]=='O' ||
    jeu [2][0]=='O' && jeu [2][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][0]=='O' && jeu [2][0]=='O' ||
    jeu [0][1]=='O' && jeu [1][1]=='O' && jeu [2][1]=='O' ||
    jeu [0][2]=='O' && jeu [1][2]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][2]=='O' && jeu [1][1]=='O' && jeu [2][0]=='O' )
    {
        printf("\n Le joueur 2 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
    else if (jeu [0][0]!='.' && jeu [0][1]!='.' && jeu [0][2]!='.' &&
    jeu [1][0]!='.' && jeu [1][1]!='.' && jeu [1][2]!='.' &&
    jeu [2][0]!='.' && jeu [2][1]!='.' && jeu [2][2]!='.')
    {
        printf("\n Match nul ! \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';

    }
}
  /* un bot qui essaye de gagner  */
  while(niv==3){
        printf("\n C'est au tour du joueur %s \n", nom);
        if(joueur==1){
        scanf("%d",&choix);
        }
        else {
            if (
                jeu [0][0]=='.' && jeu [0][1]=='X' &&  jeu [0][2]=='X'||
                jeu [0][0]=='.' && jeu [1][0]=='X' &&  jeu [2][0]=='X' ||
                jeu [0][0]=='.' && jeu [1][1]=='X' &&  jeu [2][2]=='X'||
                jeu [0][0]=='.' && jeu [0][1]=='O' &&  jeu [0][2]=='O'||
                jeu [0][0]=='.' && jeu [1][0]=='O' &&  jeu [2][0]=='O' ||
                jeu [0][0]=='.' && jeu [1][1]=='O' &&  jeu [2][2]=='O'
                )
            {

                choix =1;

            }
            else if (

                    jeu [0][0]=='X' && jeu [0][1]=='.' &&  jeu [0][2]=='X'||
                    jeu [0][1]=='.' && jeu [1][1]=='X' &&  jeu [2][1]=='X'||
                    jeu [0][0]=='O' && jeu [0][1]=='.' &&  jeu [0][2]=='O'||
                    jeu [0][1]=='.' && jeu [1][1]=='0' &&  jeu [2][1]=='0'

                )
            {

                 choix =2;

            }
            else if (

                 jeu [0][0]=='X' && jeu [0][1]=='X' &&  jeu [0][2]=='.'
                || jeu [0][2]=='.' && jeu [1][2]=='X' &&  jeu [2][2]=='X'
                || jeu [0][2]=='.' && jeu [1][1]=='X' &&  jeu [2][0]=='X'
                 ||jeu [0][0]=='O' && jeu [0][1]=='O' &&  jeu [0][2]=='.'
                || jeu [0][2]=='.' && jeu [1][2]=='O' &&  jeu [2][2]=='O'
                || jeu [0][2]=='.' && jeu [1][1]=='O' &&  jeu [2][0]=='O' )
            {

                choix =3;

            }
            else if (

                 jeu [1][0]=='.' && jeu [0][0]=='X' &&  jeu [2][0]=='X'
                || jeu [1][0]=='.' && jeu [1][1]=='X' &&  jeu [1][2]=='X'
                || jeu [1][0]=='.' && jeu [0][0]=='O' &&  jeu [2][0]=='O'
                || jeu [1][0]=='.' && jeu [1][1]=='O' &&  jeu [1][2]=='O'
                )
            {

                choix =4;
            }
            else if (
                jeu [0][0]=='X' && jeu [1][1]=='.' &&  jeu [2][2]=='X'
                || jeu [0][2]=='X' && jeu [1][1]=='.' &&  jeu [2][0]=='X'
                || jeu [1][0]=='X' && jeu [1][1]=='.' &&  jeu [1][2]=='X'
                || jeu [0][1]=='X' && jeu [1][1]=='.' &&  jeu [2][1]=='X'
                || jeu [0][0]=='O' && jeu [1][1]=='.' &&  jeu [2][2]=='O'
                || jeu [0][2]=='O' && jeu [1][1]=='.' &&  jeu [2][0]=='O'
                || jeu [1][0]=='O' && jeu [1][1]=='.' &&  jeu [1][2]=='O'
                || jeu [0][1]=='O' && jeu [1][1]=='.' &&  jeu [2][1]=='O'


                )
            {

                    choix =5;

            }
            else if (


                 jeu [1][0]=='X' && jeu [1][1]=='X' &&  jeu [1][2]=='.'
                || jeu [0][2]=='X' && jeu [1][2]=='.' &&  jeu [2][2]=='X'
                ||jeu [1][0]=='O' && jeu [1][1]=='O' &&  jeu [1][2]=='.'
                || jeu [0][2]=='O' && jeu [1][2]=='.' &&  jeu [2][2]=='O'
                )
            {

                choix =6;

            }
            else if (

               jeu [0][0]=='X' && jeu [1][0]=='X' &&  jeu [2][0]=='.'
                || jeu [2][0]=='.' && jeu [2][1]=='X' &&  jeu [2][2]=='X'
                || jeu [2][0]=='.' && jeu [1][1]=='X' &&  jeu [0][2]=='X'
                ||   jeu [0][0]=='O' && jeu [1][0]=='O' &&  jeu [2][0]=='.'
                || jeu [2][0]=='.' && jeu [2][1]=='O' &&  jeu [2][2]=='O'
                || jeu [2][0]=='.' && jeu [1][1]=='O' &&  jeu [0][2]=='O'
                )
            {

                choix =7;

            }
            else if (

                jeu [0][1]=='X' && jeu [1][1]=='X' &&  jeu [2][1]=='.'
                || jeu [2][0]=='X' && jeu [2][1]=='.' &&  jeu [2][2]=='X'
                ||  jeu [0][1]=='O' && jeu [1][1]=='O' &&  jeu [2][1]=='.'
                || jeu [2][0]=='O' && jeu [2][1]=='.' &&  jeu [2][2]=='O'

                )
            {

                choix =8;

            }
            else if (


               jeu [2][0]=='X' && jeu [2][1]=='X' &&  jeu [2][2]=='.'
                || jeu [0][2]=='X' && jeu [1][2]=='X' &&  jeu [2][2]=='.'
                || jeu [0][0]=='X' && jeu [1][1]=='X' &&  jeu [2][2]=='.'
                || jeu [2][0]=='O' && jeu [2][1]=='O' &&  jeu [2][2]=='.'
                || jeu [0][2]=='O' && jeu [1][2]=='O' &&  jeu [2][2]=='.'
                || jeu [0][0]=='O' && jeu [1][1]=='O' &&  jeu [2][2]=='.'
                )
            {

                choix =9;

            }
            else {
                choix =(rand() % (MAX - MIN + 1)) + MIN;

            }
        }

    switch (choix)
    {
    case 1:
        if(joueur==1){
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else
        {
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else
            {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 2:
        if(joueur==1)
        {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' )
            {
                jeu[0][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' ) {
                jeu[0][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 3:
        if(joueur==1){
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 4:
        if(joueur==1){
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            clearScreen();
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'O';
                joueur = 1;
            }
            else {
                 clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 5:
        if(joueur==1){
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 6:
        if(joueur==1){
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 7:
        if(joueur==1){
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 8:
        if(joueur==1){
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'O';
                joueur = 1;
                clearScreen();

            }
             else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 9:
        if(joueur==1){
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'O';
                joueur = 1;
                clearScreen();
            }
             else {
                clearScreen();
                printf("\n \n Erreur, il y a deja une valeur \n");
            }

        }
    break;
    default:
         clearScreen();
         printf("\n La valeur saisie est eronee veuiller recommencer \n");
    break;
    }

printf("Modele \n");
printf("\n %d | %d | %d \n------------\n %d | %d | %d \n------------\n %d | %d | %d \n \n",
ins [0][0], ins [0][1], ins [0][2],
ins [1][0], ins [1][1], ins [1][2],
ins [2][0], ins [2][1], ins [2][2]
);
printf(" %c | %c | %c \n------------\n %c | %c | %c \n------------\n %c | %c | %c \n",
jeu [0][0], jeu [0][1], jeu [0][2],
jeu [1][0], jeu [1][1], jeu [1][2],
jeu [2][0], jeu [2][1], jeu [2][2]
);
    if (jeu [0][0]=='X' && jeu [0][1]=='X' && jeu [0][2]=='X' ||
    jeu [1][0]=='X' && jeu [1][1]=='X' && jeu [1][2]=='X' ||
    jeu [2][0]=='X' && jeu [2][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][0]=='X' && jeu [2][0]=='X' ||
    jeu [0][1]=='X' && jeu [1][1]=='X' && jeu [2][1]=='X' ||
    jeu [0][2]=='X' && jeu [1][2]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][2]=='X' && jeu [1][1]=='X' && jeu [2][0]=='X')
    {
        printf("\n Le joueur 1 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';

    }
    else if (  jeu [0][0]=='O' && jeu [0][1]=='O' && jeu [0][2]=='O' ||
    jeu [1][0]=='O' && jeu [1][1]=='O' && jeu [1][2]=='O' ||
    jeu [2][0]=='O' && jeu [2][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][0]=='O' && jeu [2][0]=='O' ||
    jeu [0][1]=='O' && jeu [1][1]=='O' && jeu [2][1]=='O' ||
    jeu [0][2]=='O' && jeu [1][2]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][2]=='O' && jeu [1][1]=='O' && jeu [2][0]=='O' )
    {
        printf("\n Le joueur 2 gagne \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
    else if (jeu [0][0]!='.' && jeu [0][1]!='.' && jeu [0][2]!='.' &&
    jeu [1][0]!='.' && jeu [1][1]!='.' && jeu [1][2]!='.' &&
    jeu [2][0]!='.' && jeu [2][1]!='.' && jeu [2][2]!='.')
    {
        printf("\n Match nul ! \n");
        niv = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }

        }
while(modedejeu==2){
        if (joueur==1) {
                printf("\n C'est au tour du joueur %s \n", nom);
                printf("\n JOUEZ ! \n");
                printf("\n Veuillez saisir le numero de la case \n");


        }
        else if(joueur==2){
                printf("\n C'est au tour du joueur %s \n", nom2);
                printf("\n JOUEZ ! \n");
                printf("\n Veuillez saisir le numero de la case \n");

        }
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        if(joueur==1){

            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else
        {
            if (jeu[0][0]!='O' && jeu[0][0] !='X' )
            {
                jeu[0][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else
            {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 2:
        if(joueur==1)
        {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' )
            {
                jeu[0][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][1]!='O' && jeu[0][1] !='X' ) {
                jeu[0][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 3:
        if(joueur==1){
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[0][2]!='O' && jeu[0][2] !='X' ) {
                jeu[0][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 4:
        if(joueur==1){
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][0]!='O' && jeu[1][0] !='X' ) {
                jeu[1][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 5:
        if(joueur==1){
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][1]!='O' && jeu[1][1] !='X' ) {
                jeu[1][1] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 6:
        if(joueur==1){
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[1][2]!='O' && jeu[1][2] !='X' ) {
                jeu[1][2] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 7:
        if(joueur==1){
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'X';
                joueur = 2;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][0]!='O' && jeu[2][0] !='X' ) {
                jeu[2][0] = 'O';
                joueur = 1;
                clearScreen();
            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 8:
        if(joueur==1){
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][1]!='O' && jeu[2][1] !='X' ) {
                jeu[2][1] = 'O';
                joueur = 1;
                clearScreen();

            }
             else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
    break;
    case 9:
        if(joueur==1){
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'X';
                joueur = 2;
                clearScreen();

            }
            else {
                clearScreen();
                printf("\n Erreur, il y a deja une valeur \n");
            }
        }
        else {
            if (jeu[2][2]!='O' && jeu[2][2] !='X' ) {
                jeu[2][2] = 'O';
                joueur = 1;
                clearScreen();
            }
             else {
                clearScreen();
                printf("\n \n Erreur, il y a deja une valeur \n");
            }

        }
    break;
    default:
         clearScreen();
         printf("\n La valeur saisie est eronee veuiller recommencer \n");
    break;
    }
printf("Modele \n");
printf("\n %d | %d | %d \n------------\n %d | %d | %d \n------------\n %d | %d | %d \n \n",
ins [0][0], ins [0][1], ins [0][2],
ins [1][0], ins [1][1], ins [1][2],
ins [2][0], ins [2][1], ins [2][2]
);
printf(" %c | %c | %c \n------------\n %c | %c | %c \n------------\n %c | %c | %c \n",
jeu [0][0], jeu [0][1], jeu [0][2],
jeu [1][0], jeu [1][1], jeu [1][2],
jeu [2][0], jeu [2][1], jeu [2][2]
);
    if (jeu [0][0]=='X' && jeu [0][1]=='X' && jeu [0][2]=='X' ||
    jeu [1][0]=='X' && jeu [1][1]=='X' && jeu [1][2]=='X' ||
    jeu [2][0]=='X' && jeu [2][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][0]=='X' && jeu [2][0]=='X' ||
    jeu [0][1]=='X' && jeu [1][1]=='X' && jeu [2][1]=='X' ||
    jeu [0][2]=='X' && jeu [1][2]=='X' && jeu [2][2]=='X' ||
    jeu [0][0]=='X' && jeu [1][1]=='X' && jeu [2][2]=='X' ||
    jeu [0][2]=='X' && jeu [1][1]=='X' && jeu [2][0]=='X')
    {
         printf("\n Le joueur %s gagne !  \n", nom);
        modedejeu = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';

    }
    else if (  jeu [0][0]=='O' && jeu [0][1]=='O' && jeu [0][2]=='O' ||
    jeu [1][0]=='O' && jeu [1][1]=='O' && jeu [1][2]=='O' ||
    jeu [2][0]=='O' && jeu [2][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][0]=='O' && jeu [2][0]=='O' ||
    jeu [0][1]=='O' && jeu [1][1]=='O' && jeu [2][1]=='O' ||
    jeu [0][2]=='O' && jeu [1][2]=='O' && jeu [2][2]=='O' ||
    jeu [0][0]=='O' && jeu [1][1]=='O' && jeu [2][2]=='O' ||
    jeu [0][2]=='O' && jeu [1][1]=='O' && jeu [2][0]=='O' )
    {
       printf("\n Le joueur %s gagne !  \n", nom2);
        modedejeu = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
    else if (jeu [0][0]!='.' && jeu [0][1]!='.' && jeu [0][2]!='.' &&
    jeu [1][0]!='.' && jeu [1][1]!='.' && jeu [1][2]!='.' &&
    jeu [2][0]!='.' && jeu [2][1]!='.' && jeu [2][2]!='.')
    {
        printf("\n Match nul ! \n");
        modedejeu = 0;
        go = 0;
        printf (" \n Pour recommencer le jeu saisir 1 : \n");
        scanf ("%d", &go);
        jeu [0][0]='.'; jeu [0][1]='.'; jeu [0][2]='.';
        jeu [1][0]='.'; jeu [1][1]='.'; jeu [1][2]='.';
        jeu [2][0]='.'; jeu [2][1]='.'; jeu [2][2]='.';
    }
}
    }
        }
    //partie != de 1 donc fin
    printf ("\n Fin  de la partie \n");

return 0;
}

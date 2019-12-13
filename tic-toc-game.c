#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    printf("=========================================================\n");
    printf("==                                                     ==\n");
    printf("==              Welcome to Tic Toc game!               ==\n");
    printf("==                                                     ==\n");
    printf("=========================================================\n");
    char player1[20] ;
    char player2[20] ;
    printf("Please enter player1 name:");
    scanf("%s", player1);
    printf("please enter playr2 name:");
    scanf("%s", player2);
    char a[3][3];
    a[0][0] = ' ';
    a[0][1] = ' ';
    a[0][2] = ' ';
    a[1][0] = ' ';
    a[1][1] = ' ';
    a[1][2] = ' ';
    a[2][2] = ' ';
    a[2][0] = ' ';
    a[2][1] = ' ';
    int counter = 0;
    int x ;
    bool value = false;
    while (value != true){
        if (counter % 2 == 0){
            printf("it's %s turn to play: ", player1);
            scanf("%d", &x);
            switch (x){
                case 1:
                    a[0][0] = 'x';
                    break;
                case 2:
                    a[0][1] = 'x';
                    break;
                case 3:
                    a[0][2] = 'x';
                    break;
                case 4:
                    a[1][0] = 'x';
                    break;
                case 5:
                    a[1][1] = 'x';
                    break;
                case 6:
                    a[1][2] = 'x';
                    break;
                case 7:
                    a[2][0] = 'x';
                    break;
                case 8:
                    a[2][1] = 'x';
                    break;
                case 9:
                    a[2][2] = 'x';
                    break;
            }
            printf(" %c | %c | %c \n", a[0][0], a[0][1], a[0][2]);
            printf("-----------\n");
            printf(" %c | %c | %c \n", a[1][0], a[1][1], a[1][2]);
            printf("-----------\n");
            printf(" %c | %c | %c \n\n", a[2][0], a[2][1], a[2][2]);
            counter++;
        }else{
            printf("it's %s turn to play: ", player2);
            scanf("%d", &x);
            switch (x){
                case 1:
                    a[0][0] = 'o';
                    break;
                case 2:
                    a[0][1] = 'o';
                    break;
                case 3:
                    a[0][2] = 'o';
                    break;
                case 4:
                    a[1][0] = 'o';
                    break;
                case 5:
                    a[1][1] = 'o';
                    break;
                case 6:
                    a[1][2] = 'o';
                    break;
                case 7:
                    a[2][0] = 'o';
                    break;
                case 8:
                    a[2][1] = 'o';
                    break;
                case 9:
                    a[2][2] = 'o';
                    break;
            
                    
                
            }
            printf(" %c | %c | %c \n", a[0][0], a[0][1], a[0][2]);
            printf("----------\n");
            printf(" %c | %c | %c \n", a[1][0], a[1][1], a[1][2]);
            printf("----------\n");
            printf(" %c | %c | %c \n\n", a[2][0], a[2][1], a[2][2]);
            counter++;
        }
        if ( ((a[0][0] == 'x') && (a[0][1] == 'x') && (a[0][2] == 'x')) || ((a[1][0] == 'x') && (a[1][1] == 'x') && (a[1][2] == 'x')) || ((a[2][0] == 'x') && (a[2][1] == 'x') && (a[2][2] == 'x')) || ((a[0][0] == 'x') && (a[1][0] == 'x') && (a[2][0] == 'x')) || ((a[0][1] == 'x') && (a[1][1] == 'x') && (a[2][1] == 'x')) || ((a[0][2] == 'x') && (a[1][2] == 'x') && (a[2][2] == 'x')) || ((a[0][0] == 'x') && (a[1][1] == 'x') && (a[2][2] == 'x')) || ((a[0][2] == 'x') && (a[1][1] == 'x') && (a[2][0] == 'x')) ) {
            value = true ;
            printf("Game Over!\n%s win the game!\n", player1);
            }else if ( ((a[0][0] == 'o') && (a[0][1] == 'o') && (a[0][2] == 'o')) || ((a[1][0] == 'o') && (a[1][1] == 'o') && (a[1][2] == 'o')) || ((a[2][0] == 'o') && (a[2][1] == 'o') && (a[2][2] == 'o')) || ((a[0][0] == 'o') && (a[1][0] == 'o') && (a[2][0] == 'o')) || ((a[0][1] == 'o') && (a[1][1] == 'o') && (a[2][1] == 'o')) || ((a[0][2] == 'o') && (a[1][2] == 'o') && (a[2][2] == 'o')) || ((a[0][0] == 'o') && (a[1][1] == 'o') && (a[2][2] == 'o')) || ((a[0][2] == 'o') && (a[1][1] == 'o') && (a[2][0] == 'o'))){
            value = true ;
            printf("Game Over!\n%s win the game!\n", player2);
            }else if(counter == 8){
                printf("No one win the game!\nWithdraw!\n");
                break;
            }
        
}
    system("pause");
    return 0;
}




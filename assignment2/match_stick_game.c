#include<stdio.h>
#include<stdlib.h>
int main(){

    int match_sticks = 21, user, comp, i;
    system("clear");
    printf("************************************************\n");
    printf("\t\tWelcome To MatchStick Game\n");

    printf("******* Rules ********\n");
    printf("->There are 21 matchsticks.\n");
    printf("->The computer asks the player to pick 1, 2, 3 or 4 matchsticks.\n");
    printf("->After the person picks, the computer does its picking.\n");
    printf("->Whoever is forced to pick up the last matchstick loses the game.\n");

    while(match_sticks>=1){
        printf("\n\nNumber of match sticks available:\t%d",match_sticks);
        printf("\nYour Turn\n");
        printf("Enter the no. of match sticks(1-4):\t");
        scanf("%d",&user);
        if(user>4){
            printf("You loosed\n");
            break;
        }

        comp = 5-user;
        printf("\nComputer's Turn\n");
        printf("Computer choosed %d no. of match sticks\n",comp);

        match_sticks = match_sticks - user - comp;

        if(match_sticks==1)
            break;
    }
    match_sticks--;
    printf("\nComputer wins\n");

    return 0;
}
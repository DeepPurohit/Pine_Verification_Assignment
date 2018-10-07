#include<stdio.h>

int main(){

    int year = 1, alternative, investments = 0;

    alternative = 90;

    while(alternative>investments){
        year++;
        alternative = 90*year;  //9% of 1000 = 90
        investments = (1000*year)-4000; //purchased at 6000 and condemned at 2000
    }

    printf("\nThe machine will serve for %d years\n",year);
    
    return 0;
}
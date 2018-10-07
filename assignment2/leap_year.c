#include<stdio.h>

int main(){
    int year;

    printf("Enter a year\n");
    scanf("%d",&year);

    if(year % 400 == 0)
            printf("%d is Leap Yyear\n",year);

    else if(year % 100 == 0)
            printf("%d is not a Leap Yyear\n",year);
        
    else if(year % 4 == 0)
            printf("%d is Leap Year\n",year);
    else
        printf("%d is not a Leap Year\n",year);

    
}
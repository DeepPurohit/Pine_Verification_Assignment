#include<stdio.h>

void main (){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
        printf("%c is Alphabet\n",ch);
    else if(ch >= 47 && ch <= 57)
        printf("%c is Number\n",ch);
    else
        printf("%c is a Special Character\n",ch);

}
#include<stdio.h>

void main (){
    char ch;
    printf("Enter an Alphabet\n");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 91)
        printf("%c is Uppercase\n",ch);
    else if(ch >= 97 && ch <= 123)
        printf("%c is Lowercase\n",ch);
    else
        printf("%c is not an Alphabet\n",ch);

}
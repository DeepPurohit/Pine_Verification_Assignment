#include<stdio.h>

int main(){
    int n,i;
    unsigned long long int fact=1;

    printf("Enter a number\n");
    scanf("%d",&n);
    i = n;
    while(i>=1){
        fact *= i--;
    }

    printf("\n\bFactorial of %d is %d\n",n,fact);

}
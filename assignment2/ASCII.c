#include<stdio.h>

int main(){

    int i;
    printf("Decimal \t Character\n");
    for(i=0; i<128; i++){
        printf(" %d \t \t%c\n",i,i);
    }
return 0;
}

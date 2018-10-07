#include<stdio.h>

int main(){

    int a[3], res;

    printf("Enter 3 no.s\n");
    for(int i=0; i<3; i++)
        scanf("%d",&a[i]);
    res = a[0]>a[1]?(a[0]>a[2]?a[0]:a[2]):(a[1]>a[2]?a[1]:a[2]);
    printf("%d is greatest no.\n",res);
    return 0;
}
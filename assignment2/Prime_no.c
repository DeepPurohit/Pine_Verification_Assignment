#include<stdio.h>

int main(){

    int i=2,j,count;

    while(i<=300){
        count = 0;
        for(j=1; j<=i; j++){
            if(i%j==0)
                count++;
        }
        if(count == 2)
            printf("%d is Prime no.\n",i);
        i++;
    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
void main(){
    int in[10], state = 0 ,i, j=0;
    system("clear");
    printf("Enter the sequence\n");
    printf("\n*Input should be '1' or '0'* \n");   
        for(i= 0; i<10; i++){
            scanf("%d",&in[i]);
            if(in[i]>1 && in[i] == 01){
                printf("\n**wrong input**\n");
                exit(0);
            }
                
        }
printf("\nOutput\n");
printf("----------\n");
    while(j<10){
        switch(state){
            case 0:
                    if(in[j] == 1){
                        printf("0");
                        printf("\nGoing to S1\n");
                        state = 1;
                        j++;
                    }
                    else{
                        printf("0");
                        printf("\nGoing to S0\n");
                        state = 0;
                        j++;
                    }
                    break;
            case 1:
                    if(in[j] == 0){
                        printf("0");
                        printf("\nGoing to S2\n");
                        state = 2;
                        j++;
                    }
                    else{
                        printf("0");
                        printf("\nGoing to S1\n");
                        state = 1;
                        j++;
                    }
                    break;
            case 2:
                    if(in[j] == 1){
                        printf("0");
                        printf("\nGoing to S3\n");
                        state = 3;
                        j++;
                    }
                    else{
                        printf("0");
                        printf("\nGoing to S0\n");
                        state = 0;
                        j++;
                    }
                    break;
            case 3:
                    if(in[j] == 1){
                        printf("1");
                        printf("\nGoing to S0\n");
                        state = 0;
                        j++;
                    }
                    else{
                        printf("0");
                        printf("\nGoing to S2\n");
                        state = 2;
                        j++;
                    }
        }

    }
    printf("\n");
}

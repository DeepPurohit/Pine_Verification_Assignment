#include<stdio.h>
#include<stdlib.h>
void main(){
    int in, state = 0 ,i, temp;
    char c;
    system("clear");
    
    do{ 
        printf("Enter the sequence\n");
        printf("\n*Input should be '1' or '0'* \n");   
        scanf("%d",&in);   
        if(in>1 && in == 01){
                printf("\n**wrong input**\n");
                exit(0);
            }
        printf("\nOutput\n");
        printf("----------\n");
                switch(state){
                    case 0:
                            if(in == 1){
                                printf("0");
                                printf("\nGoing to S1\n");
                                state = 1;
                            }
                            else{
                                printf("0");
                                printf("\nGoing to S0\n");
                                state = 0;
                            }
                            break;
                    case 1:
                            if(in == 0){
                                printf("0");
                                printf("\nGoing to S2\n");
                                state = 2;
                            }
                            else{
                                printf("0");
                                printf("\nGoing to S1\n");
                                state = 1;
                            }
                            break;
                    case 2:
                            if(in == 1){
                                printf("0");
                                printf("\nGoing to S3\n");
                                state = 3;
                            }
                            else{
                                printf("0");
                                printf("\nGoing to S0\n");
                                state = 0;
                            }
                            break;
                    case 3:
                            if(in == 1){
                                printf("1");
                                printf("\nGoing to S0\n");
                                state = 0;
                            }
                            else{
                                printf("0");
                                printf("\nGoing to S2\n");
                                state = 2;
                            }
            }
        printf("want to continue?(y/n)\t");
        scanf("%c",&c);
    }while(c == 'y');
printf("\n");
}

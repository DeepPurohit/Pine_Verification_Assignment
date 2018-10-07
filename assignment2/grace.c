#include<stdio.h>

int main(){

    int class, fail;

    printf("Enter the class obtained by the student\n");
    scanf("%d",&class);
    printf("\nEnter the no. of subjects in which he is fail\n");
    scanf("%d",&fail);

    switch(class){
        case 1:
                if(fail > 3){
                    printf("\nThe student doesn't gets any grace\n");
                    break;
                }
                else
                    printf("\nThe student gets %d grace marks\n",fail*5);
                break;
        case 2:
                if(fail > 2){
                    printf("\nThe student doesn't gets any grace\n");
                    break;
                }
                else
                    printf("\nThe student gets %d grace marks\n",fail*4);
                break;
        case 3:
                if(fail > 1){
                    printf("\nThe student doesn't gets any grace\n");
                    break;
                }
                else
                    printf("\nThe student gets %d grace marks\n",fail*5);
                break;
        default: printf("\n\n***** Invalid Class *****\n\n");
    }

    return 0;
}
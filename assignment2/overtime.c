#include<stdio.h>

int main(){
    int i, total_work_time, over_time = 0, over_time_pay = 0;

    for(i=0; i<10; i++){
        printf("Enter the total work time of employee %d :  ",i+1);
        scanf("%d",&total_work_time);

        over_time = 0;
        over_time_pay = 0;


        if(total_work_time>40){
            over_time = total_work_time - 40;
            over_time_pay = over_time_pay + over_time*12;
        }
        else{
            over_time = 0;
            over_time_pay = 0;
        }
        printf("Employe %d will get %d over time pay\n",i+1,over_time_pay);
    }

}
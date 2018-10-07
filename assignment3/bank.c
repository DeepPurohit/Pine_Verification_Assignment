#include<stdio.h>
#include<stdlib.h>
#define MAX 200

int n=0,total=0;
int wid_dep(int);
int low_balance();

struct account{
    int acc_no;
    char name[50];
    float Balance;
};

struct account acc[MAX];

int main(){
    system("clear");
    int op,op1;
    int ch,i=0;
    int accNo;

    start:
  printf("\nChoose option\n\n");
  printf("1. Add account\n2. List low balance accounts\n3. Withdraw or Deposite\n4. Exit\n");
  scanf("%d",&op);

  switch(op){
        case 1:
            printf("Enter the number of accounts to be added\n\n");
            scanf("%d",&n);
            total = i + n;
            while(i<total){
                printf("Enter details of account no. %d\n",i+1);
                printf("Enter account no.\t");
                scanf("%d",&acc[i].acc_no);
                printf("Enter Name of account holder\t");
                for(int j=0; j!=EOF; j++)
                scanf("%c",&acc[i].name[j]);
                // printf("Enter money deposited\t");
                // scanf("%f",&acc[i].Balance);
                i++;
            }
            printf("Do you want to continue?(1/0)\t");
                scanf("%d",&ch);
            if(ch==1)
                goto start;
            else
                break;
    
        case 2:
                low_balance();
                goto start;
                break;
        
        case 3:
                printf("Enter Account no.\t");
                scanf("%d",&accNo);
                wid_dep(accNo);
                goto start;
                break;

        case 4: exit(0);

        default: printf("\n****Incorrect option !!!****");
                goto start;
  }
  return 0;
}


//function definition

int low_balance(){
    if(total == 0){
        printf("\nNo accounts available\n\n");
        return 0;
    }
    else{
    printf("S.no.\tName\t\t\tAccount no.\t\tBalance\n");
    for(int i=0; i<total; i++){
        if(acc[i].Balance < 100.00)
            printf("\n%d\t%s\t\t\t%d\t\t\t%.2f\n",i+1,acc[i].name,acc[i].acc_no,acc[i].Balance);
    }
    }
    printf("\n\n");
    return 0;
}

int wid_dep(int ano){
    float amt,bal;
    int w_d,i,count=1;
    for(i=0; i<total; i++){
        if(acc[i].acc_no == ano){
            printf("\nWant to deposite or withdraw?(1/0)\t");
            scanf("%d",&w_d);
            if(w_d == 1){
                printf("\nEnter amount to deposite\tRs");
                scanf("%f",&amt);
                acc[i].Balance += amt;
                printf("\nYour balance is Rs%.2f",acc[i].Balance);
            }
            else if(w_d == 0){
                printf("\nEnter amount to withdraw\tRs");
                scanf("%f",&amt);
                bal = acc[i].Balance - amt;
                if(bal < 100.00){
                    printf("\nCan't Withdraw\n");
                    printf("\nYour balance is Rs%.2f",acc[i].Balance);
                    return 0;
                }
                else{
                    printf("\nBalance before withdraw Rs%.2f",acc[i].Balance);
                    acc[i].Balance -= amt;
                    printf("\nAmount withdrawed Rs%.2f",amt);
                    printf("\nYour balance is Rs%.2f",acc[i].Balance);
                }
            }
            
        }
        else
            count++;
    }
    
        if(count>total){
            printf("\nIncorrect Account no.\t%d\n\n",ano);
            return 0;
        }
    printf("\n\n");
    return 0;
}